//Purpose : Reverse a whole number without converting to a string
//Date : April 16, 2020

//Libraries
#include <iostream>

//Namespaces
using std::cout;
using std::endl;
using std::cin;


//Functions
int ReverseNum() {
	int num;
	cout << "Enter a Whole Number : ";
	cin >> num;

	system("cls");
	cout << "Reversing " << num << endl;

	int counter = 0;
	int tempnum = num;

	while (tempnum >= 1) {
		tempnum /= 10;
		counter++;
	}


	int newNum = 0;

	for (int i = 1; i <= counter; i++) {
		newNum += (num % 10) * (pow(10, counter - i));
		num /= 10;
	}

	return newNum;
}


//Driver
int main() {
	
	while (1) {
		int ans = ReverseNum();
		cout << "Answer : " << ans << endl;
		system("pause");
		system("cls");
	}
	
	return 0;
}