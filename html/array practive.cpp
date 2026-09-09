#include <iostream>

using namespace std;

int main() {
    // Example 1
    cout << "Example 1 Int, Double, or Float" << endl;
    
    // create the variable with size 3
    double numbers[3] = {1, 1.4, 1.6};

    for (int indexKoNi = 0; indexKoNi < 3; indexKoNi++) {
        cout << "index " << indexKoNi << " = " << numbers[indexKoNi] << endl;
    }
    
    // Example 2
    cout << endl;
    cout << "Example 2 String" << endl;

    string names[3] = {"Name 1", "Name 2", "Name 3"};

    for (int indexNimo = 0; indexNimo < 3; indexNimo++) {
        cout << "index " << indexNimo << " = " << names[indexNimo] << endl;
    }
    
    // Example 3
    cout << endl;
    cout << "Example 3 Input into the array" << endl;
    
    // create the variable with size 5
    int arraySize = 5;
    string myNamesArrayKoNi[arraySize];
    
    // Insert values into the array
    for (
        int yourVariable = 0; // create the variable with starting value
        yourVariable < arraySize; // logic to check if the code should keep running
        yourVariable++ // what to do with the variable once the code inside the bracket finish running 
    ) {
        cout << "Please enter a name: ";
        getline(cin, myNamesArrayKoNi[yourVariable]);
    }
    
    // new line
    cout << endl;

    // Output the inputted values
    for (
        int yourVariable = 0; // create the variable with starting value
        yourVariable < arraySize; // logic to check if the code should keep running
        yourVariable++ // what to do with the variable once the code inside the bracket finish running 
    ) {
        cout << "index " << yourVariable << " = " << myNamesArrayKoNi[yourVariable] << endl;
    }

    return 0;
}