#ifndef Date_H
#define Date_H
#include <iostream>
using namespace std;

struct Dates{
  int month;
  int day;
  int year;
};


class Date{
  private:
    Dates date;
    string months[12] = {"January", "Febuary", "March", "April", "May", "June", "July", "August","September", "October", "November", "December"};
  public:
    Date();
    Date(int month, int day, int year);
    ~Date() {cout << "the end" << endl;};
    void setDates();
    string getMonth(int month);
    void printDates();
    void printDatesComma();
    void printDatesDayFirst();
};











#endif