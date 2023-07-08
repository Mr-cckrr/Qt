#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include<QPushButton>
#include<QColorDialog>
#include<QDebug>
#include<QFileDialog>
#include<QFontDialog>
#include<QInputDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDialog *dialog=new QDialog(this);//动态内存空间只有QMainWindow主窗口消失才会调运delet
    //dialog->show();//非模态对话框
//    dialog->resize(100,200);

    //dialog->exec();//模态对话框1 不显示父窗口
   /* dialog->setModal(true);*///模态对话框2 显示父窗口

//    dialog->show();


    dialog->setAttribute(Qt::WA_DeleteOnClose);//防止内存泄露，在窗口关闭时就调用delet
    ui->actionnew->setIcon(QIcon(":/Imge/Imge/me-1.png"));
    ui->actionopen->setIcon(QIcon(":/Imge/Imge/syetem-active.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_color_clicked()
{
//    QColorDialog dialog(this);

    QColor color = QColorDialog::getColor(Qt::red,this);
    qDebug() << "Color:" <<color;
}


void MainWindow::on_pushButton_file_clicked()
{
   QString filename =  QFileDialog::getOpenFileName(this,"open File","C:","图片文件 (*.png *.xpm *.jpg)");
   qDebug()<<"filename: "<<filename;
}


void MainWindow::on_pushButton_font_clicked()
{
    bool ok;

    QFont font= QFontDialog::getFont(&ok,this);
    if(ok)
    {
        ui->pushButton_font->setFont(font);
    }
    else
        qDebug()<<"没有选择字体";
}


void MainWindow::on_pushButton_input_clicked()
{
    bool ok;
    QString string= QInputDialog::getText(this,"输入字符串对话框","请输入用户名",QLineEdit::Normal,"Hello World",&ok);
    if(ok)
    {
        qDebug()<<"string: "<<string;
    }

}

