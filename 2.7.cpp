#include <iostream>
using namespace std;
int main() 
{
    int i = 1, j = 1,n = 5;

    while (i <= n) {
        j = 1;
        while (j <= i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }


    return 0;
}

