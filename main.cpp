#include "function.h"

int main() { 
    vector<int>guess(0);
    vector<int>answer(4);
    answer = answerGenerator();
    while (true) {
        guess = userGuess();
        bool correct = checker(answer, guess);
        if (correct) {
            break;
        }
    }
}

