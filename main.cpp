#include <iostream>
using namespace std;

char sent = 0;

void printoptions(){
	cout << "Enter your Sentence: ";
	cin >> sent;
}

void stand(){
	cout << "STAND";
}

void sit(){
	cout << "SIT";
}

int main(){
	printoptions();
	
	for(int b=0; b<sent; b++){
		stand();
	}

	return 0;
}