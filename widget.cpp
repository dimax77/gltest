#include "widget.h"

Widget::Widget(QWidget *parent)
    : QOpenGLWidget(parent)
{
}

Widget::~Widget()
{

}

void Widget::initializeGL() {

}

void Widget::resizeGL(int w, int h) {
    glViewport(0, 0, w, h);
}

void Widget::paintGL() {
//    double tr[] = {0.0, 0.0, 1.0, 0.0, 1.0, 1.0};
//    unsigned int ind[] = {1 , 2, 3};
//    glEnableClientState(GL_VERTEX_ARRAY);
//    glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, ind);
}
