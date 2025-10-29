#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float grade;

public:
    Student(int i, string n, float g) {
        id = i;
        name = n;
        grade = g;
    }

    void displayInfo() {
        cout << "mu: " << id << endl;
        cout << "rt: " << name << endl;
        cout << "da: " << grade << endl;
    }
};

int main() {
    Student s1(1, "murtada", 90.5);
    s1.displayInfo();
    return 0;
}
