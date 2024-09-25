// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<char> cypher({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    string text;

    const int max_limit = 128;

    cout << "Input text to cypher:";
    getline(cin, text); 

    if (text.length() > max_limit) {
        cout << "ERROR! CHARACTER lIMIT SURPASSED";
        return 1;
    }
    for (int i=0; i < text.length(); ++i) {
        if (text[0] > 65 and text[0] < 90) {
            int translate;
            text[i] == translate;
            translate == translate - 65;
        }
        else if (text[0] > 97 and text[0] < 122) {

        }
    }
}


