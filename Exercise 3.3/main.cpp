#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


// function prototype
void question1();
void question2();
void question3();
void question4();

int main() {

	//CHOICE DEFINITION FOR THAAA EXERCISE AYAYAYA
	int choice;

	do {
		//Main Menu
		cout << "\n Exercise 3.3 List" << endl;
		cout << "1. Question 1" << endl;
		cout << "2. Question 2" << endl;
		cout << "3. Question 3" << endl;
		cout << "4. Question 4" << endl;
		cout << "0. Exit" << endl;
		cout << "\nChoose question(1-4),  Enter '0' to Exit: ";
		cin >> choice;

		cout << endl;

		//switching section "SMOOOOTH CRIMINAL"
		switch (choice) {
			case 1:
				question1();
				break;
			case 2:
				question2();
				break;
			case 3:
				question3();
				break;
			case 4:
				question4();
				break;
			case 0:
				cout << "Exiting Exercise 3.3 ...";
				break;
			default:
				cout << "Invalid choice. Please try again.";
		}

		cout << endl;

	} while (choice != 0);
	return 0;
}

//function definition for question 1
void question1() {

	cout << "[Exercise 3.3 - Question 1]" << endl;
	
	const float DISC = 10.0;
	float price = 9.90;
	int quantity;

	cout << "Enter quantity purchase: ";
	cin >> quantity;

	float totalprice = (price * quantity) * (100 - DISC) / 100.00;

	cout << fixed << setprecision(2);
	cout << "\nTotal price of the item: " << totalprice << endl;

}

void question2() {

	cout << "[Exercise 3.3 - Question 2]" << endl;

	const int SCND_TO_HOUR = 3600, SCND_TO_MINUTE = 60;
	int totaltime; //in seconds

	cout << "Enter total time in seconds: ";
	cin >> totaltime;

	//calculation
	int hours = totaltime / SCND_TO_HOUR; //division in seconds
	int remainingSeconds = totaltime % SCND_TO_HOUR; //find remainder in seconds

	int minutes = remainingSeconds / SCND_TO_MINUTE;
	remainingSeconds = remainingSeconds % SCND_TO_MINUTE;


	cout << totaltime << " seconds are equal to "
		<< hours << " hours, " << minutes << " minutes and "
		<< remainingSeconds << " seconds." << endl;

}

void question3() {

	cout << "[Exercise 3.3 - Question 3]" << endl;

	double loan_amount, annual_interest;
	int years;

	cout << "Enter loan amount(RM) : ";
	cin >> loan_amount;

	cout << "Enter annual interest(%): ";
	cin >> annual_interest;

	cout << "Enter number of years: ";
	cin >> years;

	/* P = principal, = loan_amount
	   r = annual rate = annual_interest
	   i = rate per month = monthly_rate (annual_interest*100/total_months)
	   n = total months	
	   
	   Amortization Payment = (Pi)/(1 - pow(1 + i, -n))

	 */

	int total_months = years * 12;
	double monthly_rate = annual_interest / 1200.00 ; //change percentage to decimal for calculation purpose
	double monthlyPayment = (loan_amount * monthly_rate) / (1 - pow(1 + monthly_rate, -total_months));

	cout << fixed << setprecision(2);
	cout << "Monthly payment for this loan is (RM): " << monthlyPayment << endl;

}

void question4() {

		cout << "[Exercise 3.3 - Question 4]" << endl;

		double mass, velocity, kinetic;

		cout << "Enter object's mass (KG) : ";
		cin >> mass;

		cout << "Enter object's velocity (m/s) : ";
		cin >> velocity;

		kinetic = (mass * pow(velocity, 2)/2);
		cout << fixed << setprecision(2);
		cout << "The kinetic energy (Joules) : " << kinetic << endl;

}
