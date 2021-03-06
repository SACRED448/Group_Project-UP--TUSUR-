#include "testform5.h"
#include "ui_testform5.h"
#include <QPixmap>

TestForm5::TestForm5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestForm5)
{
    ui->setupUi(this);
    QPixmap pix(":/pictures/camp.jpg");
    w = ui->image->width();
    h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

TestForm5::~TestForm5()
{
    delete ui;
}

void TestForm5::on_next_pushButton_clicked()
{
    emit next_button_clicked();
}

void TestForm5::on_back_pushButton_clicked()
{
    emit back_button_clicked();
}

void TestForm5::on_finish_pushButton_clicked()
{
    emit finish_button_clicked();
}
