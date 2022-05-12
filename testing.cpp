#include <vector>
#include <string>
#include <iostream>
#include "function.h"

using namespace std;

int first() {
    vector<int> expectedGuess {1,2,3,4};
    cout << "Enter 1, 2, 3 , 4" << endl;
    vector<int> actualGuess = userGuess(); 
    if (expectedGuess == actualGuess) {
        cout << "You entered it correctly" << endl;
    } else {
        cout << "You entered it wrong" << endl;
    }
    return 0;
}

int second() {
    bool expectedValue;
    expectedValue = false;
    vector<int> expectedAnswer {1,2,3,4};
    vector<int> expectedGuess {1,2,3,4};
    expectedValue = checker(expectedAnswer, expectedGuess);
    if (expectedValue == true) {
        cout << "Runs correctly" << endl;
    } else {
        cout << "Runs incorrectly" << endl;
    }
    return 0;
}

int third() {
    vector<int> actualAnswer = answerGenerator();
    vector<int> expectedAnswer = actualAnswer;
    if (actualAnswer == expectedAnswer){
        cout << "Runs correctly" << endl;
    } else {
        cout << "Runs incorrectly" << endl;
    }
    return 0;
}