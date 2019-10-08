//Preprocessor Directive
#include<iostream>
#include<cmath>
//Namespace Definition
using namespace std;

int main()
{
	//Variable Declaration
	double  YearlyInt, LoanAmount, Payment, AmountPaid, MonthlyInt;
	int NumPayments;

	//Input & Output Requests
	cout << "Enter The Loan Amount (LoanAmount) --> ";
	cin >> LoanAmount;

	cout << "Enter the YEARLY interest rate as a percentage --> ";
	cin >> YearlyInt;

	cout << "Enter number of monthly payments --> ";
	cin >> NumPayments;

	cout << "Loan amount: " << LoanAmount << endl;
	cout << "Yearly Interest Rate: " << YearlyInt << "%" << endl;
	cout << "Number of Monthly Payments: " << NumPayments << endl;

	//Processing (Calculation)
	MonthlyInt = pow(1 + YearlyInt / 100, 1.0 / 12);

	Payment = LoanAmount * pow(MonthlyInt, NumPayments) *
		(MonthlyInt - 1) /
		(pow(MonthlyInt, NumPayments) - 1);

	//Result Output
	cout << "Monthly Payment: " << Payment << endl;

	AmountPaid = Payment * NumPayments;
	cout << "Amount Paid Back: " << AmountPaid << endl;
	cout << "Interest Paid: " << (AmountPaid - LoanAmount) << endl;

	cout << "Program Over" << endl << endl << endl << endl;

	return 0;
}