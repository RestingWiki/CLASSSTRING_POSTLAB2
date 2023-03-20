#include <iostream>
#include <string>

using namespace std;


void reverse(string& s,int left, int right);

int main() {
    // TODO
    string s1,s2,s3;
    string repeat = "";
    s1 = "bababdcacac";
    
    int base_length = s1.length();
    while (base_length >= 1)
    {

        for (int i = 0; i <= s1.length() - base_length; i++)
        {
            s2 = s1.substr( i, base_length);
            s3 = s2;
            reverse(s3,0,s3.length()-1);

            //cout << "S3 " << s3 << endl;
            //cout << "S2 " << s2 << endl;

            if (s2 == s3 && s2.length() > repeat.length())
            {
                repeat = s2;
            }

        }
        base_length--;
    }

    cout << repeat;
    
}

void reverse(string& s, int left, int right) {

    if (left >= right)
        return;
    else
    {
        char temp = s.at(left);
        s[left] = s[right];
        s[right] = temp;
        //cout << 1 << endl;
        reverse(s,++left,--right);
    }

}



