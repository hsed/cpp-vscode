#include <iostream>

using namespace std;

int main(){
    int* intPtr = new int(123);
    cout << "Hello World" << endl;
    cout << "ptrVal: " << *intPtr << "\tptrAddr: " << intPtr << endl;

    return 0;
}