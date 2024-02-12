#include <iostream> 
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std; 

int main() { 
    //computer RPS:
    string textArr[3] = {"rock", "paper", "scissors"}; //array of choices
    srand(time(NULL)); //seed the random number generator, use the current time as the seed because it's constantly changing
    int randIndex = rand() % 3; // will choose random integer from 0-3
    string compChoice=textArr[randIndex];
   //user RPS:
    cout << "Choose 'rock','paper','scissors': ";
    string userChoice;
    cin >> userChoice;//takes user input
    for (auto& x : userChoice){ //to avoid using transform, for loop for each character to make lowercase.
        x=tolower(x);
    }

    //output
    cout << "Computer's choice: " << compChoice << endl;
    cout << "Your choice: " << userChoice << endl;
    //winner-loser logic
     if (userChoice == compChoice) {
        cout << "It's a tie!";
    } else if ((userChoice == "rock" && compChoice == "scissors") ||
               (userChoice == "paper" && compChoice == "rock") ||
               (userChoice == "scissors" && compChoice == "paper")) {
        cout << "You win!";
    } else {
        cout << "Computer wins!";
    }
    return 0; 
}
