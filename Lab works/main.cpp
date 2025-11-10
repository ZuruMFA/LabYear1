#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
using namespace std;

// Function prototypes for all Labs
void Lab3(), Lab4_5(), Lab6(), Lab7(), Lab8();

// Lab 3 Questions
void Lab3Q1(), Lab3Q2(), Lab3Q3(), Lab3Q4();

// Lab 4-5 Questions
void Lab4Q1(), Lab4Q2();

// Lab 6 Questions
void Lab6Q1(), Lab6Q2(), Lab6Q3(), Lab6Q4(), Lab6Q5(), Lab6Q6(), Lab6Q7(), Lab6Q8();

int main() {
    int mainchoice;

    do {
        cout << "\nMain Menu" << endl;
        cout << "1. Lab 3" << endl;
        cout << "2. Lab 4-5" << endl;
        cout << "3. Lab 6" << endl;
        cout << "4. Lab 7" << endl;
        cout << "5. Lab 8" << endl;
        cout << "0. Exit" << endl;
        cout << "\nChoose (0-5): ";
        cin >> mainchoice;

        switch (mainchoice) {
        case 1: Lab3(); break;
        case 2: Lab4_5(); break;
        case 3: Lab6(); break; 
        case 4: Lab7(); break;
        case 5: Lab8(); break;
        case 0: cout << "Exiting program..." << endl; break;
        default: cout << "Invalid choice!" << endl;
        }

    } while (mainchoice != 0);

    return 0;
}

// ========================= Lab 3 Choice =========================
void Lab3() {
    int choiceLab3;
    do {
        cout << "\nExercise 3.3 List" << endl;
        cout << "1. Question 1" << endl;
        cout << "2. Question 2" << endl;
        cout << "3. Question 3" << endl;
        cout << "4. Question 4" << endl;
        cout << "0. Exit" << endl;
        cout << endl;
        cout << "Choose (0-4): ";
        cin >> choiceLab3;
        cout << endl;

        switch (choiceLab3) {
        case 1: Lab3Q1(); break;
        case 2: Lab3Q2(); break;
        case 3: Lab3Q3(); break;
        case 4: Lab3Q4(); break;
        case 0: cout << "Exiting Lab 3..." << endl; break;
        default: cout << "Invalid choice" << endl;
        }

    } while (choiceLab3 != 0);
}

// ========================= Lab 4-5 Choice =========================
void Lab4_5() {
    int choiceLab45;
    do {
        cout << "\nLab 4-5 List" << endl;
        cout << "1. Question 1" << endl;
        cout << "2. Question 2" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose (0-2): ";
        cin >> choiceLab45;
        cout << endl;

        switch (choiceLab45) {
        case 1: Lab4Q1(); break;
        case 2: Lab4Q2(); break;
        case 0: cout << "Exiting Lab 4-5..." << endl; break;
        default: cout << "Invalid choice" << endl;
        }

    } while (choiceLab45 != 0);
}

// ========================= Lab 6 Choice =========================
void Lab6() {
    int choice;
    do {
        cout << "\nLab 6 Questions" << endl;
        cout << "1. Question 1" << endl;
        cout << "2. Question 2" << endl;
        cout << "3. Question 3" << endl;
        cout << "4. Question 4" << endl;
        cout << "5. Question 5" << endl;
        cout << "6. Question 6" << endl;
        cout << "7. Question 7" << endl;
        cout << "8. Question 8" << endl;
        cout << "0. Exit" << endl;
        cout << endl;
        cout << "Choose (0-8): ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 1: Lab6Q1(); break;
        case 2: Lab6Q2(); break;
        case 3: Lab6Q3(); break;
        case 4: Lab6Q4(); break;
        case 5: Lab6Q5(); break;
        case 6: Lab6Q6(); break;
        case 7: Lab6Q7(); break;
        case 8: Lab6Q8(); break;
        case 0: cout << "Exiting Looping Lab..." << endl; break;
        default: cout << "Invalid choice" << endl;
        }
    } while (choice != 0);
    cout << endl;
}

// ========================= Lab 7 & Lab 8 =========================
void Lab7() { cout << "Ongoing" << endl; }
void Lab8() { cout << "Ongoing" << endl; }

// ========================= Lab 3 Questions =========================
void Lab3Q1() {
    cout << "[Exercise 3.3 - Question 1]" << endl;
    const double DISC = 10.0;
    double price = 9.90;
    int quantity;

    cout << "Enter quantity purchase: ";
    cin >> quantity;

    double totalprice = (price * quantity) * (100 - DISC) / 100.00;

    cout << fixed << setprecision(2);
    cout << "Total price of the item: " << totalprice << endl;
}

void Lab3Q2() {
    cout << "[Exercise 3.3 - Question 2]" << endl;

    const int SCND_TO_HOUR = 3600, SCND_TO_MINUTE = 60;
    int totaltime;

    cout << "Enter total time in seconds: ";
    cin >> totaltime;

    int hours = totaltime / SCND_TO_HOUR;
    int remainingSeconds = totaltime % SCND_TO_HOUR;
    int minutes = remainingSeconds / SCND_TO_MINUTE;
    remainingSeconds %= SCND_TO_MINUTE;

    cout << totaltime << " seconds are equal to "
        << hours << " hours, " << minutes << " minutes and "
        << remainingSeconds << " seconds." << endl;
}

void Lab3Q3() {
    cout << "[Exercise 3.3 - Question 3]" << endl;

    double loan_amount, annual_interest;
    int years;

    cout << "Enter loan amount(RM): "; cin >> loan_amount;
    cout << "Enter annual interest(%): "; cin >> annual_interest;
    cout << "Enter number of years: "; cin >> years;

    int total_months = years * 12;
    double monthly_rate = annual_interest / 1200.0;

    double monthlyPayment = (loan_amount * monthly_rate) /
        (1 - pow(1 + monthly_rate, -total_months));

    cout << fixed << setprecision(2);
    cout << "Monthly payment (RM): " << monthlyPayment << endl;
}

void Lab3Q4() {
    cout << "[Exercise 3.3 - Question 4]" << endl;

    double mass, velocity;
    cout << "Enter object's mass (KG): "; cin >> mass;
    cout << "Enter object's velocity (m/s): "; cin >> velocity;

    double kinetic = (mass * pow(velocity, 2) / 2);
    cout << fixed << setprecision(2);
    cout << "The kinetic energy (J): " << kinetic << endl;
}

// ========================= Lab 4-5 Questions =========================
void Lab4Q1() {
    cout << "[Lab 4-5 - Question 1]" << endl;

    char grade = '0';
    int mark;

    cout << "Enter the mark: "; cin >> mark;

    if (mark >= 80 && mark <= 100) grade = 'A';
    else if (mark >= 65) grade = 'B';
    else if (mark >= 50) grade = 'C';
    else if (mark >= 0) grade = 'F';
    else cout << "Enter marks between 0-100" << endl;

    cout << "Your mark: " << mark << " Grade: " << grade << endl;
}

void Lab4Q2() {
    cout << "[Lab 4-5 - Question 2]" << endl;

    double weight, height;
    cout << "Enter your weight(kg): "; cin >> weight;
    cout << "Enter your height(m): "; cin >> height;

    double BMI = weight / (height * height);
    string status;

    if (BMI >= 30) status = "Obese";
    else if (BMI >= 25) status = "Overweight";
    else if (BMI >= 18.5) status = "Normal";
    else status = "Underweight";

    cout << "Your BMI: " << fixed << setprecision(2) << BMI << endl;
    cout << "Status: " << status << endl;
}

// ========================= Lab 6 =========================

void Lab6Q1() {

    cout << "[Exercise 6 - Question 1]" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "I love programming!" << endl;
    }
    cout << endl;
}

void Lab6Q2() {

    cout << "[Exercise 6 - Question 2]" << endl;

    int num, sum = 0;
    cout << "Enter a positive integer: "; 
    cin >> num;

    while (num < 0) {
        cout << "Invalid! Enter POSITIVE number: ";
        cin >> num;
    }

    for (int i = 1; i <= num; i++) 
        sum += i;
        cout << "Sum = " << sum << endl;
}

void Lab6Q3() {

    cout << "[Exercise 6 - Question 3]" << endl;

    int x = 1;
    do {
        cout << "Enter a number: ";
        cin >> x;
    } while (x > 0);
}

void Lab6Q4() {

    cout << "[Exercise 6 - Question 4]" << endl;

    char sure;
    cout << "Are you sure you want to quit? (Y/N): ";
    cin >> sure;

    while (sure != 'y' && sure != 'Y') {
        cout << "Are you sure you want to quit? (Y/N): ";
        cin >> sure;
    }
}

void Lab6Q5() {

    cout << "[Exercise 6 - Question 5]" << endl;

    for (int count = 0; count < 50; count++)
        cout << "count is " << count << endl;
}

void Lab6Q6() {

    cout << "[Exercise 6 - Question 6]" << endl;

    double mark, total = 0;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter Quiz " << i << " mark: ";
        cin >> mark;
        total += mark;
    }

    cout << "Average = "<< fixed << setprecision(2) << total / 3.0 << endl;
}

void Lab6Q7() {

    cout << "[Exercise 6 - Question 7]" << endl;

    int start, end;
    cout << "Start: "; cin >> start;
    cout << "End: "; cin >> end;

    if (start <= end) {
        for (int i = start; i <= end; i++)
            cout << i << " ";
    }
    else {
        for (int i = start; i >= end; i--)
            cout << i << " ";
    }

    cout << endl;
}

void Lab6Q8() {

    cout << "[Exercise 6 - Question 8]" << endl;

    int start, end;

    cout << "Start: "; cin >> start;
    cout << "End: "; cin >> end;

    if (start <= end) {
        for (int i = start; i <= end; i++)
            if (i % 2 == 0) cout << i << " ";
    }
    else {
        for (int i = start; i >= end; i--)
            if (i % 2 == 0) cout << i << " ";
    }

    cout << endl;
}
