#include <iostream>
using namespace std;

int main(){

int num;

    cout << "Enter a positive number to be multiply:";
    cin >> num;

    for (int i = 1; i <=10; i++){
    cout << num << "x" << i << "=" << num * i << endl;}
    return 0;
}
