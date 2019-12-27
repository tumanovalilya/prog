#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
    srand(time(0));
    int random_valuable = rand();
    int a[30];
    double nechetnoe = 0;
    int b = 0;
    for(int i = 0; i < 30; i++)
    {
        a[i] = rand() % 1001;
    }
    for(int i = 0; i < 30; i++)
    {
        if(a[i] % 2 != 0)
        {
            nechetnoe = nechetnoe + a[i];
            b = b + 1;
        }
    }
    nechetnoe = nechetnoe / b;
    cout << nechetnoe << endl;
    return 0
}
