/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionopen;
    QAction *actionnew;
    QAction *actionrevocation;
    QAction *actionclose_2;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButton_color;
    QPushButton *pushButton_file;
    QPushButton *pushButton_font;
    QPushButton *pushButton_input;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menugouj;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1279, 629);
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        actionnew = new QAction(MainWindow);
        actionnew->setObjectName(QString::fromUtf8("actionnew"));
        actionrevocation = new QAction(MainWindow);
        actionrevocation->setObjectName(QString::fromUtf8("actionrevocation"));
        actionclose_2 = new QAction(MainWindow);
        actionclose_2->setObjectName(QString::fromUtf8("actionclose_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 701, 521));
        pushButton_color = new QPushButton(centralwidget);
        pushButton_color->setObjectName(QString::fromUtf8("pushButton_color"));
        pushButton_color->setGeometry(QRect(750, 20, 93, 29));
        pushButton_file = new QPushButton(centralwidget);
        pushButton_file->setObjectName(QString::fromUtf8("pushButton_file"));
        pushButton_file->setGeometry(QRect(910, 20, 93, 29));
        pushButton_font = new QPushButton(centralwidget);
        pushButton_font->setObjectName(QString::fromUtf8("pushButton_font"));
        pushButton_font->setGeometry(QRect(750, 80, 93, 29));
        pushButton_input = new QPushButton(centralwidget);
        pushButton_input->setObjectName(QString::fromUtf8("pushButton_input"));
        pushButton_input->setGeometry(QRect(910, 80, 93, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1279, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menugouj = new QMenu(menubar);
        menugouj->setObjectName(QString::fromUtf8("menugouj"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        dockWidget->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menugouj->menuAction());
        menu->addAction(actionopen);
        menu->addAction(actionnew);
        menu->addSeparator();
        menu->addAction(actionclose_2);
        menu_2->addAction(actionrevocation);
        toolBar->addAction(actionopen);
        toolBar->addSeparator();
        toolBar->addAction(actionnew);
        toolBar->addAction(actionrevocation);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionopen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        actionnew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
        actionrevocation->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
        actionclose_2->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\226\207\344\273\266", nullptr));
        pushButton_color->setText(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_file->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_font->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_input->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menugouj->setTitle(QCoreApplication::translate("MainWindow", "\346\236\204\345\273\272(&B)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\265\256\345\212\250\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
