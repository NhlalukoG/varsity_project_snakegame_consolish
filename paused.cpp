#include "paused.h"
#include "ui_paused.h"
#include "startscreen.h"
#include "snake.h"
#include "highscore.h"
#include <QMessageBox>
paused::paused(QWidget *parent, int eaten,QString tym,bool mode, Snake *game) :
    QDialog(parent),
    ui(new Ui::paused)
{
    this->setWindowTitle("Paused");
    lastgame = game;
    playmode=mode;
    ui->setupUi(this);
    ui->label_4->setText(QString::number(eaten));
    ui->label->setText(tym);
}

paused::~paused()
{

    delete ui;
}

void paused::on_pushButton_clicked()
{
    if(playmode == false){
        this->hide();
        timeit = new Timer();
        timeit->exec();
        this->close();
    }else{
        this->close();
    }
}

void paused::on_pushButton_2_clicked()
{
    Snake *game = new Snake(0,playmode);
    this->hide();
    lastgame->close();
    game->show();
    delete this;
}

void paused::on_pushButton_3_clicked()
{
    this->hide();
    lastgame->close();
    StartScreen *window = new StartScreen;
    window->show();
    delete this;
}

void paused::on_pushButton_4_clicked()
{
    QMessageBox *confirm = new QMessageBox;
    confirm->setWindowTitle("Confirm Quit");
    confirm->setText("Are you sure you want to exit the game?");

    confirm->setStandardButtons(QMessageBox::Yes);
    confirm->addButton(QMessageBox::No);
    confirm->setDefaultButton(QMessageBox::No);

    ;
    if(confirm->exec() == QMessageBox::Yes){
        lastgame->close();
        this->close();
    }else{

    }
}

void paused::on_pushButton_5_clicked()
{
    score = new HighScore;
    score->exec();
}
