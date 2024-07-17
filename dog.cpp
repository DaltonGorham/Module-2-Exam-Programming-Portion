#include "dog.h"
using namespace std;



Dog:: Dog(int a, string n, string b){
  age = a;
  name = n;
  breed = b;
}

int Dog::getDogAge(){
  return age * 7;
}

void Dog::description(){
  cout << "Your dog is " << age << " years old, " <<
  "His name is " << name << " and he is a " << breed << ", He is also " << getDogAge() << " years old in human years!" << endl;
}

string Dog::speak(){
  return name + " barks hello!\n";
}

string Dog::rollOver(){
  return name + " rolled over for a treat!\n";
}