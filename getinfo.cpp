//getinfo.cpp -- input and output

#include <iostream>

using namespace std;

int main(){
  int carrots;

  cout << "How many carrots do you have?" <<endl;
  cin >> carrots;  //input
  cout << "Here are two more.";
  //the next line concatenates output
  cout << "Now have "<< carrots << " carrots" <<endl;

  return 0;
}
