#include "date.h"
#include "date.cpp"
using namespace std;



int main(){
  cout << "Default: " << endl;
  Date dateDefualt;
  dateDefualt.printDates();
  dateDefualt.printDatesComma();
  dateDefualt.printDatesDayFirst();
  cout << endl;
  cout << "Date 1: " << endl;
  Date date1(12, 15, 2018);
  date1.printDates();
  date1.printDatesComma();
  date1.printDatesDayFirst();
  cout << endl;
  cout << "Date 2: " << endl;
  Date date2(10, 31, 2020);
  date2.printDates();
  date2.printDatesComma();
  date2.printDatesDayFirst();

  
}