#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void PrintTXT(char* fname)
{
    ifstream fin(fname);
    string s;
    while (getline(fin, s))
    {
        cout << s << endl;
    }
    cout << endl;
}
int ProcessTXT1(char* fname)
{
    ifstream fin(fname);
    string s;
    int k = 0;
    while (getline(fin, s))
    {
        for (unsigned i = 0; i < s.length(); i++)
            if (s[i] == ',' && s[i+1] == '-')
                k++;
    }
    return k;
}
int main()
{
    char fname[100];
    cout << " file name : "; cin >> fname;
    PrintTXT(fname);
    cout << "number of symbols :  " << ProcessTXT1(fname) << endl;
    return 0;
}
