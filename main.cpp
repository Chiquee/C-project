#include <iostream>
using namespace std;

float sum;
int num1, num2, num3, num4, num5, num6, num7, num8, num9;
int main(){

    cout << "Enter grade:";
    cin >> num1;
    cout << "Enter grade:";
    cin >> num2;
    cout << "Enter grade:";
    cin >> num3;
    cout << "Enter grade:";
    cin >> num4;
    cout << "Enter grade:";
    cin >> num5;
    cout << "Enter grade:";
    cin >> num6;
    cout << "Enter grade:";
    cin >> num7;
    cout << "Enter grade:";
    cin >> num8;

    num9 = num1+ num2+ num3+ num4+ num5+ num6+ num7+ num8;
    num9 = (num9 / 8);

    if (num9 >= 90){
     cout << num9 << " Excellent" << 90 << endl;
    }else if (num9 >= 80){
     cout << num9 << "Very Good" << 80 << endl;
    }else if (num9 >= 70){
     cout << num9 << "Good" << 70 << endl;
    }else if (num9 >= 60){
     cout << num9 << "Need Improvement" << 60 << endl;
    }else if (num9 <= 60){
     cout << num9 << "Fail" << 60 << endl;
    }
    return 0;
}
