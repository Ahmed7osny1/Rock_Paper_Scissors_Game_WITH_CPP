#include <bits/stdc++.h>
using namespace std;

char getComputer();
void winner(char cuser, char ccomputer);

int main()
{

    char c;

    cout << "Rock, Paper and Scissors Game!\n";
    cout << "Choose one of the following options\n";
    cout << "-----------------------------------\n";
    cout << "(r) for rock \n(p) for paper \n(s) for scissors \n";

    cin >> c;

    while (tolower(c) != 'r' && tolower(c) != 'p' && tolower(c) != 's')
    {
        cout << "Please enter one of the following options only.\n";
        cout << "(r) for rock \n(p) for paper \n(s) for scissors \n";

        cin >> c;
    }

    char s = getComputer();

    winner(tolower(c), s);
}

char getComputer()
{


    int num = rand() % 3 + 1;

    if (num == 1)
        return 'r';
    if (num == 2)
        return 'p';
    if (num == 3)
        return 's';
}

void winner(char cuser, char ccomputer)
{
    if (cuser == 'r' && ccomputer == 'p')
    {
        cout << "Computer Wins! Paper wraps Rock." << endl;
    }
    else if (cuser == 'p' && ccomputer == 's')
    {
        cout << "Computer Wins! Scissors cut Paper." << endl;
    }
    else if (cuser == 's' && ccomputer == 'r')
    {
        cout << "Computer Wins! Rock smashes Scissors." << endl;
    }
    else if (cuser == 'r' && ccomputer == 's')
    {
        cout << "You Win! Paper wraps Rock." << endl;
    }
    else if (cuser == 'p' && ccomputer == 'r')
    {
        cout << "You Win! Paper wraps Rock." << endl;
    }
    else if (cuser == 's' && ccomputer == 'p')
    {
        cout << "You Win! Scissors cut Paper." << endl;
    }
    else
    {
        cout << "Draw. Play again win the Game." << endl;
    }
}
