#include "playingboard.h"
#include <QDebug>
#include <QKeyEvent>
#include <QPainter>
#include <QVector>
#include <QSizePolicy>
PlayingBoard::PlayingBoard(QWidget *wid)
{
    setFocusPolicy(Qt::StrongFocus);

    Shape = new Cube();
    Shape = new Line();
    this->setBackgroundRole(QPalette::Base);
    this->setStyleSheet("background-color:gray;");
    moveByX = 0;
    moveByY = 0;
    Level =1;
    Timer = new QBasicTimer;
    Timer->start(timeoutTime(), this);

    this->setMaximumSize(260,320);
    this->setMinimumSize(260,320);
}
PlayingBoard::~PlayingBoard() {
    delete Shape;
}

void PlayingBoard::paintEvent(QPaintEvent *event) {

    Shape->draw(this,NewSizeX,NewSizeY,x+moveByX,y+moveByY);
}

double PlayingBoard::GetX() {
    return x;
}

void PlayingBoard::resizeEvent(QResizeEvent *event) {
    Height = this->size().height();
    Width = this->size().width();
    x = Width/2-1;
    y = Height/15-1;
    NewSizeX = Width/30;
    NewSizeY = Height/30;
}

void PlayingBoard::OneLineDown() {

    qDebug() << moveByY << this->size().height();
    if (moveByY+20 <= this->size().height()-20) {
        moveByY+=20;
        this->repaint();
    } else {
        moveByY-=20;
        this->repaint();
    }
}


void PlayingBoard::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Right) {
        moveByX+=20;
        this->repaint();
    } else if(event->key() == Qt::Key_Left) {
        moveByX-=20;
        this->repaint();
    } else if (event->key() == Qt::Key_Up) {
        //moveByY-=20;
        //this->repaint();
    } else if (event->key() == Qt::Key_Down) {
        //OneLineDown();
    }
}
void PlayingBoard::timerEvent(QTimerEvent *event)
{
    OneLineDown();
}

