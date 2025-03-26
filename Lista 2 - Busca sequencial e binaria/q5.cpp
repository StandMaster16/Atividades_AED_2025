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

void insertionSort(Course* vetor, int size) {
    for (int i = 1; i < size; i++) {
        Course escolhido = vetor[i]; 
        std::string escolhidoNumero = escolhido.courseNumber;
        int j = i - 1;
        
        // Compara as strings (courseNumber)
        while ((j >= 0) && (vetor[j].courseNumber > escolhidoNumero)) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        
        vetor[j + 1] = escolhido;
    }
}

int buscaBinaria(string key, Course* vetor, int size){
    int i = 0, j = size - 1, k = 0;
    double m;
    while (i <= j){
        m = ((i+j)/2);
        k++;
        if (key == vetor[(int) m].courseNumber) return k; 
        else if (key < vetor[(int) m].courseNumber) j = m - 1;
        else i = m + 1;
    }
    return k;
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
    insertionSort(disciplinas, size);
    cout << buscaBinaria(key, disciplinas, size) << endl;

}