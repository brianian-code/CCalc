
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter value for x, y, and operator (Add, Sub, Mul, Div): ";
    double x;
    double y;
    string op;
    cin >> x >> y >> op;
    if (op == "Add") {
        cout << x + y;
    }
    if (op == "Sub") {
        cout << x - y;
    }
    if (op == "Mul") {
        cout << x * y;
    }
    if (op == "Div") {
        cout << x / y;
    }
    cout << "\n";
    return 0;
    
}

