#include <iostream>
#include <string>
using namespace std;

//Q1_Selection sort
//Ratu Faiha Salsabilla Rahmadina_532756

struct Student {
    long long NISN;
    string name;
    int value;
};

void displayStudents(Student students[], int size) { //format of the printed data when program is run
    for(int i = 0; i < size; i++) {
        cout << "NISN: " << students[i].NISN << ", Name: " << students[i].name << ", Value: " << students[i].value << endl;
    }
    cout << endl;
}

void selectionSortNISN(Student students[], int size) { //in descending order
    for(int i = 0; i < size; i++) {
        int maxidx = i;
        for(int j = i + 1; j < size; j++) {
            if(students[j].NISN > students[maxidx].NISN) {
                maxidx = j;
            }
        }
        swap(students[i], students[maxidx]);
    }
}

void selectionSortValue(Student students[], int size) { //in descending order
    for(int i = 0; i < size; i++) {
        int maxidx = i;
        for(int j = i + 1; j < size; j++) {
            if(students[j].value > students[maxidx].value) {
                maxidx = j;
            }
        }
        swap(students[i], students[maxidx]);
    }
}

int main() {
    const int size = 7;
    Student students[size] = 
    {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    selectionSortNISN(students, size);
    cout << "Result of data after Selection sort by NISN: \n";
    displayStudents(students, size);

    selectionSortValue(students, size);
    cout << "Result of data after Selection sort by value: \n";
    displayStudents(students, size);

    return 0;
}