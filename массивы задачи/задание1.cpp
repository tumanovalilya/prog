#include <iostream>

using namespace std;

int main(void) {
    int a[30];
    int b = 0;
    int c = 0;
    for(int i = 0; i < 30; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i < 30; i++)
    {
        if(a[i-1] < a[i])
        {
            b++;
        }
        else
        {
            c = b;
            b = 0;
        }
    }
    if (c > b)
    {
        cout << c << endl;        
    }
    else
    {
        cout << b << endl;
    }
    return 0;
}
