#include "tetrisshapes.h"
#include <QPainter>
#include <QPolygon>

TetrisShapes::TetrisShapes()
{

}

void Cube::draw(QWidget *WidPointer, int NewSizeX,int NewSizeY, int x,int y)
{
    QPainter painter(WidPointer);
    QPolygon poligon;
    poligon << QPoint(x-NewSizeX,y) << QPoint(x+20+NewSizeX,y) << QPoint(x+20+NewSizeX,y+20+NewSizeX) << QPoint(x-NewSizeX,y+20+NewSizeX);
    painter.drawPolygon(poligon);
}
void Line::draw(QWidget *WidPointer, int NewSizeX,int NewSizeY, int x,int y)
{
    QPainter painter(WidPointer);
    QPolygon poligon;
    poligon << QPoint(x-NewSizeX,y) << QPoint(x+20+NewSizeX,y) << QPoint(x+20+NewSizeX,y+20+NewSizeX) << QPoint(x-NewSizeX,y+20+NewSizeX);
    painter.drawPolygon(poligon);
}



