#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <array>
#include <iomanip>
#include <iostream>
#include <iostream>
#include "headerFile.h"

using namespace std;

int main() {
    
    string nameOne = "No Name";
    string nameTwo = "No Name";

    int emplID = 0;
    int empIDTwo = 0;

    int monthlySalary1 = 0;
    double hourlySalary = 0;

    int hoursWorked = 0;

    cout << "Enter name of employee: " << endl;
    cin >> nameOne;
    cout << "Enter name of employee: " << endl;
    cin >> nameTwo;

    cout << "Enter employee ID number: " << endl;
    cin >> emplID;
    cout << "Enter employee ID number: " << endl;
    cin >> empIDTwo;

    cout << "Enter monthly salary: " << endl;
    cin >> monthlySalary1;
    cout << "Enter hourly salary: " << endl;
    cin >> hourlySalary;

    cout << "Enter hours worked: " << endl;
    cin >> hoursWorked;



    Professional professional(nameOne, emplID, monthlySalary1);
    Nonprofessional nonProfessional(nameTwo, empIDTwo, hourlySalary, hoursWorked);

    cout << "Professional Employee:" << endl;
    professional.printInfo();
    cout << "Weekly Salary: $" << professional.calculateWeeklySalary() << endl;
    cout << "Health Care Contributions: $" << professional.computeHealthCareContributions() << endl;
    cout << "Vacation Days: " << professional.computeVacationDays() << endl;

    cout << endl;

    cout << "Nonprofessional Employee:" << endl;
    nonProfessional.printInfo();
    cout << "Weekly Salary: $" << nonProfessional.calculateWeeklySalary() << endl;
    cout << "Health Care Contributions: $" << nonProfessional.computeHealthCareContributions() << endl;
    cout << "Vacation Days: " << nonProfessional.computeVacationDays() << endl;

    return 0;
}
