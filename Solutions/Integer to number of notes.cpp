// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    int fiveThousand = 0;
    int oneThousand = 0;
    int fiveHundred = 0;
    int oneHundred = 0;
    int fifty = 0;
    cout << "Please Enter Number greater then 50 :: ";
    cin >> num;
    if (num < 50)
    {
        cout << "invalid number" << endl;
    }

    while (num > 5000)
    {
        num = num - 5000;
        fiveThousand++;
    }

    while (num >= 1000 && num < 5000)
    {
        num = num - 1000;
        oneThousand++;
    }

    while (num >= 500 && num < 1000)
    {
        num = num - 500;
        fiveHundred++;
    }

    while (num >= 100 && num < 500)
    {
        num = num - 100;
        oneHundred++;
    }

    while (num >= 50 && num < 100)
    {
        num = num - 50;
        fifty++;
    }

    cout << "5k Notes :: " << fiveThousand << endl;
    cout << "1k Notes :: " << oneThousand << endl;
    cout << "500 Notes :: " << fiveHundred << endl;
    cout << "100 Notes :: " << oneHundred << endl;
    cout << "50 Notes :: " << fifty << endl;
    cout << "******************************" << endl;
    cout << "available amount :: " << num << endl;

    return 0;
}