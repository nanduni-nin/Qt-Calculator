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

void MainWindow::on_add_clicked()
{
    double a,b,c;
    a = ui->a->text().toDouble();
    b = ui->b->text().toDouble();

    c = a+b;

    ui->result->setText(QString::number(c));
}

void MainWindow::on_substract_clicked()
{
    double a,b,c;
    a = ui->a->text().toDouble();
    b = ui->b->text().toDouble();

    c = a-b;

    ui->result->setText(QString::number(c));
}

void MainWindow::on_multiply_clicked()
{
    double a,b,c;
    a = ui->a->text().toDouble();
    b = ui->b->text().toDouble();

    c = a*b;

    ui->result->setText(QString::number(c));
}

void MainWindow::on_divide_clicked()
{
    double a,b,c;
    a = ui->a->text().toDouble();
    b = ui->b->text().toDouble();

    c = a/b;

    ui->result->setText(QString::number(c));
}

void MainWindow::on_clear_clicked()
{
    ui->result->setText(QString::number(0));
    ui->a->setText(QString::number(0));
    ui->b->setText(QString::number(0));

}
