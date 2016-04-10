//ourfunc.cpp -- defining your own function

#include <iostream>
void simon(int); //function prototype for simon()

using namespace std;

int main(){
	simon(3);
	cout<< "Pick an integer: ";
	int count;
	simon(count); //call it again
	cout << "Done!" <<endl;

	return 0;
}


void simon( int n){
	cout<< "Simon says touch your toes" << n << " times." << endl;
}