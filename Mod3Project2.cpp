/*Author: Francisco Bumanglag 
Project: Stock Commission
Assignment: Module 3 Project 2
Course: C++ Santa Ana College
Class: CMPR120 Dr. Tahir Aziz
Date: February 21, 2024*/



#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
	//declarations
	double sharesStock = int(); 
	double perShare = int(); 
	double commission = int(); 

	cout << fixed << setprecision(2);

	//input from user 
	cout << "Enter the number of shares purchased: "; 
	cin >> sharesStock; 

	cout << "Enter the price per share: "; 
	cin >> perShare; 

	cout << "Enter the commission percentage (enter 0.02 for 2%): "; 
	cin >> commission; 

	//calculations
	double amountPaid = sharesStock * perShare;
	double amountComm = amountPaid * commission;
	double totalAmount = amountPaid + amountComm;

	//display-output 
	cout << "The amount paid for the stock is: $" << amountPaid << endl;
	cout << "The amount of the commission is: $" << amountComm << endl;
	cout << "The total amount paid(for the sotck plus the commission) is: $" << totalAmount << endl; 

	system("pause");

}