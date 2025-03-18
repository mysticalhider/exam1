// exam1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double saleammout, advancepay;
    cout << "Please enter your monthly sale ammount. " << endl;
    cin >> saleammout;
    cout << "How much advanced pay have you used?" << endl;
    cin >> advancepay;
    double commissionrate;

    if (saleammout <= 10000)
    {
        cout << "Your comission rate is 5% " << endl;
        commissionrate = .05;
    }
    else if (saleammout < 15000)
    {
        cout << "Your commission rate is 10%" << endl;
        commissionrate = .10;
    }
    else if (saleammout < 18000)
    {
        cout << "Your commission rate is 12%" << endl;
        commissionrate = .12;
    }
    else if (saleammout < 22000)
    {
        cout << "Your commission rate is 14%" << endl;
        commissionrate = .14;
    }
    else
    {
        cout << "Your commission rate is 16%" << endl;
        commissionrate = .16;
    }

    double remainingpay, totalcomision;
    totalcomision = saleammout * commissionrate;
    remainingpay = totalcomision - advancepay;

    if (remainingpay > 0)
    {
        cout << "Pay Results" << endl;
        cout << "-----------" << endl;
        cout << "Total Sales: $" << setprecision(2) << fixed << saleammout << endl;
        cout << "Commission Rate: " << (commissionrate*100) << "%" << endl;
        cout << "Advanced Pay: $" << setprecision(2) << fixed << advancepay << endl;
        cout << "Remaining Pay: $" << setprecision(2) << fixed << remainingpay << endl;
    }
    else if (remainingpay < 0)
    {
        cout << "Pay Results" << endl;
        cout << "-----------" << endl;
        cout << "Total Sales: $" << setprecision(2) << fixed << saleammout << endl;
        cout << "Commission Rate: " << (commissionrate * 100) << "%" << endl;
        cout << "Advanced Pay: $" << setprecision(2) << fixed << advancepay << endl;
        cout << "Outstanding Debt: $" << setprecision(2) << fixed << remainingpay << endl;
    }
    else if (remainingpay == 0)
    {
        cout << "Pay Results" << endl;
        cout << "-----------" << endl;
        cout << "Total Sales: $" << setprecision(2) << fixed << saleammout << endl;
        cout << "Commission Rate: " << (commissionrate * 100) << "%" << endl;
        cout << "Advanced Pay: $" << setprecision(2) << fixed << advancepay << endl;
        cout << "Remaining Pay: $" << setprecision(2) << fixed << remainingpay << endl;

        cout << "Broke Even!";
    }
    else 
    {
        cout << "MATH ERROR - Please Restart";
    }

} 