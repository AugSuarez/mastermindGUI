#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}
QString slotStyleString(QPushButton button){
    return button.styleSheet();
}

void MainWindow::on_btnred_clicked()
{
    QVector<QLabel*> v{ui->slot1, ui->slot2, ui->slot3, ui->slot4};
    ui->slot1->setStyleSheet("QLabel { background-color:#ff0000; border-radius: 15px;}");
}
