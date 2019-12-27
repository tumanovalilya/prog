#include <iostream>
using namespace std;

int main(void) {
    int sum = 0;
    int a[30];
    for(int i = 0; i < 30; i++)
    {
        cin >> a[i];
        if(a[i] < 0)
        {
            sum = sum + a[i];
        }
    }
    if(sum == 0)
    {
        cout << "no negative" << endl;
    }
    else
    {
        cout << sum << endl;
    }
    return 0;
    
}
