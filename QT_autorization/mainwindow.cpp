#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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



void MainWindow::on_psBtnAutorize_clicked()
{

    QString login = ui->lELogin->text();
    QString password = ui->lEPassword->text();

    if (login == "Zaurbek" && password == "NeNravitsa_QT"){
        QMessageBox::information(this, "Поздравляю", "Данные корректны");
    } else {
        QMessageBox::warning(this, "Авторизация", "Неверные данные");
    }

}

