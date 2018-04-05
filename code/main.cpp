/*--------------------------------------------------
 * Calculator HP-35
 * -------------------------------------------------
 * Team: Josh Mclachlan, Johan Konigsmann, Tim Norton
 * Created on 3 April 2018, 8:08 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <sstream>
#include "HPStack.h"
using namespace std;


// Single-operand functions (such as square root) use and replace the value in the X register;

//Functions that operate on 2 values (such as the arithmetic operators) use
//the values in Y and X, with the result going back into X


//compound expression (5 + 4)/(3 - 2) like this:
//5 ENTER 4 + 3 ENTER 2 - ÷

int main(int argc, char** argv) {
    HPStack stack;
    string line;
    while (getline(cin, line)) {
        stringstream expression(line);
        string token;
        while (expression >> token) {
            if (isdigit(token[0])) {
                stack.push(atof(token.data()));
                cout<<stack.displayStack();
            } else if (token == "+") { // other arithmetic ops similar
                cout<<stack.displayStack();
                double x = stack.pop();
                double y = stack.pop();
                stack.push(y + x);
            }
        }
        cout << stack.peek();
    }
    return 0;
}

