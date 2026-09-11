#include <iostream>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Add an element
    void enqueue(int x) {
        if (rear == 4) {
            cout << "Queue is full\n";
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = x;
    }

    // Remove an element
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Removed: " << arr[front] << endl;
        front++;
    }

    // Display queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}
