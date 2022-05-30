#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 8;
  
    // false && false = false
    cout << ((a == 0) || (a > b)) << endl;
  
    // false && true = true
    cout << ((a == 0) || (a < b)) << endl;

    // true && false = true
    cout << ((a == 4) || (a > b)) << endl;

    // true && true = true
    cout << ((a == 8) || (a < b)) << endl;

    return 0;
}