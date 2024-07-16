#include <iostream>
#include "Header.h"
using namespace std;


//declaration of variable where we store the sum
int sum;

//function for sum of numbers
int sumNumbers(int num) {
	//we add +1 to match it to user input. only if it is above 0.
	if (num > 0) {
	num += 1;
	}

	//loop to find the even numbers
	for (int i = 0; i < num; i++) {
		if (i % 2 != 0) {
			continue;
		}
		else if (i < 0) {
			cout << "Number is negative" << endl;
			break;
			return 0;
		}
		sum += i;
	}

	cout << "Sum of even numbers is:" << " " << sum << endl;
	return 0;
}

