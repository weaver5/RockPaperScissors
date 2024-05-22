#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm> // for using transform 
#include <cctype> // for using touppe

using namespace std;


int main(){
    //a pointer is the value in an address that
    //points to another address
    //access by reference rather than value

    //* modify type if type is near it
    //or if alone, go to address of pointer and grab that value

    string rps[3]={"ROCK","PAPER","SCISSORS"};

    cout <<"Choose Rock, Paper, or Scissors(Rock,Paper,Scissors: ";

    srand ( time(NULL) ); //initialize the random seed
    int RandIndex = rand() % 3;//generates a random number between 0 and 2

    string userChoice;
    cin >> userChoice;
    transform(userChoice.begin(), userChoice.end(), userChoice.begin(), ::toupper);

    cout << "The computer chose: " << rps[RandIndex]<<endl;;
    cout << "You chose: "<< userChoice <<endl;
    if(rps[RandIndex]==userChoice){
        cout << "It is a tie \n";
    }
    else if(rps[RandIndex]=="ROCK" && userChoice == "SCISSORS" ){
        cout<<"Computer Wins \n";
    }
    else if(rps[RandIndex]=="PAPER" && userChoice=="ROCK"){
        cout<<"Computer Wins \n";
    }
    else if (rps[RandIndex]=="SCISSORS" && userChoice=="PAPER"){
        cout<<"Computer Wins \n";
    }
    else if(userChoice != "ROCK" || userChoice != "PAPER" || userChoice != "SCISSORS"){
        cout<<"Invalid response, try again.";
    }
    else{
        cout<<"Player Wins \n";
    }

    return 0;
}