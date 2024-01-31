#include <iostream>
#include "Student.h"
#include <list>

using namespace std;

// API

void showMenu() {
    cout << "* * * * * * * * * * * *" << endl;
    cout << "*                     *" << endl;
    cout << "*         MENU        *" << endl;
    cout << "*                     *" << endl;
    cout << "* * * * * * * * * * * *" << endl;
    cout << "1.  Add a new registration" << endl;
    cout << "2.  Show full list" << endl;
    cout << "3.  Delete a registration according to student information" << endl;
    cout << "4.  Find a student" << endl;
    cout << "5.  Exit" << endl;
}


void addStudent(list<Student> *lst) {
    int id;
    string name, firstName, lastName;
    int grade;
    cout << "Please enter your ID: ";
    cin >> id;
    cout << "Please enter your name and surname respectively, leaving a space between them: ";
    cin >> firstName >> lastName;
    name = firstName + " " + lastName;
    cout << "Please enter your exam grade: ";
    cin >> grade;
    Student stu(id, name, grade);
    lst->push_back(stu);
}

void showList(list<Student> *lst) {
    list<Student>::iterator it;
    cout << "- - - - - - List of All the Students - - - - - -" << endl;
    for(it = lst->begin(); it != lst -> end(); it ++){
        it->showStuInfo();  // sanki student içinde bir ptr gibi kullanabiliyoruz.
    }
    cout << endl;
}

void delStudent(list<Student> *lst) {
    int id;
    cout << "Please enter student ID: ";
    cin >> id;

    list<Student>::iterator it;
    for(it = lst->begin(); it != lst -> end(); it ++){
        if(it->getId() == id)
            break;
    }
    if(it == lst->end()){   // Probably shows Null
        cout << "ID not found. Deletion cannot be done. Try again!" << endl;
    }
    else
        lst->erase(it);

}


void findStudent(list<Student> *lst) {
    int id;
    cout << "Please enter student ID: ";
    cin >> id;

    list<Student>::iterator it;
    for(it = lst->begin(); it != lst -> end(); it ++) {
        if (it->getId() == id)
            break;
    }
    if(it == lst->end()) {   // -
        cout << "ID not found. Deletion cannot be done. Try again!"<< endl;
    }
    else {
        cout << "Student found! Here is the student information you are looking for." << endl;
        it->showStuInfo();
        cout << endl;
    }
}

void exit() {}


int main() {

    list<Student> *pstudentList = new list<Student>();


    int choice;
    do {
        showMenu();
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(pstudentList);
                break;

            case 2:
                showList(pstudentList);
                break;

            case 3:
                delStudent(pstudentList);
                break;

            case 4:
                findStudent(pstudentList);
                break;

            case 5:
                exit();
                break;

            default:
                cout << "There is no match witch your choice, try again!" << endl;

        }

    } while (choice != 5);

    return 0;
}
