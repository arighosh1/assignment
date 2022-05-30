#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 8;
  
    // false && false = false
    cout << ((a == 0) && (a > b)) << endl;
  
    // false && true = false
    cout << ((a == 0) && (a < b)) << endl;

    // true && false = false
    cout << ((a == 4) && (a > b)) << endl;

    // true && true = true
    cout << ((a == 4) && (a < b)) << endl;

    return 0;
}