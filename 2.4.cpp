#include<iostream>
using namespace std;
int main() {
    int num1, num2;
    char operator_;

    cout << "����һ������ʽ:";
    cin >> num1 >> operator_ >> num2;

    switch (operator_) {
    case '+':
        cout << "�����: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "�����: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "�����: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "��������Ϊ0��" << endl;
        }
        else {
            cout << "�����: " << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "��������Ϊ0��" << endl;
        }
        else {
            cout << "�����: " << num1 % num2 << endl;
        }
        break;
    default:
       cerr << "�Ƿ����������" << endl;
    }

    return 0;
}
