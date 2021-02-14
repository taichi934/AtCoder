#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int a, b, c;
    string aname = "Takahashi";
    string bname = "Aoki";
    int A, B;
    cin >> a >> b >> c;
    if (c == 0)
    {
        A = a;
        B = b;
    }
    else
    {
        A = b;
        B = a;
    }

    while (1)
    {
        if ((--A) == 0)
        {
            if (c == 0)
                cout << bname << endl;
            else
                cout << aname << endl;
            break;
        }
        if ((--B) == 0)
        {
            if (c == 0)
                cout << aname << endl;
            else
                cout << bname << endl;
            break;
        }
    }

    return 0;
}