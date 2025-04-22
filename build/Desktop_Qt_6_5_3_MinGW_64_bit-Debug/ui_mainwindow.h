/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(751, 464);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(9);
        font.setItalic(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background: qlineargradient(\n"
"    x1: 0, y1: 0, \n"
"    x2: 1, y2: 1, \n"
"    stop: 0 #FFB608, \n"
"    stop: 0.5 #FF2553, \n"
"    stop: 1 #00103C\n"
");\n"
"border-radius: 10px;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 40, 221, 78));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(14);
        font1.setItalic(true);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: transparent;    /* \320\221\320\265\320\267 \321\204\320\276\320\275\320\260 */\n"
"    color: white;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    border: 2px solid white;    /* \320\221\320\265\320\273\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 35px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 11px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: transparent;    /* \320\221\320\265\320\267 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border: 3px solid white;     /* \320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\275\320\260\321\217 \320\261\320\265\320\273\320\260"
                        "\321\217 \321\200\320\260\320\274\320\272\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    text-decoration: underline;   /* \320\237\320\276\320\264\321\207\320\265\321\200\320\272\320\275\321\203\321\202\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        pushButton->setCheckable(false);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 180, 221, 78));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: transparent;    /* \320\221\320\265\320\267 \321\204\320\276\320\275\320\260 */\n"
"    color: white;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    border: 2px solid white;    /* \320\221\320\265\320\273\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 37px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 5px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: transparent;    /* \320\221\320\265\320\267 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border: 3px solid white;     /* \320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\275\320\260\321\217 \320\261\320\265\320\273\320\260"
                        "\321\217 \321\200\320\260\320\274\320\272\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    text-decoration: underline;   /* \320\237\320\276\320\264\321\207\320\265\321\200\320\272\320\275\321\203\321\202\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        pushButton_4->setCheckable(false);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(250, 20, 491, 391));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(11);
        font2.setItalic(true);
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background: transparent;    /* \320\221\320\265\320\267 \321\204\320\276\320\275\320\260 */\n"
"    color: white;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    border: 2px solid white;    /* \320\221\320\265\320\273\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 10px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 11px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 20, 481, 361));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: white;\n"
"    color: #00103C;\n"
"    font-family: 'Times New Roman';\n"
"    font-size: 12pt;\n"
"    padding: 5px;\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 320, 221, 71));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: transparent;    /* \320\221\320\265\320\267 \321\204\320\276\320\275\320\260 */\n"
"    color: white;               /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    border: 2px solid white;    /* \320\221\320\265\320\273\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */\n"
"    border-radius: 35px;        /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    padding: 6px;              /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: transparent;    /* \320\221\320\265\320\267 \321\204\320\276\320\275\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border: 3px solid white;     /* \320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\275\320\260\321\217 \320\261\320\265\320\273\320\260"
                        "\321\217 \321\200\320\260\320\274\320\272\320\260 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    text-decoration: underline;   /* \320\237\320\276\320\264\321\207\320\265\321\200\320\272\320\275\321\203\321\202\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 751, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Mini Git", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \n"
"\320\264\320\270\321\200\320\265\320\272\321\202\320\276\321\200\320\270\321\216", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \n"
"\320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\272\320\275\320\276 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \n"
"\321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
