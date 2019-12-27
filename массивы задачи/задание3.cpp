#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
    srand(time(0));
    int random_valuable = rand();
    int a[10][10];
    int max = 0;
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            a[i][j] = rand() % 1001;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        sum = sum + max;
        max = 0;
    }
    cout << sum << endl;
    return 0;
}
