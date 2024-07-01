#include "mainwindow.h"
#include "./ui_mainwindow.h"
//#include"connections.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
       hide();
       wdb=new Connections(this);
       wdb->show();
}

