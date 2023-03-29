//
// Created by doyou on 2/1/2023.
//
#include <iostream>
using namespace std;
#ifndef BOWLER_H
#define BOWLER_H

class Bowler{
protected:
    string FName;
    string LName;
    int Game1;
    int Game3;
    int Game2;
public:
    Bowler();
    Bowler(string, string, int, int ,int);
    void SetBowler(string, string, int, int ,int);

    virtual void Print()const;
    string GetFName()const;
    string GetLName()const;
    int GetGame1()const;
    int GetGame2()const;
    int GetGame3()const;
    int Total()const;
    double Average()const;
};


#endif //BOWLER_H
