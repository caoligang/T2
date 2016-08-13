#ifndef FORWARDWIN_H
#define FORWARDWIN_H

#include <QWidget>
#include <QGLWidget>

namespace Ui {
class ForwardWin;
}

class ForwardWin : public QGLWidget
{
    Q_OBJECT

public:
    explicit ForwardWin(QWidget *parent = 0);
    ~ForwardWin();

private:
    Ui::ForwardWin *ui;
protected:
    void initializeGL();
    void resizeGL(int w,int h);
    void paintGL();
protected:
    GLfloat rTri;
    GLfloat rQuad;
};

#endif // FORWARDWIN_H
