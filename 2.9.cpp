#include <iostream>
using namespace std;
int main() {
    const double applePrice = 0.8;  
    const int maxApples = 100;      

    int totalApples = 2;  
    double totalCost = totalApples * applePrice;  

    int day = 2;  
    while (totalApples * 2 <= maxApples) {
        int dailyApples = totalApples * 2;  
        totalApples += dailyApples;         
        totalCost += dailyApples * applePrice;  
        day++; 
    }

    double averageCost = totalCost / day;  

    cout << "ÿ��ƽ�����ѣ�" << averageCost << " Ԫ" << endl;

    return 0;
}
