#include <iostream>
#include <string>
using namespace std;

class Course{
public:
    string courseName;
    string courseNumber;
    int credits;
    Course(string newName="", string newNumber="", int newCredits=0) : courseName(newName), courseNumber(newNumber), credits(newCredits) {}
    void display(){
        cout << courseName << ", " << courseNumber << ", " << credits << "h" << endl;
    }
};

void buscaSequencial(string key, Course* vetor, int size){
    for(int i = 0; i < size; i++){
        if (key == vetor[i].courseNumber) return vetor[i].display();
    }
    cout << "Nenhuma disciplina com codigo " << key << " foi encontrada." << endl;
}

int main(){

    string name, number, key;
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
    cin >> key;
    buscaSequencial(key, disciplinas, size);

}