#include <iostream>
using namespace std;

int printSum(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << printSum(a, b) << endl;

    return 0;
}