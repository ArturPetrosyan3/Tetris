#ifndef TETRISWIDGET_H
#define TETRISWIDGET_H
#include "playingboard.h"
#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>


class TetrisWidget : public QWidget
{
    Q_OBJECT
public:
    TetrisWidget();
    ~TetrisWidget();

private:
    PlayingBoard *board;
    QGridLayout *Layout;

};

#endif // TETRISWIDGET_H
