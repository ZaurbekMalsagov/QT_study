#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/images/png-transparent-customer-login-avatar-head-portrait-client-user.png");
    int w = ui->image->width();
    int h = ui->image->height();

    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
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
        // QMessageBox::information(this, "Поздравляю", "Данные корректны");
        ui->statusbar->showMessage("Данные корректны");
    } else {
        // QMessageBox::warning(this, "Авторизация", "Неверные данные");
        ui->statusbar->showMessage("Данные не корректны");

    }

}

