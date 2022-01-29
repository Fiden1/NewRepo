#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Calculator
{
public:
    double calculate(char oper, double x, double y)

    {
        switch (oper)
        {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case 's':
            return sqrt(x);
        case 'p':
            return pow(x, y);
        case '%':
            return (y / 100) * x;
        default:
            return 0;
        }

    }

    string operationName(char oper)
    {
        string n = "";
        switch (oper)
        {
        case '+':
            n = "addition";
            break;
        case '-':
            n = "subtraction";
            break;
        case '*':
            n = "multiplication";
            break;
        case 's':
            n = "rooting";
            break;
        case 'p':
            n = "pi";
            break;
        case '%':
            n = "percentage of the number";
            break;
        default:
            n = "return";
            break;
        }

        return n;
    }
};
double mainResult(int result, string d) {
    if (d == "yes")
        return fabs(result);
    else {
        return result;
    }
};

int main()
{
    double x = 0.0;
    double y = 0.0;
    int result = 0.0;
    char oper = '+';
    string d = "yes";
    string n = "";

    cout << "need to use modulo values (yes ; no)" << endl;
    cin >> d;
    cout << "what operation do you want to perform(+ ; - ; * ; / ; s (sqrt); p (pow) ; % )" << endl;
    cin >> oper;
    if (d == "yes" || d == "no")
    {
        cout << "1 Number=" << endl;
        cin >> x;
        cout << "2 Number=" << endl;
        cin >> y;
        Calculator c;
        if (oper == '/' && y == 0 || x == 0 && y == 0)
        {
            cout << "division by zero exception";
        }
        else {
            result = c.calculate(x, oper, y);
            n = c.operationName(oper);
            if (d == "yes")
            {
                cout << n << "." << x << " " << oper << " " << y << "=" << mainResult(result, d) << endl;
            }
            else {
                cout << n << "." << x << oper << y << "=" << mainResult(result, d) << endl;
            }
        }
    }
    else { cout << "error: enter yes or no"; };
}