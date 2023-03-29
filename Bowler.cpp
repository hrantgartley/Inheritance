#include "Bowler.h"
/*
 *  Grant Hartley
 *  CS 355-01
 *  Assignment 6
 *  A simple project that gets us warmed up to using inheritance using the bowler class
 */

/*
 * Name:
 * Desc:
 * Incoming:
 * Outgoing:
 * Return:
 */
Bowler::Bowler() {
    FName = "";
    LName = "";
    Game1 = 0;
    Game2 = 0;
    Game3 = 0;
}


Bowler::Bowler(string first, string last, int game1, int game2, int game3){
    FName = first;
    LName = last;
    Game1 = game1;
    Game2 = game2;
    Game3 = game3;
}

void Bowler::SetBowler(string first, string last, int game1, int game2, int game3){
    FName = first;
    LName = last;
    Game1 = game1;
    Game2 = game2;
    Game3 = game3;
}

string Bowler::GetFName()const{
    return FName;
}
string Bowler::GetLName()const{
    return LName;
}
int Bowler::GetGame1()const{
    return Game1;
}
int Bowler::GetGame2()const{
    return Game2;
}
int Bowler::GetGame3()const{
    return Game3;
}

int Bowler::Total() const{
    return Game1 + Game2 + Game3;
}

double Bowler::Average() const{
    return (Game1 + Game2 + Game3) / 3.0;
}

void Bowler::Print()const{
    cout << "The Players name is " << GetFName() << " " << GetLName() << endl;
    cout << "The average of 3 games was " << Average() << endl;
    cout << "The total of the 3 games were " << Total() << endl;
}

