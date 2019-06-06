#ifndef PAUSED_H
#define PAUSED_H

#include <QDialog>
#include "timer.h"
#include "snake.h"
#include "highscore.h"

namespace Ui {
class paused;
}

class paused : public QDialog
{
    Q_OBJECT

public:
    explicit paused(QWidget *parent = 0,int eaten = 0,QString tym = "00:00:00",bool mode=false,Snake *game=0);
    ~paused();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::paused *ui;
    Timer *timeit;
    bool playmode;
    Snake *lastgame;
    HighScore *score;
};

#endif // PAUSED_H
