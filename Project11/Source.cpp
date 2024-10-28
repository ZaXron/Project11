#include <iostream>
#include "Queue1.h"
using namespace std;

int main() {
    Queue1 a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.print();
    while (!a.IsEmpty()) {
        cout << a.pop() << ' ';
    }
    cout << endl;
    return 0;
}