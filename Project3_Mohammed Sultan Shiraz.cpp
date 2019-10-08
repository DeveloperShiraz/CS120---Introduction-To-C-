// Project3 for Control Structures
//Created by Mohammed Sultan Shiraz, 10/8/2018.

#include<iostream>
using namespace std;

double get_balance() {
	double balance;

	do {
		cout << "Please Enter The Balance Amount: $";
		cin >> balance;
	} while (balance < 0);
	return 0;

	//Monthly Charges
	balance = balance - 10;
	cout << "Your Balance After Deducting The Monthly Balance Is: "<< balance <<endl;
}

int get_checks_written() {
	int checks_written;

	cout << "Enter The Number Of Cheques That You Have Written: ";
	cin >> checks_written;

	return checks_written;
}

double compute_charges(double balance, int checks_written) {
	// fees is initialized as 0 so I can add to it later on.
	double fees = 0;

	if (balance < 400) {
		fees = fees + 15;
	}

	if (checks_written < 20) {
		fees = fees + 0.10 * checks_written;
	}
	else if (checks_written < 40) {
		fees = fees + 0.08 * checks_written;
	}
	else if (checks_written < 60) {
		fees = fees + 0.06 * checks_written;
	}
	else {
		fees = fees + 0.04 * checks_written;
	}

	return fees;
}

int main() {
	double balance = get_balance();
	int checks_written = get_checks_written();
	double charges;

	// Input validation
	if (checks_written < 0) {
		cout << "Please Enter The Correct Value" << '\n';
	}
	else {
		// Input validation
		if (balance < 0) {
			cout << "Warning: your account is overdrawn." << '\n';
		}

		charges = compute_charges(balance, checks_written);

		cout << "Service fees + Cheques written fee: $" << charges << '\n';
	}
	return 0;
}