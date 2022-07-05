
#include <iostream>;
#include <string>;
#include "PrintFunctions.h";

using namespace std;

PrintFunctions::PrintFunctions() {}

void PrintFunctions::Menu() { //function to display the Menu

    cout << endl << "Welcome my friend, to DesertLand Resort!"
        << endl << "Press 'h' to see rules of card game..."
        << endl << "Press 's' to play simple card game...."
        << endl << "Press 'q' to quit"
        << endl << "Input your choice" << endl;

}

void PrintFunctions::PrintOption() // function to print a message
{
    cout << endl << "Select 'q' if you do not wish to continue" << endl
        << "Select 's' to play the game" << endl;
}