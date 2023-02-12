#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TicTacToe; }
QT_END_NAMESPACE

class TicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    TicTacToe(QWidget *parent = nullptr);
    ~TicTacToe();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    int playerTurn(int buttonIndex);
private:
    Ui::TicTacToe *ui;
    int counter = 0;
    int clickedButton[9] = {0,0,0,0,0,0,0,0,0};
    int wincombs[8][3] = { {0,1,2}, {0,3,6}, {6,7,8}, {2,5,8}, {0,4,8}, {2,4,6}, {1,4,7}};
};
#endif // TICTACTOE_H
