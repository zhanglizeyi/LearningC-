//sqrt.cpp -- using sqrt() function


#include <iostream>
#include <cmath> // or math.h

using namespace std;

int main(){
  double area;

  cout << "Enter the floor area, in square feet, of where you live: ";
  cin >>area;
  double side;
  side = sqrt(area);

  cout << "That is the equivalent of a square" << side << " feet to the side." <<endl;
  cout << "How fascinating!" <<endl;

  return 0;
}
