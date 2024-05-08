#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int l;
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t;
    getline(cin, t);


    // Normalize the input text to upper case and replace non-alphabetic with '?'
    std::transform(t.begin(), t.end(), t.begin(), [](char c) {
        if (std::isalpha(c)) {
            return std::toupper(c);
        } else {
            return 0;
        }
    });

    std::vector<std::string> alphabet(h);
        for (int i = 0; i < h; i++) {
            std::getline(std::cin, alphabet[i]);
        }

   for (int i = 0; i < h; i++) {
        std::string output_line;
        for (char ch : t) {
            int x;
            if (ch >= 'A' && ch <= 'Z') {
                x = ch - 'A';  // Index for alphabet
            } else {
                x = 26;  // Index for '?' (the 27th character)
            }

            // Build the part of the ASCII art for this character
            output_line += alphabet[i].substr(x * l, l);
        }

        // Output the constructed line for this row
        std::cout << output_line << std::endl;
    }
        
    

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << t << endl;
}
