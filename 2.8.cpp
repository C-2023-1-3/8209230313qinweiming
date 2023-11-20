#include <iostream>
#include <cmath>
using namespace std;
double sqrt_iteration(double a) {
 
    if (a < 0) {
        cout << "�������Ϊ�Ǹ���" << endl;
        return -1.0; 
    }

    
    double xn = a;

    
    while (true) {
        double xn1 = 0.5 * (xn + a / xn);  
        if (abs(xn1 - xn) < 1e-5) {   
            return xn1;
        }
        xn = xn1;
    }
}

int main() {
    double a;
    cout << "������һ���Ǹ��� a��";
    cin >> a;

    double result = sqrt_iteration(a);

    if (result != -1.0) {
        cout << a << " ��ƽ����Ϊ��" << result << endl;
    }

    return 0;
}
