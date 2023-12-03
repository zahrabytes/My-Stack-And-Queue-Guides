#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class Queue {
public:
    Queue(){
      front = nullptr;
      back = nullptr;
    }

    // Enqueue (add) an element to the back of the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = newNode;
            back = newNode;
        } else {
            back->next = newNode; 
            back = newNode;
        }
    }

    int peek(){
      return front->data;
    }

    // Dequeue (remove) and return the front element from the queue
    int dequeue() { 
      if (isEmpty()) {
            return -1; 
        }
        Node* dequeuedNode = front;
        int dequeuedValue = dequeuedNode->data; 
        front = front->next;
        delete dequeuedNode; 
        return dequeuedValue;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

private:
    Node* front;
    Node* back;
};

#endif