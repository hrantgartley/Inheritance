#include <iostream>
#include "Bowler.h"
#include "JuniorBowler.h"


int main(){
    int FirstGame = 129;
    int SecondGame = 230;
    int ThirdGame = 123;
    string First = "Grant";
    string Last = "Hartley";
    char Gender = 'M';
    int Age = 23;
    int NumAbs = 0;

    JuniorBowler jb(Gender, First, Last, FirstGame, SecondGame, ThirdGame, Age, NumAbs);
    jb.Print();
    

    return 0;
}
