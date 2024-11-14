#include <iostream>
#include <string>
using namespace std;

//Q2_Binary Searxh
//Ratu Faiha Salsabilla Rahmadina_532756

struct Student {
    long long NISN;
    string name;
    int value;
};

void sortDescendingNISN(Student students[], int size) { //sorting the students by NISN in descending order
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(students[i].NISN < students[j].NISN) { //swapping i and j
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int binarySearchNISN(Student students[], int size, long long targetNISN) {  // does a binary search on the students array, where it looks for a specific NISN
    int left = 0, right = size - 1; // left is the start of the array, and right is the last index of the array, so the size of the array -1
    while (left <= right) { // as long as the left is <= the right then the loop continues running
        int mid = left + (right - left)/2; // calculating the middle index of the current range given
        
        if(students[mid].NISN == targetNISN) {
            return students[mid].value; // when the program finds the targetNISN, it returns the value of that NISN(student)
        } 
        else if(students[mid].NISN > targetNISN) { // if the NISN at mid is > targetNISN then the target should be on the lower half of the range, hence why +1
            left = mid + 1;
        }
        else if(students[mid].NISN < targetNISN) { // if the NISN at mid is less than the targetNISN; the target still exists possibly in the upper half of the range hence why -1
            right = mid - 1; 
        }
        
    }
    return -1; // when the loop completes and hasn't found the targestNISN, which means it can't give a return value so it returns -1 since no student was found
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

    sortDescendingNISN(students, size);

    long long targetNISN = 9950310962;
    int result = binarySearchNISN(students, size, targetNISN); //calling the binaryseach funcion and stores these in result 

    if(result != -1) {  // when result is not -1, then the program prints the student's value
        cout << "Student with the NISN " << targetNISN << " has the value: " << result << endl;
    }
    else {  // when result is -1 which means that the student wasn't found; program prints this
        cout << "Student with the NISN " << targetNISN << " has not been found." << endl;
    }

    return 0;
}