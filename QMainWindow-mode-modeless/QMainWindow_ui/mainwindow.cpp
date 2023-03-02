#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDialog *dialog=new QDialog(this);//动态内存空间只有QMainWindow主窗口消失才会调运delet
    //dialog->show();//非模态对话框
    dialog->resize(100,200);
    //dialog->exec();//模态对话框1 不显示父窗口
    dialog->setModal(true);//模态对话框2 显示父窗口
    dialog->show();

    dialog->setAttribute(Qt::WA_DeleteOnClose);//防止内存泄露，在窗口关闭时就调用delet
    ui->actionnew->setIcon(QIcon(":/Imge/Imge/me-1.png"));
    ui->actionopen->setIcon(QIcon(":/Imge/Imge/syetem-active.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

