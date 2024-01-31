#include <iostream>
using namespace std;

#ifndef STUDENTINFOSYSTEM_STUDENT_H
#define STUDENTINFOSYSTEM_STUDENT_H

class Student {

private:
    int id;
    string name;
    int grade;

public:
    Student(int _id, string _name, int _grade);
    void setId (int _id);
    void setName (string _name);
    void setGrade (int _grade);
    int getId();
    string getName();
    int getGrade();
    void showStuInfo();

};






































#endif //STUDENTINFOSYSTEM_STUDENT_H


