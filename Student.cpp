#include <iostream>
#include "Student.h"

using namespace std;

// Constructor
Student::Student(int _id, std::string _name, int _grade) {
    id = _id;
    name = _name;
    grade = _grade;
}

void Student::setId(int _id) {
    id = _id;
}

void Student::setName(std::string _name) {
    name = _name;
}

void Student::setGrade(int _grade) {
    grade = _grade;
}

int Student::getId() {
    return id;
}

string Student::getName() {
    return name;
}

int Student::getGrade() {
    return grade;
}

void Student::showStuInfo() {
    cout << "ID: " << id << "    Name: " << name << "    Grade: " << grade << endl;
}