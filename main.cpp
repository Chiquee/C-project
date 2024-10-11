#include <iostream>
using namespace std;

int num1,num2,num3;
int sum, subtract;
int main(){

    cout << "type a number:";
    cin >> num1;
    cout<< "type another number:";
    cin >> num2;
    cout << "type a number to subtract:";
    cin >> num3;

    sum = num1 + num2;
    subtract = num1 + num2- num3;

    cout << "sum is:" << sum;
    cout << "subtract is:" << subtract;

    return 0;
}
