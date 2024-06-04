#include <iostream>
using namespace std;

int main()
{   

    // The following initialization for array is a bad practice
    // int n, sum=0;
    // cin >> n;
    // int input[n];

    // Debugged Code
    int sum = 0;
    int input[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + input[i];
    }
    cout << sum << endl;
    return 0;
}