#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float salary;

    cin >> salary;

    if (salary <= 2000.00) {
        cout << "Isento\n";
    } else {
        int money = salary;
        float coin = salary - money;
        float taxRate, baseTax;

        if (salary > 4500.00) {
            taxRate = 0.28;
            baseTax = 350;
        } else if (salary > 3000.00) {
            taxRate = 0.18;
            baseTax = 80;
        } else {
            taxRate = 0.08;
            baseTax = 0;
        }

        cout << "R$ " << fixed << setprecision(2) << (baseTax + (money - (salary > 4500.00 ? 4500.00 : (salary > 3000.00 ? 3000.00 : 2000.00))) * taxRate) + coin * taxRate << '\n';
    }

    return 0;
}
