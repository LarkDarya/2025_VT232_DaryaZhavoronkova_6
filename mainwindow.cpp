#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog> // Диалоговые окна для выбора файлов и директорий
#include <QMessageBox> // Отображает окна с сообщениями, предупреждениями и вопросами
#include <QDirIterator> // Упрощает итерацию по файлам и папкам в заданной директории
#include <QTextStream> // Способ чтения и записи текстовых данных в файлы и другие потоки
#include <QDebug> // Средства для отладки, включая функции для вывода отладочной информации в консоль
#include <QFileSystemWatcher> // Позволяет отслеживать изменения в файловой системе
#include <QDir> // Представляет директорию и методы для работы с файловой системой.
#include <QString> // Класс для работы со строками в Qt, поддерживающий Unicode
#include <QSet> // Реализация множества, позволяющая хранить уникальные элементы
#include <QFileInfo> // Предоставляет информацию о файлах
#include <QTextEdit> // Для редактирования и отображения многострочного текста


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , watcher(new QFileSystemWatcher(this))
    , logger(new Logger("F:\\Даша\\Репозиторий\\Mini_Git\\git.txt"))
{
    ui->setupUi(this);

    // Блокируем изменение текста в QTextEdit
    ui->textEdit->setReadOnly(true);

    connect(watcher, &QFileSystemWatcher::directoryChanged, this, &MainWindow::directoryChanged);
    connect(watcher, &QFileSystemWatcher::fileChanged, this, &MainWindow::fileChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString folderPath = QFileDialog::getExistingDirectory(this,
                                                           "Выберите папку",
                                                           QDir::homePath(),
                                                           QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    if (!folderPath.isEmpty()) {
        QMessageBox::information(this, "Выбранная папка", folderPath);

        // Удаляем предыдущий путь отслеживания, если он существует
        if (!watchedDirectory.isEmpty()) {
            watcher->removePath(watchedDirectory);
        }

        watchedDirectory = folderPath;
        watcher->addPath(watchedDirectory); // Добавляем путь к новому отслеживанию

        // Логируем информацию о новой директории
        logger->logMessage("Отслеживаемая директория: " + folderPath.toStdString());

        // Инициализируем начальный список файлов
        updateFileList();
    }
}

void MainWindow::updateFileList()
{
    previousFiles.clear(); // Очищаем предыдущий список

    QDirIterator it(watchedDirectory, QDir::Files | QDir::NoDotAndDotDot, QDirIterator::Subdirectories);
    while (it.hasNext()) {
        QString filePath = it.next();
        previousFiles.insert(filePath);
        watcher->addPath(filePath); // Отслеживаем каждый файл
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    // Путь к файлу записи
    QString filePath = "F:\\Даша\\Репозиторий\\Mini_Git\\git.txt";

    QFile file(filePath);

    // Открываем файл в режиме чтения
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл");
        return;
    }

    // Читаем содержимое файла
    QTextStream in(&file);
    QString fileContent = in.readAll();

    // Устанавливаем содержимое в QLabel
    ui->textEdit->setText(fileContent);
}

void MainWindow::on_pushButton_3_clicked()
{
    // Путь к файлу
    QString filePath = "F:\\Даша\\Репозиторий\\Mini_Git\\git.txt";

    QFile file(filePath);

    // Открываем файл в режиме записи (это очистит его содержимое)
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        // Закрываем файл после открытия
        file.close();
        QMessageBox::information(this, "Успех", "Содержимое файла успешно удалено.");
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл для удаления содержимого.");
    }
}

void MainWindow::directoryChanged(const QString &path)
{
    QSet<QString> currentFiles;
    QDirIterator it(path, QDir::Files | QDir::NoDotAndDotDot, QDirIterator::Subdirectories);
    while (it.hasNext()) {
        currentFiles.insert(it.next());
    }

    QSet<QString> removedFiles = previousFiles - currentFiles;
    QSet<QString> addedFiles = currentFiles - previousFiles;

    // Создаем копии для итерации и удаления элементов
    QSet<QString> removedFilesCopy = removedFiles;
    QSet<QString> addedFilesCopy = addedFiles;

    // Проверяем переименования
    for (const QString &removedFile : removedFilesCopy) {
        for (const QString &addedFile : addedFilesCopy) {
            if (QFileInfo(removedFile).fileName() != QFileInfo(addedFile).fileName()) {
                logger->logMessage("Файл переименован: " + removedFile.toStdString() + " в " + addedFile.toStdString());
                removedFiles.remove(removedFile);
                addedFiles.remove(addedFile);
                watcher->removePath(removedFile);
                watcher->addPath(addedFile);

                break; // Переходим к следующему удаленному файлу
            }
        }
    }

    // Обрабатываем оставшиеся добавленные и удаленные файлы
    for (const QString &addedFile : addedFiles) {
        logger->logMessage("Файл создан: " + addedFile.toStdString());
        watcher->addPath(addedFile);
    }

    for (const QString &removedFile : removedFiles) {
        logger->logMessage("Файл удалён: " + removedFile.toStdString());
        watcher->removePath(removedFile);

    }

    previousFiles = currentFiles;
}

void MainWindow::fileChanged(const QString &path)
{
    QFileInfo fileInfo(path);
    // Проверяем, существует ли файл и изменилось ли он
    if (fileInfo.exists()) {
        logger->logMessage("Файл изменен: " + fileInfo.filePath().toStdString());
    }
}


