#include <iostream>
#include <string>
using namespace std;

class Course{
private:
    string courseName;
    string courseNumber;
    int credits;
public:
    Course(string newName, string newNumber, int newCredits){
        courseName = newName;
        courseNumber = newNumber;
        credits = newCredits;
    }
    void display(){
        cout << courseName << ", " << courseNumber << ", " << credits << "h" << endl;
    }
};

int main(){
    string name, number;
    int credits;
    getline(cin, name);
    cin >> number;
    cin >> credits;
    Course disciplina(name, number, credits);
    disciplina.display();
}