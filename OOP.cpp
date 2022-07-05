
/*

Academic Integrity Checklist
1. I understand that I am responsible for being honest and ethical in this assessment as per Policy
2. The assessment was completed by my own efforts and I did not collaborate with any other
person for ideas or answers.
3. This is the first time I have submitted this assessment (either partially or entirely) for academic
evaluation.

Student Name: Ismail Hussein    Student ID: 6536177

Ismail Hussein (by typing my name here I affirm my agreement to the foregoing statements)

*/

#include <iostream>
#include "Functions.h";
#include "PrintFunctions.h";

using namespace std;

int main()
{
    Functions F;
    PrintFunctions P;

    try
    {
        srand((unsigned)time(0));//function that seeds the random number generator used by the rand()

        P.Menu(); //calling Menu function

        char letter;
        cin >> letter; //inputing first letter

        F.Rules(letter); //Putting the letter inputted into the Rules function

        int round = 0;
        int credits = 500;

        F.StartGame(letter, &round, &credits); //Adding the letter,round, and credits in StartGame function

        if (letter != 'q' && letter == 'h' || letter == 's') { //if the user entered any letter but not q the code below will run

            P.PrintOption();

            char letter1;
            cin >> letter1; //inputing second letter

            F.Rounds(letter1, &round, &credits); //Calling the round function to make the user choose an option

            /////////////////////////////////////////////////

            P.PrintOption();

            char letter2;
            cin >> letter2; //inputing third letter

            F.Rounds(letter2, &round, &credits); //Calling the round function to make the user choose an option

            /////////////////////////////////////////////////

            P.PrintOption();

            char letter3;
            cin >> letter3; //inputing fourth letter

            F.Rounds(letter3, &round, &credits); //Calling the round function to make the user choose an option

            /////////////////////////////////////////////////

            P.PrintOption();

            char letter4;
            cin >> letter4; //inputing fifth letter

            F.Rounds(letter4, &round, &credits); //Calling the round function to make the user choose an option

            /////////////////////////////////////////////////

            if (letter == 'h') {

                P.PrintOption();

                char letter5;
                cin >> letter5; //if the user entered h at the beginning this will be the 5th letter

                F.Rounds(letter5, &round, &credits);//Calling the round function to make the user choose an option
            }
            else {
                cout << endl << "The game ended" << endl;
            }
        }
    }
    catch (int e) // to catch the integer that was thrown and display message
    {
        cout << "Left game" << endl;
    }
    catch (double x) // to catch the double that was thrown and display message
    {
        cout << endl << "Please make the letter lower case or choose a valid letter and try again" << endl;
    }

}


