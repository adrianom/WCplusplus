#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//Qui ci sono i prototipi
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void Messaggino();
};




#endif // MAINWINDOW_H
