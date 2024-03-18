#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int k = 0; k < 3; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}