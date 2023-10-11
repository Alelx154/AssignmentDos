#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <array>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iostream>
#include <limits>
#include <iostream>
#include <stdexcept>
#include "headerFile.h"
using namespace std;

Employee::Employee(const string& _name, int _employeeId)
    :name(_name), employeeId(_employeeId) {}

void Employee::printInfo() const {
    cout << "Name: " << name << endl;
    cout << "Employee ID: " << employeeId << endl;
}

//Implementations for Professional class
Professional::Professional(const string& name, int employeeId, double monthlySalary)
    : Employee(name, employeeId), monthlySalary(monthlySalary) {
    vacationDays = 20; 
    //Professional employees start with 20 vacation days
}

double Professional::calculateWeeklySalary() const {
    return monthlySalary / 4.0;
}

double Professional::computeHealthCareContributions() const {
    //Health care contributions for professional employees
    return monthlySalary / 12;
}

int Professional::computeVacationDays() const {
    return vacationDays;
}

//Implementations for Nonprofessional class
Nonprofessional::Nonprofessional(const string& name, int employeeId, double hourlyRate, int hoursWorked)
    : Employee(name, employeeId), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

double Nonprofessional::calculateWeeklySalary() const {
    return hourlyRate * hoursWorked;
}

double Nonprofessional::computeHealthCareContributions() const {
    // Implement health care contributions for nonprofessionals
    return 50.0;
}

int Nonprofessional::computeVacationDays() const {
    // Assuming 1 vacation hour for every 40 hours worked
    return hoursWorked / 40;
}

