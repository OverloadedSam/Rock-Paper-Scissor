#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstring>
#include "ClassFile.h"
using namespace std;
// Coded by Sam on June of 8th 2019.

int main(int argc, char const *argv[])
{
    system("cls");
    int userDecision, rounds = 3;
    string N;
    cout << "Hey there! what's your good name?" << endl;
    cin >> N;
    Game user(N);
    cout << endl
         << "Welcome to Rock, Paper, Scissor game " << N << "!" << endl;
    cout << "How many rounds do you want to play " << N << " ?" << endl;
    cin >> rounds;

    cout << endl
         << endl
         << "1) --> Rock " << endl
         << "2) --> Paper" << endl
         << "3) --> Scissor" << endl
         << endl;

    for (int i = 0; i < rounds; i++)
    {
        cout << "Round: [" << i + 1 << "]" << endl;
        cout << "Choose your Weapon:  ";
        cin >> userDecision;
        user.turn(----userDecision, rounds);
    }
    user.result();
    cout << "Thanks " << N << "! for playing this game" << endl;

    return 0;
}
