#include "tictactoe.h"
#include "ui_tictactoe.h"

TicTacToe::TicTacToe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacToe)
{
    ui->setupUi(this);
}

TicTacToe::~TicTacToe()
{
    delete ui;
}

int TicTacToe::playerTurn(int buttonIndex)
{
    if (clickedButton[buttonIndex] == 0)
    {
        counter++;
        int modulus = counter % 2;
        if (modulus == 1)
        {
            ui->label_2->setText("Player 2");
            clickedButton[buttonIndex] = 1;
            return 1;
        }
        else
        {
            ui->label->setText("Player 1");
            clickedButton[buttonIndex] = 2;
            return 2;
        }
    }
    return 0;
}

void TicTacToe::on_pushButton_clicked()
{
    int player = playerTurn(0);
    if (player == 1)
    {
        ui->pushButton->setText("X");
    }
    else if (player == 2)
        ui->pushButton->setText("O");
}


void TicTacToe::on_pushButton_2_clicked()
{
    int player = playerTurn(2);
    if (player == 1)
    {
        ui->pushButton_2->setText("X");
    }
    else if (player == 2)
        ui->pushButton_2->setText("O");
}


void TicTacToe::on_pushButton_3_clicked()
{
    int player = playerTurn(3);
    if (player == 1)
    {
        ui->pushButton_3->setText("X");
    }
    else if (player == 2)
        ui->pushButton_3->setText("O");
}


void TicTacToe::on_pushButton_4_clicked()
{
    int player = playerTurn(4);
    if (player == 1)
    {
        ui->pushButton_4->setText("X");
    }
    else if (player == 2)
        ui->pushButton_4->setText("O");
}


void TicTacToe::on_pushButton_5_clicked()
{
    int player = playerTurn(5);
    if (player == 1)
    {
        ui->pushButton_5->setText("X");
    }
    else if (player == 2)
        ui->pushButton_5->setText("O");
}


void TicTacToe::on_pushButton_6_clicked()
{
    int player = playerTurn(6);
    if (player == 1)
    {
        ui->pushButton_6->setText("X");
    }
    else if (player == 2)
        ui->pushButton_6->setText("O");
}


void TicTacToe::on_pushButton_7_clicked()
{
    int player = playerTurn(7);
    if (player == 1)
    {
        ui->pushButton_7->setText("X");
    }
    else if (player == 2)
        ui->pushButton_7->setText("O");
}


void TicTacToe::on_pushButton_8_clicked()
{
    int player = playerTurn(8);
    if (player == 1)
    {
        ui->pushButton_8->setText("X");
    }
    else if (player == 2)
        ui->pushButton_8->setText("O");
}


void TicTacToe::on_pushButton_9_clicked()
{
    int player = playerTurn(9);
    if (player == 1)
    {
        ui->pushButton_9->setText("X");
    }
    else if (player == 2)
        ui->pushButton_9->setText("O");
}

