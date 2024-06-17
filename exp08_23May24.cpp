/*
 * Let's access struct elements through struct's address and using square brackets - subscript operator!
 */

#include <iostream>
using namespace std;

struct fraction {
    int num;
    int denom;
};

int main() {
    fraction pi;
    pi.num = 22;
    pi.denom = 7;
    cout << (&pi)[0].denom << endl;
    cout << (&pi) -> denom << endl;
    cout << (((fraction*)(&pi.num)) + 8) -> denom << endl;
    return 0;
}