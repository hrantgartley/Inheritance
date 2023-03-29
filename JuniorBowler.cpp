/*
 *  Grant Hartley
 *  CS 355-01
 *  Assignment 6
 *  A simple project that gets us warmed up to using inheritance using the bowler class
 */
#include "JuniorBowler.h"
#include "Bowler.h"
/*
 * Name: JuniorBowler
 * Desc: inits both class mem vars to a "0 like" value
 * Incoming: None
 * Outgoing: None
 * Return: None
 */
JuniorBowler::JuniorBowler(){
    Age = 0;
    NumAbsences = 0;
    Gender = 'U';
    FName = "";
    LName = "";
    Game1 = 0;
    Game2 = 0;
    Game3 = 0;
}
/*
 * Name: JuniorBowler
 * Desc: inits both class mem vars to the parameter eq
 * Incoming: 8 parameters (all class member vars)
 * Outgoing: None
 * Return: None
 */
JuniorBowler::JuniorBowler(char gender, string first, string last, int g1, int g2, int g3, int age, int NumAb) {
    Gender = gender;
    FName = first;
    LName = last;
    Game1 = g1;
    Game2 = g2;
    Game3 = g3;
    Age = age;
    NumAbsences = NumAb;
}
/*
 * Name: SetJuniorBowler
 * Desc: inits both class mem vars to the parameter eq
 * Incoming: 8 parameters (all class member vars)
 * Outgoing: None
 * Return: None
 */
void JuniorBowler::SetJuniorBowler(char gender, string first, string last, int g1, int g2, int g3, int age, int NumAb) {
    Gender = gender;
    FName = first;
    LName = last;
    Game1 = g1;
    Game2 = g2;
    Game3 = g3;
    Age = age;
    NumAbsences = NumAb;
}
/*
 * Name: GetAge
 * Desc: returns the age
 * Incoming: none
 * Outgoing: age
 * Return:  age
 */
int JuniorBowler::GetAge() const {
    return Age;
}
/*
 * Name: GetNumAbsences
 * Desc: returns the number of absences
 * Incoming: None
 * Outgoing: NumAbs
 * Return: NumAbs
 */
int JuniorBowler::GetNumAbsences()const{
    return NumAbsences;
}
/*
 * Name: GetGender
 * Desc: return the gender
 * Incoming: None
 * Outgoing: Gender
 * Return: Gender
 */
char JuniorBowler::GetGender() const {
    return Gender;
}
/*
 * Name: Print
 * Desc: Print all values from both classes
 * Incoming: None
 * Outgoing: None
 * Return: None
 */
void JuniorBowler::Print()const{
    Bowler::Print();
    cout << "The bowler is a " << Gender << endl;
    cout << "The bowler is " << Age << " years old" << endl;
    cout << "The bowler has " << NumAbsences << " absences" << endl;
}

