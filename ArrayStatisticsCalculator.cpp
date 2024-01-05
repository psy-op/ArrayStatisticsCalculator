// ArrayStatisticsCalculator
// TITLE: Array Statistics Calculator

#include <iostream>
using namespace std;

// Main function
int main() {
    // Giving a size to the array as n
    int n = 10;
    int array[n];

    // Asking the user for the list of numbers
    cout << "Enter your list of numbers:  ";

    // For loop to add the numbers to the array
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Prints the list of numbers for the user
    cout << "Your array has these values: " << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << ' ';
    }

    // Finds the smallest number and prints it
    int smallest = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    cout << endl << "Smallest: " << smallest << endl;

    // Finds the largest number and prints it
    int largest = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    cout << "Largest: " << largest << endl;

    // Finds the sum of all numbers and prints it
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + array[i];
    }
    cout << "Sum: " << sum << endl;

    // Finds the average of all numbers and prints it
    float avg = 0;
    for (int i = 0; i < n; i++) {
        avg = avg + array[i];
    }
    avg = avg / n;
    cout << "Average: " << avg << endl;

    return 0;
}
