#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string getCompressedString(string &input)
{
    string s = "";
    for(int i=0; i<input.size(); i++)
    {
        int count=1;
        for(int j=i; j<input.size() && input[j]==input[j+1]; j++)
        {
            count++;
            i++;
        }
        if (count == 1) {
          cout << input[i];
        }
        if (count >= 2) {
          cout << input[i] << count;
        }
    }
    return s;
}

int main() 
{
    int size = 1e6;
    string str;
    cout<<"Enter String : ";
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}