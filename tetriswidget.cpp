#include "tetriswidget.h"
#include "ui_tetriswidget.h"
#include <QKeyEvent>
#include <QDebug>
TetrisWidget::TetrisWidget()
{
    Layout = new QGridLayout;
    board = new PlayingBoard(this);
    board->setFocus();
    Layout->addWidget(board,0,0);
    setLayout(Layout);
    this->setMaximumSize(260,320);
}


TetrisWidget::~TetrisWidget()
{
    delete Layout;
    delete board;
}


