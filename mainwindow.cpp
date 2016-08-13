#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QMouseEvent>
#include <QToolTip>
#include <GL/glu.h>
#include <QGLWidget>
#include "forwardwin.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   // setMouseTracking(true);
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{

    delete ui;

}
/*
void MainWindow::on_pushButton_clicked()
{
   // QMessageBox::information(this,tr("information"),tr("open"));
    QString fileName=QFileDialog::getOpenFileName(this,tr("文件对话框"),"D:",tr("图片文件（*png *jpg"));
}

*/


void MainWindow::on_actionOpenFile_triggered()
{
    //QMessageBox::information(this,tr("file"),tr("readfile"));
    ForwardWin *fw=new ForwardWin;

    fw->show();

}
/*
void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(rect(),Qt::white);
    painter.setPen(QPen(Qt::red,11));
    painter.drawLine(QPoint(5,6),QPoint(100,99));
    painter.translate(200,150);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawLine(QPoint(5,6),QPoint(100,99));
    painter.save();
    painter.rotate(90);
    painter.setPen(Qt::cyan);
    painter.drawLine(QPoint(5,6),QPoint(100,99));
    painter.restore();
    painter.setBrush(Qt::darkGreen);
    painter.drawRect(-50,-50,100,50);
    painter.save();
    painter.scale(0.5,0.4);
    painter.setBrush(Qt::yellow);
    painter.drawRect(-50,-50,100,50);
    painter.restore();
}*/
/*
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    QString pos=QString("%1,%2").arg(event->pos().x()).arg(event->pos().y());
    QToolTip::showText(event->globalPos(),pos,this);
}
*/

