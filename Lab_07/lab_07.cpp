#include <iostream>
using namespace std;

class Queue {
    int queue[5];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == 4) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1)
                front = 0;

            rear++;
            queue[rear] = value;
            cout << value << " inserted" << endl;
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
        } else {
            cout << queue[front] << " deleted" << endl;
            front++;
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
        } else {
            for (int i = front; i <= rear; i++)
                cout << queue[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue: ";
    q.display();

    q.dequeue();

    cout << "Queue after dequeue: ";
    q.display();

    return 0;
}
