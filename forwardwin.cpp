#include "forwardwin.h"
#include "ui_forwardwin.h"
#include "gl/glu.h"


ForwardWin::ForwardWin(QWidget *parent) :
    QGLWidget(parent),
    ui(new Ui::ForwardWin)
{
    rTri=0.0;
    rQuad=0.0;
    ui->setupUi(this);
    //TEST

}


ForwardWin::~ForwardWin()
{
    delete ui;
}

void ForwardWin::initializeGL()
{
    glClearColor(0,0,0,0);
    glShadeModel(GL_SMOOTH);
    glClearDepth(1);
    glEnable(GL_DEPTH_TEST);

}
void ForwardWin::resizeGL(int w,int h)
{
    glViewport(0,0,(GLint)w,(GLint)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45,(GLfloat)w/(GLfloat)h,0.1,100);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void ForwardWin::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(-2,0,-6);
    glRotatef(rTri,0,1,0);
    glBegin(GL_TRIANGLES);

    glColor3f(1,0,0);
    glVertex3f(0,1,0);
    glColor3f(0,1,0);
    glVertex3f(-1,-1,1);
    glColor3f(0,0,1);
    glVertex3f(1,-1,1);

    glColor3f(1,0,0);
    glVertex3f(0,1,0);
    glColor3f(0,0,1);
    glVertex3f(1,-1,1);
    glColor3f(0,1,0);
    glVertex3f(1,-1,-1);

    glColor3f(1,0,0);
    glVertex3f(0,1,0);
    glColor3f(0,0,1);
    glVertex3f(-1,-1,-1);
    glColor3f(0,1,0);
    glVertex3f(-1,-1,1);

    glColor3f( 1.0, 0.0, 0.0 );
    glVertex3f(  0.0,  1.0,  0.0 );
    glColor3f( 0.0, 1.0, 0.0 );
    glVertex3f(  1.0, -1.0, -1.0 );
    glColor3f( 0.0, 0.0, 1.0 );
    glVertex3f( -1.0, -1.0, -1.0 );
    glEnd();


    glLoadIdentity();
    glTranslatef(1.5,0,-7);
    glRotatef(rQuad,1,1,1);
    glBegin(GL_QUADS);

    glColor3f(0,1,0);
    glVertex3f(1,1,-1);
    glVertex3f(-1,1,-1);
    glVertex3f(-1,1,1);
    glVertex3f(1,1,1);

    glColor3f(1,0.5,0);
    glVertex3f(1,-1,1);
    glVertex3f(-1,-1,1);
    glVertex3f(-1,-1,-1);
    glVertex3f(1,-1,-1);

    glColor3f(1,0,0);
    glVertex3f(1,1,1);
    glVertex3f(-1,1,1);
    glVertex3f(-1,-1,1);
    glVertex3f(1,-1,1);

    glColor3f(1,1,0);
    glVertex3f(1,-1,-1);
    glVertex3f(-1,-1,-1);
    glVertex3f(-1,1,-1);
    glVertex3f(1,1,-1);

    glColor3f(0,0,1);
    glVertex3f(-1,1,1);
    glVertex3f(-1,1,-1);
    glVertex3f(-1,-1,-1);
    glVertex3f(-1,-1,1);

    glColor3f(1,0,1);
    glVertex3f(1,1,-1);
    glVertex3f(1,1,1);
    glVertex3f(1,-1,1);
    glVertex3f(1,-1,-1);

    glEnd();



    rTri+=2;
    rQuad+=2;
}
