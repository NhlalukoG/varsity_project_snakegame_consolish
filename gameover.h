#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QWidget>
#include "snake.h"
#include "highscore.h"

namespace Ui {
class Gameover;
}

class Gameover : public QWidget
{
    Q_OBJECT

public:
    explicit Gameover(QWidget *parent = 0,int eaten = 0,QString tym = "00:00:00",bool mode=false);
    ~Gameover();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Gameover *ui;
    bool playmode;
    HighScore *score;
};

#endif // GAMEOVER_H
