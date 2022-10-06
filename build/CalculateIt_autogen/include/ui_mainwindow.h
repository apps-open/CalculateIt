/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_pi;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_setNegative;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_00;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_dot;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_clearLastDigit;
    QPushButton *pushButton_readMem;
    QPushButton *pushButton_clearMem;
    QPushButton *pushButton_setMemPositive;
    QPushButton *pushButton_setMemNegative;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mlp;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_solve;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_arcsin;
    QPushButton *pushButton_arccos;
    QPushButton *pushButton_arcctg;
    QPushButton *pushButton_arctg;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tg;
    QPushButton *pushButton_ctg;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(501, 391);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 481, 41));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_pi = new QPushButton(widget);
        pushButton_pi->setObjectName(QString::fromUtf8("pushButton_pi"));
        QFont font;
        font.setBold(true);
        pushButton_pi->setFont(font);
        pushButton_pi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(170,170,170, 100);\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_pi);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 50, 481, 331));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_clear = new QPushButton(widget1);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy2);
        pushButton_clear->setFont(font2);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(170,170,170, 100);\n"
"}"));

        verticalLayout_4->addWidget(pushButton_clear);

        pushButton_7 = new QPushButton(widget1);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_4->addWidget(pushButton_7);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_4->addWidget(pushButton_4);

        pushButton_1 = new QPushButton(widget1);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy2.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy2);
        pushButton_1->setFont(font2);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_4->addWidget(pushButton_1);

        pushButton_0 = new QPushButton(widget1);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy2.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy2);
        pushButton_0->setFont(font2);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_4->addWidget(pushButton_0);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_setNegative = new QPushButton(widget1);
        pushButton_setNegative->setObjectName(QString::fromUtf8("pushButton_setNegative"));
        sizePolicy2.setHeightForWidth(pushButton_setNegative->sizePolicy().hasHeightForWidth());
        pushButton_setNegative->setSizePolicy(sizePolicy2);
        pushButton_setNegative->setFont(font2);
        pushButton_setNegative->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(170,170,170, 100);\n"
"}"));

        verticalLayout_5->addWidget(pushButton_setNegative);

        pushButton_8 = new QPushButton(widget1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_5->addWidget(pushButton_8);

        pushButton_5 = new QPushButton(widget1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_5->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_5->addWidget(pushButton_2);

        pushButton_00 = new QPushButton(widget1);
        pushButton_00->setObjectName(QString::fromUtf8("pushButton_00"));
        sizePolicy2.setHeightForWidth(pushButton_00->sizePolicy().hasHeightForWidth());
        pushButton_00->setSizePolicy(sizePolicy2);
        pushButton_00->setFont(font2);
        pushButton_00->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_5->addWidget(pushButton_00);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        pushButton_percent = new QPushButton(widget1);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        sizePolicy2.setHeightForWidth(pushButton_percent->sizePolicy().hasHeightForWidth());
        pushButton_percent->setSizePolicy(sizePolicy2);
        pushButton_percent->setFont(font2);
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(170,170,170, 100);\n"
"}"));

        verticalLayout_6->addWidget(pushButton_percent);

        pushButton_9 = new QPushButton(widget1);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_6->addWidget(pushButton_9);

        pushButton_6 = new QPushButton(widget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_6->addWidget(pushButton_6);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\\nbackground: rgba(215, 215, 215, 100);\n"
"}"));

        verticalLayout_6->addWidget(pushButton_3);

        pushButton_dot = new QPushButton(widget1);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        sizePolicy2.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy2);
        pushButton_dot->setFont(font2);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(170,170,170, 100);\n"
"}"));

        verticalLayout_6->addWidget(pushButton_dot);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        pushButton_clearLastDigit = new QPushButton(widget1);
        pushButton_clearLastDigit->setObjectName(QString::fromUtf8("pushButton_clearLastDigit"));
        sizePolicy2.setHeightForWidth(pushButton_clearLastDigit->sizePolicy().hasHeightForWidth());
        pushButton_clearLastDigit->setSizePolicy(sizePolicy2);
        pushButton_clearLastDigit->setFont(font2);
        pushButton_clearLastDigit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(170,170,170, 100);\n"
"}"));

        verticalLayout_7->addWidget(pushButton_clearLastDigit);

        pushButton_readMem = new QPushButton(widget1);
        pushButton_readMem->setObjectName(QString::fromUtf8("pushButton_readMem"));
        sizePolicy2.setHeightForWidth(pushButton_readMem->sizePolicy().hasHeightForWidth());
        pushButton_readMem->setSizePolicy(sizePolicy2);
        pushButton_readMem->setFont(font2);
        pushButton_readMem->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(93, 186, 0, 100);\n"
"}"));

        verticalLayout_7->addWidget(pushButton_readMem);

        pushButton_clearMem = new QPushButton(widget1);
        pushButton_clearMem->setObjectName(QString::fromUtf8("pushButton_clearMem"));
        sizePolicy2.setHeightForWidth(pushButton_clearMem->sizePolicy().hasHeightForWidth());
        pushButton_clearMem->setSizePolicy(sizePolicy2);
        pushButton_clearMem->setFont(font2);
        pushButton_clearMem->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(93, 186, 0, 100);\n"
"}"));

        verticalLayout_7->addWidget(pushButton_clearMem);

        pushButton_setMemPositive = new QPushButton(widget1);
        pushButton_setMemPositive->setObjectName(QString::fromUtf8("pushButton_setMemPositive"));
        sizePolicy2.setHeightForWidth(pushButton_setMemPositive->sizePolicy().hasHeightForWidth());
        pushButton_setMemPositive->setSizePolicy(sizePolicy2);
        pushButton_setMemPositive->setFont(font2);
        pushButton_setMemPositive->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(93, 186, 0, 100);\n"
"}"));

        verticalLayout_7->addWidget(pushButton_setMemPositive);

        pushButton_setMemNegative = new QPushButton(widget1);
        pushButton_setMemNegative->setObjectName(QString::fromUtf8("pushButton_setMemNegative"));
        sizePolicy2.setHeightForWidth(pushButton_setMemNegative->sizePolicy().hasHeightForWidth());
        pushButton_setMemNegative->setSizePolicy(sizePolicy2);
        pushButton_setMemNegative->setFont(font2);
        pushButton_setMemNegative->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(93, 186, 0, 100);\n"
"}"));

        verticalLayout_7->addWidget(pushButton_setMemNegative);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_div = new QPushButton(widget1);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        sizePolicy2.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy2);
        pushButton_div->setFont(font2);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(255, 85, 0, 100);\n"
"}"));

        verticalLayout_3->addWidget(pushButton_div);

        pushButton_mlp = new QPushButton(widget1);
        pushButton_mlp->setObjectName(QString::fromUtf8("pushButton_mlp"));
        sizePolicy2.setHeightForWidth(pushButton_mlp->sizePolicy().hasHeightForWidth());
        pushButton_mlp->setSizePolicy(sizePolicy2);
        pushButton_mlp->setFont(font2);
        pushButton_mlp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(255, 85, 0, 100);\n"
"}"));

        verticalLayout_3->addWidget(pushButton_mlp);

        pushButton_minus = new QPushButton(widget1);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        sizePolicy2.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy2);
        pushButton_minus->setFont(font2);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(255, 85, 0, 100);\n"
"}"));

        verticalLayout_3->addWidget(pushButton_minus);

        pushButton_plus = new QPushButton(widget1);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        sizePolicy2.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy2);
        pushButton_plus->setFont(font2);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(255, 85, 0, 100);\n"
"}"));

        verticalLayout_3->addWidget(pushButton_plus);

        pushButton_solve = new QPushButton(widget1);
        pushButton_solve->setObjectName(QString::fromUtf8("pushButton_solve"));
        sizePolicy2.setHeightForWidth(pushButton_solve->sizePolicy().hasHeightForWidth());
        pushButton_solve->setSizePolicy(sizePolicy2);
        pushButton_solve->setFont(font2);
        pushButton_solve->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(255, 85, 0, 100);\n"
"}"));

        verticalLayout_3->addWidget(pushButton_solve);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_sqrt = new QPushButton(widget1);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        sizePolicy2.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy2);
        pushButton_sqrt->setFont(font2);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(255, 85, 0, 100);\n"
"}"));

        verticalLayout_2->addWidget(pushButton_sqrt);

        pushButton_arcsin = new QPushButton(widget1);
        pushButton_arcsin->setObjectName(QString::fromUtf8("pushButton_arcsin"));
        sizePolicy2.setHeightForWidth(pushButton_arcsin->sizePolicy().hasHeightForWidth());
        pushButton_arcsin->setSizePolicy(sizePolicy2);
        pushButton_arcsin->setFont(font2);
        pushButton_arcsin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(71, 141, 212, 100);\n"
"}"));

        verticalLayout_2->addWidget(pushButton_arcsin);

        pushButton_arccos = new QPushButton(widget1);
        pushButton_arccos->setObjectName(QString::fromUtf8("pushButton_arccos"));
        sizePolicy2.setHeightForWidth(pushButton_arccos->sizePolicy().hasHeightForWidth());
        pushButton_arccos->setSizePolicy(sizePolicy2);
        pushButton_arccos->setFont(font2);
        pushButton_arccos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(71, 141, 212, 100);\n"
"}"));

        verticalLayout_2->addWidget(pushButton_arccos);

        pushButton_arcctg = new QPushButton(widget1);
        pushButton_arcctg->setObjectName(QString::fromUtf8("pushButton_arcctg"));
        sizePolicy2.setHeightForWidth(pushButton_arcctg->sizePolicy().hasHeightForWidth());
        pushButton_arcctg->setSizePolicy(sizePolicy2);
        pushButton_arcctg->setFont(font2);
        pushButton_arcctg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(71, 141, 212, 100);\n"
"}"));

        verticalLayout_2->addWidget(pushButton_arcctg);

        pushButton_arctg = new QPushButton(widget1);
        pushButton_arctg->setObjectName(QString::fromUtf8("pushButton_arctg"));
        sizePolicy2.setHeightForWidth(pushButton_arctg->sizePolicy().hasHeightForWidth());
        pushButton_arctg->setSizePolicy(sizePolicy2);
        pushButton_arctg->setFont(font2);
        pushButton_arctg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(71, 141, 212, 100);\n"
"}"));

        verticalLayout_2->addWidget(pushButton_arctg);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_pow = new QPushButton(widget1);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(pushButton_pow->sizePolicy().hasHeightForWidth());
        pushButton_pow->setSizePolicy(sizePolicy3);
        pushButton_pow->setFont(font2);
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(255, 85, 0, 100);\n"
"}"));

        verticalLayout->addWidget(pushButton_pow);

        pushButton_sin = new QPushButton(widget1);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        sizePolicy3.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy3);
        pushButton_sin->setFont(font2);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(71, 141, 212, 100);\n"
"}"));

        verticalLayout->addWidget(pushButton_sin);

        pushButton_cos = new QPushButton(widget1);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        sizePolicy3.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy3);
        pushButton_cos->setFont(font2);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(71, 141, 212, 100);\n"
"}"));

        verticalLayout->addWidget(pushButton_cos);

        pushButton_tg = new QPushButton(widget1);
        pushButton_tg->setObjectName(QString::fromUtf8("pushButton_tg"));
        sizePolicy3.setHeightForWidth(pushButton_tg->sizePolicy().hasHeightForWidth());
        pushButton_tg->setSizePolicy(sizePolicy3);
        pushButton_tg->setFont(font2);
        pushButton_tg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(71, 141, 212, 100);\n"
"}"));

        verticalLayout->addWidget(pushButton_tg);

        pushButton_ctg = new QPushButton(widget1);
        pushButton_ctg->setObjectName(QString::fromUtf8("pushButton_ctg"));
        sizePolicy3.setHeightForWidth(pushButton_ctg->sizePolicy().hasHeightForWidth());
        pushButton_ctg->setSizePolicy(sizePolicy3);
        pushButton_ctg->setFont(font2);
        pushButton_ctg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background: rgba(71, 141, 212, 100);\n"
"}"));

        verticalLayout->addWidget(pushButton_ctg);


        horizontalLayout_4->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CalculateIt", nullptr));
        pushButton_pi->setText(QCoreApplication::translate("MainWindow", "PI", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_setNegative->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_00->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_clearLastDigit->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        pushButton_readMem->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        pushButton_clearMem->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        pushButton_setMemPositive->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        pushButton_setMemNegative->setText(QCoreApplication::translate("MainWindow", "M-", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_mlp->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_solve->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_arcsin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_arccos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_arcctg->setText(QCoreApplication::translate("MainWindow", "actan", nullptr));
        pushButton_arctg->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "X^Y", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_tg->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_ctg->setText(QCoreApplication::translate("MainWindow", "ctan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
