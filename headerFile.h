#pragma once
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>
#include <iostream>
#include <array>
#include <string>
using namespace std;
//Declarations for class employee and the classes that inherit from it
class Employee {
protected:
    //All classes inherit these classes 
    string name;
    int employeeId;

public:
    Employee(const string& _name, int _employeeId);

    virtual double calculateWeeklySalary() const = 0;
    virtual double computeHealthCareContributions() const = 0;
    virtual int computeVacationDays() const = 0;

    void printInfo() const;
};
//Declarations for class employee and the classes that inherit from it
class Professional : public Employee {
private:
    //Private classes for just professionals
    double monthlySalary;
    int vacationDays;

public:
    Professional(const string& name, int employeeId, double monthlySalary);

    double calculateWeeklySalary() const override;
    double computeHealthCareContributions() const override;
    int computeVacationDays() const override;
};
//Declarations for class employee and the classes that inherit from it
class Nonprofessional : public Employee {
private:
    //Private classes for just non-professionals
    double hourlyRate;
    int hoursWorked;

public:
    Nonprofessional(const string& name, int employeeId, double hourlyRate, int hoursWorked);

    double calculateWeeklySalary() const override;
    double computeHealthCareContributions() const override;
    int computeVacationDays() const override;
};