#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, input;

    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Guess the number between 1 and 100:- ";


    do {
        cin >> input;
        if (input > number) {
            cout << "Too high! Try again:- ";
        } else if (input < number) {
            cout << "Too low! Try again:- ";
        } else {
            cout << "Correct! You guessed the number!"<<endl;
        }

    } while (input != number);

    return 0;
}