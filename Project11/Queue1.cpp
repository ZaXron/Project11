#include "Queue1.h"
#include <iostream>
using namespace std;

Queue1::Queue1() : size(0), stor(10) {
    data = new int[stor];
}

Queue1::~Queue1() {
    delete[] data;
}

int Queue1::pop() {
    if (IsEmpty()) {
        cout << "Queue is empty!";
    }

    int result = data[0];
    for (int i = 0; i < size - 1; i++) {
        data[i] = data[i + 1];
    }
    size -= 1;
    return result;
}

int Queue1::top() {
    if (IsEmpty()) {
        cout << "Queue is empty!";
    }
    return data[0];
}

//void Queue1::push(int value) {
//    if (IsFull()) {
//        resize();
//    }
//    data[size] = value;
//    size += 1;
//}
//bool Queue1::IsEmpty() {
//    size = 0;
//    return size;
//
//}
//bool Queue1::IsFull() {
//    size == stor;
//    return size;
//}

void Queue1::resize() {
    stor *= 2;
    int* newData = new int[stor];
    for (int i = 0; i < size; i++) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
}
void Queue1::print() {
    if (IsEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        cout << data[i] << ' ';
    }
    cout << endl;
}
