
#include <iostream>;
#include <string>;
#include "Functions.h";

using namespace std;

Functions :: Functions() {}

void Functions :: Rules(char letter) { // Rules function

    try
    {
        switch (letter) {
        case 'h': // h to show the rules
            cout << endl << "-) The rules of the game:"
                << endl << "1) The player will play a card game with the computer (banker) for a total of five (5) rounds"
                << endl << "2) The player will start with $500 credit points and each round, the bet is fixed at $10 points"
                << endl << "3) The player will win if his hand has a value higher than the banker and he wins $10 points,"
                << endl << "otherwise he loses the same amount to banker"
                << endl << "(REMINDER) The Ace is the lowest card which is equal to 1"
                << endl << "(REMINDER) The King is the highest card which is equal to 13"
                << endl << "(REMINDER) If the banker has the same number like the player, the banker wins" << endl;
            break;

        case 's': // empty case because a function for case s has been made seperatly

            break;

        case 'q': // to leave the game
            throw 20; // an integer will be thrown and later be catched to show an exception
            break;

        default:
            throw 20.0; // a double will be thrown and later be catched to show an exception
            break;


        }
    }
    catch (int e) // to catch the integer that was thrown and display message
    {
        cout << "Left game" << endl;

    }
    catch (double x) // to catch the double that was thrown and display message
    {
        cout << "Please make the letter lower case or choose a valid letter and try again" << endl;
    }

}

void Functions :: StartGame(char letter, int* round, int* credits) { // function to start the game

    try
    {

        if (letter == 's') {

            *round = *round + 1; // incrementing rounds
            cout << endl << "Game round number: " << *round;

            cout << endl << "Starting game, Shuffling and dealing cards" << endl;

            int Banker = rand() % 13 + 1; // generating random numbers
            int Player = rand() % 13 + 1; // generating random numbers

            if (Banker >= Player)
            {

                cout << "Player hand holds: " << Player << endl;
                cout << "Banker hand holds: " << Banker << endl;
                cout << "Banker wins!" << endl;
                *credits = *credits - 10; // decrementing credits
                cout << "Player credits: " << *credits << endl;

            }

            if (Player > Banker)
            {

                cout << "Player hand holds: " << Player << endl;
                cout << "Banker hand holds: " << Banker << endl;
                cout << "Player wins!" << endl;
                *credits = *credits + 10; // incrementing credits
                cout << "Player credits: " << *credits << endl;

            }
        }
    }
    catch (int e) // to catch the integer that was thrown and display message
    {
        cout << "Left game" << endl;
    }
    catch (double x) // to catch the double that was thrown and display message
    {
        cout << "Please make the letter lower case or choose a valid letter and try again" << endl;
    }
}

char Functions :: Rounds(char letter, int* round, int* credits) {// function to make the user enter more letters

    switch (letter) {

    case 'q':
        throw 20;
        break;

    case 's':
        StartGame(letter, round, credits);
        break;

    default:
        throw 20.0;
        break;
    }

}

