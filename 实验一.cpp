#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //1
    int k = 1, u = k + 1;
    cout << u++ << endl;
    int i = 1;
    cout << i++ << endl;
    cout << "Welcome to C++" << endl;
    //2
    cout << "Բ׶�׵İ뾶�� ";
    double r;
    cin >> r;

    cout << "Բ׶�ĸ߶ȣ� ";
    double h;
    cin >> h;


    const double pi = 3.141592;
    double v = (1.0 / 3) * pi * r * r * h;


    cout << "Բ׶�����Ϊ�� " << v << endl;
    //3

    cout << "char length:" << sizeof(char) << endl;
    cout << "int length:" << sizeof(int) << endl;
    //4
    unsigned int testUnint = 65534;
    cout << "output in unsigned int 1 type:" << testUnint << endl;
    cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
    cout << "output in short type:" << static_cast<short>(testUnint) << endl;
    cout << "output in int type:" << static_cast<int>(testUnint) << endl;
    cout << "output in double type:" << static_cast<double>(testUnint) << endl;
    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
    system("pause");
    double testUnint_1 = 123.456;
    int number = static_cast<int>(testUnint_1);
    cout << "��8�������: " << number << endl;

    //5
    double fahrenheit, celsius;
    cout << "���뻪���¶�: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    cout << "�����¶�Ϊ: " << fixed << setprecision(2) << celsius << " ��" << endl;

    return 0;




}