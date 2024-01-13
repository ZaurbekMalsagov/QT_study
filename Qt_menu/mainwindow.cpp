#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item_1 = new QListWidgetItem(QIcon(":/res/images/1.png"), "Kanon");
    ui->listWidget->addItem(item_1);
    QListWidgetItem *item_2 = new QListWidgetItem(QIcon(":/res/images/1.png"), "MSI");
    ui->listWidget->addItem(item_2);
    QListWidgetItem *item_3 = new QListWidgetItem(QIcon(":/res/images/1.png"), "Astolfo");
    ui->listWidget->addItem(item_3);
    QListWidgetItem *item_4 = new QListWidgetItem(QIcon(":/res/images/1.png"), "Thunder");
    ui->listWidget->addItem(item_4);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    ui->statusbar->showMessage("Создание нового проекта");

}


void MainWindow::on_action_2_triggered()
{
    ui->statusbar->showMessage("Открытие нового проекта");
}


void MainWindow::on_action_3_triggered()
{
    QApplication::quit();
}


void MainWindow::on_psBtnChoosElement_clicked()
{
    ui->statusbar->showMessage(ui->listWidget->currentItem()->text());
}

