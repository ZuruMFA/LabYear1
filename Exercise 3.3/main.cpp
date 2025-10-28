#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
using namespace std;

// function prototype
void Lab3(), Lab4_5(), Lab6(), Lab7(), Lab8();

// question function
void Lab3Q1(), Lab3Q2(), Lab3Q3(), Lab3Q4();
void Lab4Q1(), Lab4Q2();


int main() {

	int mainchoice;

	do {
		//Main Menu
		cout << "\nLab Question List" << endl;
		cout << "1. Lab 3" << endl;
		cout << "2. Lab 4-5" << endl;
		cout << "3. Lab 6" << endl;
		cout << "4. Lab 7" << endl;
		cout << "5. Lab 8" << endl;
		cout << "0. Exit" << endl;
		cout << "\nChoose question(1-5),  Enter '0' to Exit: ";
		cin >> mainchoice;

		switch (mainchoice) {
		case 1:
			Lab3();
			break;
		case 2:
			Lab4_5();
			break;
		case 3:
			Lab6();
			break;
		case 4:
			Lab7();
			break;
		case 5:
			Lab8();
			break;
		case 0:
			cout << "Exiting the program" << endl;
			break;
		default:
			cout << "Invalid choice. Please try again.";
		}

	} while (mainchoice != 0);
	return 0;
}

void Lab3() {
	int choiceLab3;
	do {
		//Sub Menu Lab 3
		cout << "\nExercise 3.3 List" << endl;
		cout << "1. Question 1" << endl;
		cout << "2. Question 2" << endl;
		cout << "3. Question 3" << endl;
		cout << "4. Question 4" << endl;
		cout << "0. Exit" << endl;
		cout << "\nChoose question(1-4),  Enter '0' to Exit: ";
		cin >> choiceLab3;

		cout << endl;

		//switching section 
		switch (choiceLab3) {
		case 1:
			Lab3Q1();
			break;
		case 2:
			Lab3Q2();
			break;
		case 3:
			Lab3Q3();
			break;
		case 4:
			Lab3Q4();
			break;
		case 0:
			cout << "Exiting Lab 3 ...";
			return;
		default:
			cout << "Invalid choice. Please try again.";
		}

		cout << endl;

	} while (choiceLab3 != 0);
}

void Lab4_5() {
	int choiceLab4_5;
	do {
		//Sub Menu Lab 4-5
		cout << "\nLab 4-5 List" << endl;
		cout << "1. Question 1" << endl;
		cout << "2. Question 2" << endl;
		cout << "0. Exit" << endl;
		cout << "\nChoose question(1-2),  Enter '0' to Exit: ";
		cin >> choiceLab4_5;

		cout << endl;

		//switching section 
		switch (choiceLab4_5) {
		case 1:
			Lab4Q1();
			break;
		case 2:
			Lab4Q2();
			break;
		case 0:
			cout << "Exiting Lab 4-5 ..." << endl;
			return;
		default:
			cout << "Invalid choice. Please try again." << endl;
		}

		cout << endl;

	} while (choiceLab4_5 != 0);

	return;
}

void Lab6() {

	cout << "Ongoing" << endl;

}

void Lab7() {

	cout << "Ongoing" << endl;

}

void Lab8() {

	cout << "Ongoing" << endl;

}


//function definition for question 1
void Lab3Q1() {

	cout << "[Exercise 3.3 - Question 1]" << endl;

	const double DISC = 10.0;
	double price = 9.90;
	int quantity;

	cout << "Enter quantity purchase: ";
	cin >> quantity;

	double totalprice = (price * quantity) * (100 - DISC) / 100.00;

	cout << fixed << setprecision(2);
	cout << "\nTotal price of the item: " << totalprice << endl;

}

void Lab3Q2() {

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

void Lab3Q3() {

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

	   Amortization Payment = (Pi)/(1 - pow(1 + i, -n)) */

	int total_months = years * 12;
	double monthly_rate = annual_interest / 1200.00; //change percentage to decimal for calculation purpose
	double monthlyPayment = (loan_amount * monthly_rate) / (1 - pow(1 + monthly_rate, -total_months));

	cout << fixed << setprecision(2);
	cout << "Monthly payment for this loan is (RM): " << monthlyPayment << endl;

}

void Lab3Q4() {

	cout << "[Exercise 3.3 - Question 4]" << endl;

	double mass, velocity, kinetic;

	cout << "Enter object's mass (KG) : ";
	cin >> mass;

	cout << "Enter object's velocity (m/s) : ";
	cin >> velocity;

	kinetic = (mass * pow(velocity, 2) / 2);
	cout << fixed << setprecision(2);
	cout << "The kinetic energy (Joules) : " << kinetic << endl;


}

void Lab4Q1() {

	cout << "[Lab 4-5 - Question 1]" << endl;

	char grade = '0';
	int mark;

	cout << "Enter the mark: ";
	cin >> mark;

	if (mark >= 80 && mark <= 10)
		grade = 'A';
	else if (mark >= 65 && mark <= 79)
		grade = 'B';
	else if (mark >= 50 && mark <= 64)
		grade = 'C';
	else if (mark < 50)
		grade = 'F';
	else
		cout << "Enter marks between 0-100" << endl;

	cout << "Your mark : " << mark << ", ";
	cout << "Grade:" << grade << endl;

}

void Lab4Q2() {

	cout << "[Exercise 4-5 - Question 2]" << endl;

	string status;
	double weight, height;
	cout << "Enter your weight(kg): ";
	cin >> weight;
	cout << "Enter your height(m): ";
	cin >> height;

	double BMI = weight / (height * height);

	if (BMI >= 30)
		status = "Obese";
	else if (BMI > 25.0 && BMI < 29.9)
		status = "Overweight";
	else if (BMI > 18.5 && BMI < 24.9)
		status = "Normal";
	else
		status = "Underweight";

	cout << "Your BMI is: " << fixed << setprecision(4) << BMI << endl;
	cout << "Status: " << status;

}