#include <iostream>
using namespace std;

// Base class: Student
class Student {
public:
    string name;
    char sec;
    int ID;

    void getStudentInfo() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Section: ";
        cin >> sec;
        cout << "Enter ID: ";
        cin >> ID;
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Section: " << sec << endl;
        cout << "ID: " << ID << endl;
    }
};

// Derived class: Result
class Result : public Student {
public:
    float mark;

    void getMark() {
        cout << "Enter Mark: ";
        cin >> mark;
    }

    void calculateGrade() {
        cout << "Grade: ";
        if (mark >= 90) cout << "A+";
        else if (mark >= 80) cout << "A";
        else if (mark >= 70) cout << "B+";
        else if (mark >= 60) cout << "B";
        else if (mark >= 50) cout << "C";
        else cout << "F";
        cout << endl;
    }

    void displayResult() {
        displayStudentInfo();
        cout << "Mark: " << mark << endl;
        calculateGrade();
    }
};

int main() {
    Result student;
    student.getStudentInfo();
    student.getMark();
    student.displayResult();
    return 0;
}
