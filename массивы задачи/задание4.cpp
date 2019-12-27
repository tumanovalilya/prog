#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
    srand(time(0));
    int random_valuable = rand();
    int a[30];
    int min = 100;
    for(int i = 0; i < 30; i++)
    {
        a[i] = rand() % 101;
    }
    for(int i = 0; i < 30; i++)
    {
        if(a[i] > 20)
        {
            if(a[i] < min)
            {
                min = a[i];
            }
        }
    }
    cout << min << endl;
    return 0;
}
