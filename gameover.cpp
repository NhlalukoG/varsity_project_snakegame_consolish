#include "gameover.h"
#include "ui_gameover.h"
#include "startscreen.h"
#include "snake.h"
#include "highscore.h"
#include <QMessageBox>

Gameover::Gameover(QWidget *parent, int eaten,QString tym,bool mode) :
    QWidget(parent),
    ui(new Ui::Gameover)
{
    this->setWindowTitle("Game Over");
    playmode=mode;
    ui->setupUi(this);
    ui->label_2->setText(QString::number(eaten));
    ui->label_4->setText(tym);
}

Gameover::~Gameover()
{
    delete ui;
}

void Gameover::on_pushButton_clicked()
{
    Snake *game = new Snake(0,playmode);
    game->show();
    this->close();
}

void Gameover::on_pushButton_2_clicked()
{

    StartScreen *window = new StartScreen;
    window->show();
    this->close();

}

void Gameover::on_pushButton_3_clicked()
{
    QMessageBox *confirm = new QMessageBox;
    confirm->setWindowTitle("Confirm Quit");
    confirm->setText("Are you sure you want to exit the game?");

    confirm->setStandardButtons(QMessageBox::Yes);
    confirm->addButton(QMessageBox::No);
    confirm->setDefaultButton(QMessageBox::No);

    ;
    if(confirm->exec() == QMessageBox::Yes){
        this->close();
    }else{

    }
}
