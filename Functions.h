#ifndef FUNCTIONS
#define FUNCTIONS
#pragma once
#include <string>

using namespace std;

class Functions
{

public:

   Functions();

   void Rules(char letter);

   void StartGame(char letter, int* round, int* credits);

   char Rounds(char letter, int* round, int* credits);

};
#endif

