#include<iostream>
using namespace std;
int main()
{
    double side1, side2, side3;
    double perimeter;
    bool isIsosceles = false;

    cout << "���������ε�������: ";
    cin >> side1 >> side2 >> side3;

    perimeter = side1 + side2 + side3;

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        cout << "����һ��������" << endl;
        cout << "�ܳ�Ϊ: " << perimeter << endl;
        if (isIsosceles) {
            cout << "�ⲻ��һ������������" << endl;
        }
        else {
            cout << "����һ������������" << endl;
        }
    }
    else {
        cout << "���������޷�����������" << endl;
    }

    if (side1 == side2 || side1 == side3 || side2 == side3) {
        isIsosceles = true;
    }
    return 0;
}
