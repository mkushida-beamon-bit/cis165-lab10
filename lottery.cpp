/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int SIZE = 5;

    int winningDigits[SIZE];
    int player[SIZE];
    int matches = 0;

    // Seed the random number generator once.
    srand(static_cast<unsigned int>(time(0)));

    // Generate five random winning digits from 0 through 9.
    for (int i = 0; i < SIZE; i++)
    {
        winningDigits[i] = rand() % 10;
    }

    // Ask the player to enter five digits.
    cout << "Enter five digits (0-9):" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter digit " << i + 1 << ": ";
        cin >> player[i];
    }

    // Compare digits at corresponding positions.
    for (int i = 0; i < SIZE; i++)
    {
        if (winningDigits[i] == player[i])
        {
            matches++;
        }
    }

    // Display the winning digits.
    cout << "\nWinning digits: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << winningDigits[i] << " ";
    }

    // Display the player's digits.
    cout << "\nPlayer digits: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << player[i] << " ";
    }

    // Display the total number of matches.
    cout << "\nNumber of matches: " << matches << endl;

    return 0;
}
