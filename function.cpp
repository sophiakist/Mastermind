#include "function.h"
using namespace std;

vector<int> answerGenerator(){
    srand (time(NULL));
    vector<int> answer(4);
    answer.at(0) = (rand() % 8) + 1;
    answer.at(1) = (rand() % 8) + 1;
    answer.at(2) = (rand() % 8) + 1;
    answer.at(3) = (rand() % 8) + 1;
    return answer;
}

vector<int> userGuess() {
    vector<int> guess(0);
    int guess_input;
    int i = 1;
    while (i < 5) {
        cout << "Enter number #" << i << ": ";
        cin >> guess_input;
        if (guess_input < 0 || guess_input >= 9) {
            cout << "INVALID INPUT" << endl;
            continue;
        }
        guess.push_back(guess_input);
        i += 1;
        }
    return guess;
}

bool checker(vector<int> answer, vector<int> guess) {
    int countAnswer = 0;
    int countNumber = 0;
    for (int i = 0; i < guess.size(); i ++) {
        bool contains = false;
        if (guess.at(i) == answer.at(i)) {
            countAnswer += 1;
        }
        for (int j = i; j < guess.size(); j++) {
            if (guess.at(j) == answer.at(i)) {
                contains = true;
            }
        }
        if (contains) {
            countNumber += 1;
        }
    }
    countNumber -= countAnswer;
    if (countAnswer != answer.size()) {
        cout << "You have " << countAnswer << " in the right place" << endl;
        cout << "You have " << countNumber << " correct numbers in wrong spot" << endl;
        return false;
    } else {
        cout << "You got right answer!" << endl;
        return true;
    }
}