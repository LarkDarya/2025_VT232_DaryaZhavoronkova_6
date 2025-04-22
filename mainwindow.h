#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include "smartpoint.h"
#include "logger.h"
#include <QMainWindow>
#include <QFileSystemWatcher>
#include <QString>
#include <QSet>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QFileSystemWatcher *watcher;  // Для отслеживания изменений в директории
    QString watchedDirectory;       // Путь к отслеживаемой директории
    SmartPoint<Logger> logger;
    QSet<QString> previousFiles;


    void updateFileList();
};
#endif // MAINWINDOW_H
