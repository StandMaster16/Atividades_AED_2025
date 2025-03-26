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
    Course* vetorSentinela = new Course[size+1];
    for(int i = 0; i < size; i++) vetorSentinela[i] = vetor[i];
    vetorSentinela[size].courseNumber = key;
    int i = 0;
    while (key != vetorSentinela[i].courseNumber) i++;
    if (i < size) return vetorSentinela[i].display();
    cout << i << endl;
    delete[] vetorSentinela;
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