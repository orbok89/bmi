

#include <iostream>
using namespace std;
int main()
{
    float peso, altezza, bmi;
    cout << "insert weight and high ";
    cin >> peso >> altezza;
    bmi = peso / (altezza * altezza);
    if (bmi > 25) {
        cout << "grasso";
    }
    else if (bmi < 18) {
        cout << "magro";
        
    }
    else {
        cout << "in forma";
    }
    cout << bmi;
}

