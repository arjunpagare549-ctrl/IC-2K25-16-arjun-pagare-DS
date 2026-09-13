//Q3 How to create 2D array//
// 2D array with initialization, push and pop
#include <iostream>
using namespace std;

int main() {
    int arr[2][5] = {
        {10, 20, 30, 40, 50},
        {60, 70, 80, 90, 100}
    };

    int stack[10];
    int top = -1;

    cout << "2D array is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Push elements into stack
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << "Stack after push: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }

    // Pop element
    cout << "\nPopped element: " << stack[top--] << endl;

    cout << "Stack after pop: ";
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }

    return 0;
}
