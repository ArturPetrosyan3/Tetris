#ifndef TETRISSHAPES_H
#define TETRISSHAPES_H
#include <QPoint>
#include <QWidget>
#include <QPainter>
class TetrisShapes
{
public:
    TetrisShapes();
    virtual void draw(QWidget *WidPointer, int NewSizeX=0, int NewSizeY=0, int x=0,int y=0)=0;
public:

private:
    QPoint StartPoint;
    QPoint EndPoint;
};



class Cube: public TetrisShapes {
public:
    void draw(QWidget *WidPointer, int NewSizeX=0, int NewSizey=0, int x=0,int y=0);
private:

};
class Line: public TetrisShapes {
public:
    void draw(QWidget *WidPointer, int NewSizeX=0, int NewSizey=0, int x=0,int y=0);
private:
};

#endif // TETRISSHAPES_H
