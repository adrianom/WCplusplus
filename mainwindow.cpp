#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

//Costruttore
MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(Messaggino()));
}

//Distruttore
MainWindow::~MainWindow()
{
    delete ui;
}

//Metodo che visualizza un messaggio, è lo slot di destinazione quando premo il pushbutton, deve essere inserito nei prototipi
void MainWindow::Messaggino()
{
    QMessageBox mybox;
    mybox.setText("Prova di messaggio in Qt/C++. Io sono una stringa");
    mybox.exec();
}
