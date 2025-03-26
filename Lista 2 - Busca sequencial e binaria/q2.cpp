#include <iostream>
#include <string>
using namespace std;

class Course{
private:
    string courseName;
    string courseNumber;
    int credits;
public:
    Course(string newName="", string newNumber="", int newCredits=0) : courseName(newName), courseNumber(newNumber), credits(newCredits) {}
    void display(){
        cout << courseName << ", " << courseNumber << ", " << credits << "h" << endl;
    }
};    

int main(){

    string name, number;
    int credits, size;
    cin >> size;
    Course* disciplinas = new Course[size];
    for(int i=0; i < size; i++){
        cin.ignore();
        getline(cin, name);
        cin >> number;
        cin >> credits;
        disciplinas[i] = Course(name, number, credits);
    }
    for(int i=0; i < size; i++) disciplinas[i].display();

}