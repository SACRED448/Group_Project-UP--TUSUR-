#include "testform7.h"
#include "ui_testform7.h"
#include <QPixmap>

TestForm7::TestForm7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm7)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm7::~TestForm7()
{
    delete ui;
}

void TestForm7::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm7::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm7::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
