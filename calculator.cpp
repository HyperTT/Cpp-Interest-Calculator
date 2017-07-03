#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float principle, intrest_rate, interest, total;
    cout << "== One Year Interest Calculator ==\n" << "Enter principal followed by interest rate. e.g. 13500.23 5.3\n";
    cin >> principle >> intrest_rate;
    intrest_rate /= 100;
    cout << fixed;
    cout << setprecision(2);
    interest = principle * intrest_rate;
    total = principle + interest;
    cout << "Interest earned: $" << interest << endl;
    cout << "Ending balance: $" << total << endl;
    cout << "Big money!\n";
    return 0;
}
