#include "dog.cpp"
using namespace std;



int main(){
  Dog dog(4, "Max", "Bulldog");
  dog.description();
  dog.speak();
  dog.rollOver();
  cout << endl;
  Dog dog2(10, "Finn", "Poodle");
  dog2.description();
  dog2.speak();
  dog2.rollOver();

  
  
  
  
  
  
}