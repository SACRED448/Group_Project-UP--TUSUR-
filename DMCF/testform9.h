#ifndef TESTFORM9_H
#define TESTFORM9_H

#include <QDialog>

namespace Ui {
class TestForm9;
}

class TestForm9 : public QDialog
{
    Q_OBJECT

public:
    explicit TestForm9(QWidget *parent = nullptr);
    bool a;
    int w, h;
    ~TestForm9();

signals:
    void next_button_clicked();

    void back_button_clicked();

    void finish_button_clicked();

private slots:
    void on_next_pushButton_clicked();

    void on_back_pushButton_clicked();

    void on_finish_pushButton_clicked();

private:
    Ui::TestForm9 *ui;
};

#endif // TESTFORM9_H
