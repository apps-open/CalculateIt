#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cmath>

double numFirst;
double memCell;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_00, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digitsNumbers()));
    connect(ui->pushButton_setNegative, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_pi, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_percent, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(mathOperations()));
    connect(ui->pushButton_mlp, SIGNAL(clicked()), this, SLOT(mathOperations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(mathOperations()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(mathOperations()));
    connect(ui->pushButton_pow, SIGNAL(clicked()), this, SLOT(mathOperations()));
    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(trigonometricOperations()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(trigonometricOperations()));
    connect(ui->pushButton_tg, SIGNAL(clicked()), this, SLOT(trigonometricOperations()));
    connect(ui->pushButton_ctg, SIGNAL(clicked()), this, SLOT(trigonometricOperations()));
    connect(ui->pushButton_arcsin, SIGNAL(clicked()), this, SLOT(trigonometricOperations()));
    connect(ui->pushButton_arccos, SIGNAL(clicked()), this, SLOT(trigonometricOperations()));
    connect(ui->pushButton_arctg, SIGNAL(clicked()), this, SLOT(trigonometricOperations()));
    connect(ui->pushButton_arcctg, SIGNAL(clicked()), this, SLOT(trigonometricOperations()));
    connect(ui->pushButton_setMemNegative, SIGNAL(clicked()), this, SLOT(memOperations()));
    connect(ui->pushButton_setMemPositive, SIGNAL(clicked()), this, SLOT(memOperations()));
    connect(ui->pushButton_clearMem, SIGNAL(clicked()), this, SLOT(memOperations()));
    connect(ui->pushButton_readMem, SIGNAL(clicked()), this, SLOT(memOperations()));
    ui->pushButton_div->setCheckable(true);
    ui->pushButton_mlp->setCheckable(true);
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_pow->setCheckable(true);
    ui->pushButton_sin->setCheckable(true);
    ui->pushButton_cos->setCheckable(true);
    ui->pushButton_tg->setCheckable(true);
    ui->pushButton_ctg->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digitsNumbers() {
    QPushButton *button = (QPushButton *)sender();
    double all_numbers = (ui->label->text() + button->text()).toDouble();
    QString newLabel = QString::number(all_numbers, 'g', 15);
    ui->label->setText(newLabel);
}

void MainWindow::operations() {
    QPushButton *button = (QPushButton *)sender();
    double all_numbers = 0.0;
    if (button->text() == "+/-") {
        all_numbers = ui->label->text().toDouble() * -1;
    } else if (button->text() == '%') {
        all_numbers = ui->label->text().toDouble() * 0.01;
    } else if (button->text() == "sqrt") {
        all_numbers = sqrt(ui->label->text().toDouble());
    } else if (button->text() == "PI") {
        all_numbers = M_PI;
    }
    QString newLabel = QString::number(all_numbers, 'g', 15);
    ui->label->setText(newLabel);
}
void MainWindow::on_pushButton_dot_clicked()
{
    if (!ui->label->text().contains('.'))
        ui->label->setText(ui->label->text() + ".");
}

void MainWindow::trigonometricOperations() {
    double labelNumber = 0, numSecond;
    QString newLabel;
    QPushButton *button = (QPushButton *)sender();
    button->setChecked(true);
    numFirst = ui->label->text().toDouble();
    if(button->text() == "sin") {
        labelNumber = sin(numFirst);
    } else if(button->text() == "cos") {
        labelNumber = cos(numFirst);
    } else if(button->text() == "tan") {
        labelNumber = tan(numFirst);
    } else if(button->text() == "ctan") {
        labelNumber = 1 / tan(numFirst);
    } else if(button->text() == "asin") {
        labelNumber = asin(numFirst);
    } else if(button->text() == "acos") {
        labelNumber = acos(numFirst);
    } else if(button->text() == "atan") {
        labelNumber = atan(numFirst);
    } else if(button->text() == "actan") {
        labelNumber = atan(1 / numFirst);
    }
        newLabel = QString::number(labelNumber, 'g', 15);
        ui->label->setText(newLabel);
}
void MainWindow::mathOperations() {
    QPushButton *button = (QPushButton *)sender();
    numFirst = ui->label->text().toDouble();
    ui->label->setText("0");
    button->setChecked(true);
}

void MainWindow::memOperations() {
    QPushButton *button = (QPushButton *)sender();
    button->setChecked(true);
    numFirst = ui->label->text().toDouble();
    if(button->text() == "M+") {
        memCell = ui->label->text().toDouble();
    } else if(button->text() == "M-") {
        memCell = ui->label->text().toDouble() * -1;
    } else if(button->text() == "MR") {
        QString newLabel = QString::number(memCell, 'g', 15);
        ui->label->setText(newLabel);
    } else if(button->text() == "MC") {
        memCell = 0;
        ui->label_2->setStyleSheet("color: rgb(220,220,220);");
    }
    memCell == 0 ? ui->label_2->setStyleSheet("color: rgb(220,220,220);") : ui->label_2->setStyleSheet("color: #000;");
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->label->setText("0");
}

void MainWindow::on_pushButton_solve_clicked()
{
    double labelNumber = 0, numSecond = 0;
    QString newLabel = "0";

    numSecond = ui->label->text().toDouble();

    if(ui->pushButton_plus->isChecked()) {
        labelNumber = numFirst + numSecond;
        ui->pushButton_plus->setChecked(false);
    } else if(ui->pushButton_minus->isChecked()) {
        labelNumber = numFirst - numSecond;
        ui->pushButton_minus->setChecked(false);
    } else if(ui->pushButton_mlp->isChecked()) {
        labelNumber = numFirst * numSecond;
        ui->pushButton_mlp->setChecked(false);
    } else if(ui->pushButton_div->isChecked()) {
        labelNumber = numFirst != 0 ? numFirst / numSecond : 0;
        ui->pushButton_div->setChecked(false);
    } else if(ui->pushButton_pow->isChecked()) {
        labelNumber = pow(numFirst, numSecond);
        ui->pushButton_pow->setChecked(false);
    }
    newLabel = QString::number(labelNumber, 'g', 15);
    ui->label->setText(newLabel);
}


void MainWindow::on_pushButton_clearLastDigit_clicked()
{
    QString number = ui->label->text();
    QString newNumber = "";
    if (number.length() == 1) {
        newNumber = "0";
    } else {
        for(int i = 0; i < number.length()-1; i++) {
            newNumber += number[i];
        }
    }
    ui->label->setText(newNumber);
}

