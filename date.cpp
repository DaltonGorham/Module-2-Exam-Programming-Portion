#include "date.h"
#include <vector>


Date::Date() : Date(1, 1, 2000)
{
  

}

Date::Date(int month, int day, int year){
  date.day = day;
  date.month = month; 
  date.year = year;

}


string Date::getMonth(int month){
  for (int i = 0; i < 12; i++){
    if (month == i + 1){
      return months[i];
    }
  }
}

void Date::printDates(){
  cout << date.month << "/" <<
  date.day << "/" << date.year << endl;
}

void Date::printDatesComma(){
  cout << getMonth(date.month) << " " << date.day << ", " << date.year << endl;
}

void Date::printDatesDayFirst(){
  cout << date.day << " " << getMonth(date.month) << " " << date.year << endl;
}

