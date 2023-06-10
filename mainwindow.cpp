
#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_lineEdit_returnPressed()
{
    QString str = ui->lineEdit->text();
    NewValidator valid;
    if (valid.isValid(str))
        {
            ui->label->setText("Коректно");
        }
    else
        {
            ui->label->setText("Некоректно");
        }
}

