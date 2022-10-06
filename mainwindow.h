#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void digitsNumbers();
    void on_pushButton_dot_clicked();
    void operations();
    void on_pushButton_clear_clicked();
    void on_pushButton_solve_clicked();
    void mathOperations();
    void memOperations();
    void on_pushButton_clearLastDigit_clicked();
    void trigonometricOperations();
};
#endif // MAINWINDOW_H
