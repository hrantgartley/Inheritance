


#include "Bowler.h"
#ifndef BOWLER_JUNIORBOWLER_H
#define BOWLER_JUNIORBOWLER_H
/*
 *  Grant Hartley
 *  CS 355-01
 *  Assignment 6
 *  A simple project that gets us warmed up to using inheritance using the bowler class
 */

class JuniorBowler: public Bowler{
    private:
    
        int Age;
        int NumAbsences;
        char Gender;
    public:
        JuniorBowler();
        JuniorBowler(char, string, string, int, int, int, int, int);
        void SetJuniorBowler(char, string, string, int, int, int, int, int);
        void Print()const;
        int GetAge()const;
        int GetNumAbsences()const;
        char GetGender()const;
};
#endif



