#ifndef Dog_H
#define Dog_H
#include <iostream>
using namespace std;

class Dog{
  private:
    int age;
    string name;
    string breed;
  public:
    Dog(int a, string n, string b);
    int getDogAge();
    void description();
    string speak();
    string rollOver();
};






#endif