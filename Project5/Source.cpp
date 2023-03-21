#include <iostream>
#include <string>

using namespace std;


bool uniqueString(string& s);

int main() {
    // TODO
    string s = "abcabcbb";


    // cin >> s;
    int longest = 0;
    int  base_length = s.length();


    // Check every possible sub-string from longest to shortest
    while (base_length >= 1)
    {
        // Stop the loop once max length has reached
        if (base_length < longest)
            break;

        // Check if each substr is speacial
        for (int i = 0; i <= s.length() - base_length; i++)
        {
            string s2 = s.substr(i, base_length);
            if (uniqueString(s2))
                longest = s2.length();

        }
        base_length--;
    }



    cout << longest << endl;

}
bool uniqueString(string& s) {
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s.at(i) == s.at(j))
                return false;
        }
    }


    return true;
}

