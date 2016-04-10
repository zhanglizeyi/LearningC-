//carrots.cpp -- food processing program 
//uses and displays a varable 

#include <iostream>

using namespace std;

int main(){

	int carrots; 

	carrots = 25;
	cout << "I have";
	cout << carrots;
	cout << " carrots" << endl;

	carrots = carrots - 1; //change the amount of carrots
	cout << "I have "<<carrots<<" carrots now"<<endl;
	cin.get();
	return 0; 
}