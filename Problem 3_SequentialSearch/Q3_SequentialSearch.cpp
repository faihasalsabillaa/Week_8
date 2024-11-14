#include <iostream>
#include <string>
using namespace std;

//Q3_Sequential search methods (changing data)
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

void nameUpdate(Student students[], int size, int targetValue, const string& newName) {
    for(int i = 0; i < size; i++) {
        if(students[i].value == targetValue) {
            students[i].name = newName;
        }
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

    cout << "Original list of students: \n";
    displayStudents(students, size);

    nameUpdate(students, size, 60, "Joko");

    cout << "The updated list of students: \n";
    displayStudents(students, size);

    return 0;
}