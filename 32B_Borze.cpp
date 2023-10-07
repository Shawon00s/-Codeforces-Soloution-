#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string inp,out;
    cin >> inp;

    int length=inp.size();

    for (int i=0;i<length;i++)
    {
        if(inp[i]=='.')
        {
            out=out+'0';
        }
        if(inp[i]=='-' && inp[i+1]=='.')
        {
            out=out+'1';
            ++i;
        }
        if(inp[i]=='-' && inp[i+1]=='-')
        {
            out=out+'2';
            ++i;
        }
    }
    cout << out << endl;
}
