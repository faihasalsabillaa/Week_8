#include <iostream>
#include <string>
using namespace std;

//Q1_Insertion sort
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

void insertionSortNISN(Student students[], int size) { //insertion sort by NISN in descending order
    for (int i = 1; i < size; i++) {
        Student key = students[i];
        int j = i - 1;
        while (j >= 0 && students[j].NISN < key.NISN) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
    }
}

void insertionSortValue(Student students[], int size) { //insertion sort by Value in descending order
    for (int i = 1; i < size; i++) {
        Student key = students[i];
        int j = i - 1;
        while (j >= 0 && students[j].value < key.value) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
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

    insertionSortNISN(students, size);
    cout << "Result of data after insertion sort by NISN: \n";
    displayStudents(students, size);

    insertionSortValue(students, size);
    cout << "Result of data after insertion sort by value: \n";
    displayStudents(students, size);

    return 0;
}