// char_array_example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    char letters[5];
    int vowel_count = 0;

    //Reading characters

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i << "character : ";
        cin >> letters[i];
    }

    //Vowel check
    if (letters[i] == 'a' || letters[i] == 'e' || letters[i] == 'i' || letters[i] == 'o' || letters[i] == 'u')
    {
        vowel_count++;
    }

    //Display
    cout << "\n\nGiven letters : \n\n";
    cout << "\t";
    for (int i = 0; i < 5; i++)
    {
        if (i < 4)
        {
            cout << letters[i] << " , ";
        }
        else
        {
            cout << letters[i] << " . ";
        }
    }

    cout << "\n\nNumber of vowel's : " << vowel_count;
    cout << "\n\n";

    return 0;
}


