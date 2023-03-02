#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->actionnew->setIcon(QIcon(":/Imge/Imge/me-1.png"));
    ui->actionopen->setIcon(QIcon(":/Imge/Imge/syetem-active.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

