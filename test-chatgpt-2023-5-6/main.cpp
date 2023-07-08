#include "dialog.h"

#include <QApplication>
#include <QtWidgets>
int main(int argc, char *argv[])
{



 QApplication app(argc, argv);

    // 创建主窗口
    QWidget *mainWindow = new QWidget;
    mainWindow->setWindowTitle("Qt页面示例");

    // 创建输入框
    QLineEdit *lineEdit = new QLineEdit(mainWindow);
    lineEdit->setGeometry(10, 10, 200, 30);

    // 创建文件选择项
    QLabel *fileLabel = new QLabel("选择文件:", mainWindow);
    fileLabel->setGeometry(10, 50, 80, 30);
    QLineEdit *fileLineEdit = new QLineEdit(mainWindow);
    fileLineEdit->setGeometry(90, 50, 120, 30);
    QPushButton *fileButton = new QPushButton("选择", mainWindow);
    fileButton->setGeometry(220, 50, 60, 30);

    QObject::connect(fileButton, &QPushButton::clicked, [=]() {
        QString fileName = QFileDialog::getOpenFileName(mainWindow, "选择文件", ".", "所有文件(*.*)");
        fileLineEdit->setText(fileName);
    });

    // 显示主窗口
    mainWindow->show();

    return app.exec();

//    QApplication a(argc, argv);
//    Dialog w;
//    w.show();
//    return a.exec();
}
