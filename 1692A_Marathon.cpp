#include <iostream>
using namespace std;

int main()
{
    long long int a,b,c,d,t;

    cin  >> t;
    while(t--)
    {
        cin >> a  >> b >> c  >> d;
        int solve= (b>a)+(c>a)+(d>a);

        cout << solve << endl;
    }
}
