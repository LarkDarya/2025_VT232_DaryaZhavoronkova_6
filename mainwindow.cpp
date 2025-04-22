#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDirIterator>
#include <QTextStream>
#include <QDebug>
#include <QFileSystemWatcher>
#include <QDir>
#include <QString>
#include <QSet>
#include <QFileInfo>
#include <QDateTime>
#include <QTextEdit>
#include <QFile>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , watcher(new QFileSystemWatcher(this))
    , logger(new Logger("F:\\Даша\\Репозиторий\\Mini_Git\\git.txt"))
{
    ui->setupUi(this);

    // Блокируем изменение текста в QTextEdit
    ui->textEdit->setReadOnly(true);
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

