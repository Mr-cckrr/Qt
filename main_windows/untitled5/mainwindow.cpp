#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QDockWidget>
#include <QStatusBar>
#include <QLabel>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMenuBar *MenuBar=new QMenuBar(this);
    setMenuBar(MenuBar);
    QMenu *filename= MenuBar->addMenu("file(&F)");

    filename->addAction("open file");
    filename->addAction("new build file");
    filename->addAction("chose file");
    filename->addAction("colse file");

    QMenu *MenuExid= MenuBar->addMenu("exid(&E)");
    MenuExid->addAction("copy");
    MenuExid->addAction("delet");
    MenuExid->addAction("paste");


    QToolBar *toolBar=new QToolBar(this);
    addToolBar(Qt::TopToolBarArea,toolBar);

    toolBar->addAction("quit");
    toolBar->addAction("build");
    toolBar->addAction("new file");

    QStatusBar *std=new QStatusBar(this);
    setStatusBar(std);
    QLabel *lab=new QLabel(this);
    lab->setText("状态栏");
    std->addWidget(lab);


    QDockWidget *dt=new QDockWidget("smallWindow",this);
    addDockWidget(Qt::LeftDockWidgetArea,dt);


    QTextEdit *clude=new QTextEdit(this);
    setCentralWidget(clude);


}

MainWindow::~MainWindow()
{
    delete ui;
}

