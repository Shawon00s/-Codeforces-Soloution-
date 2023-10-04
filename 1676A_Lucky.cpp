#include <iostream>
using namespace std;

int main()
{
    int t=0;
    cin >> t;

    while(t--)
    {
        string inp;
        cin >> inp;

        if((inp[0]+inp[1]+inp[2])==((inp[3])+inp[4]+inp[5]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
