#ifndef PLAYINGBOARD_H
#define PLAYINGBOARD_H

#include <QWidget>
#include <tetrisshapes.h>
#include <QBasicTimer>
class PlayingBoard: public QWidget
{
public:
    PlayingBoard(QWidget *wid=0);
    ~PlayingBoard();
    void paintEvent(QPaintEvent *event);
    double GetX();
    void OneLineDown();
    void OneColumnRight();
    void OneColumnLeft();

    int timeoutTime() {
        return 1000 / (1 + Level);
    }
protected:
    void keyPressEvent(QKeyEvent *event);
    void timerEvent(QTimerEvent *event);
    void resizeEvent(QResizeEvent *event);
private:
    QBasicTimer *Timer;
    TetrisShapes *Shape;
    int Height;
    int Width;
    int x;
    int y;
    int moveByX;
    int moveByY;
    int NewSizeX;
    int NewSizeY;
    int Level;
};

#endif // PLAYINGBOARD_H
