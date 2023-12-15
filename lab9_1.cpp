#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan;
	double rate;
	double payback;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> payback;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int year = 1;
	cout << fixed << setprecision(2);
	while(loan != 0){
		double interest = (loan * rate) / 100;
		cout << setw(13) << left << year;
		year++;
		cout << setw(13) << left << loan;
		cout << setw(13) << left << interest;
		double total = loan + interest;
		cout << setw(13) << left << total;
		if(total >= payback){
			cout << setw(13) << left << payback;
			double balance = total - payback;
			cout << setw(13) << left << balance;
			loan = balance;
		}else if(total < payback){
			cout << setw(13) << left << total;
			cout << setw(13) << left << total - total;
			loan = 0;
		}
		cout << "\n";
	}
	//cout << setw(13) << left << 1; 
	//cout << setw(13) << left << 1000.0;
	//cout << setw(13) << left << 50.0;
	//cout << setw(13) << left << 1050.0;
	//cout << setw(13) << left << 100.0;
	//cout << setw(13) << left << 950.0;
	//cout << "\n";	
	
	return 0;
}
