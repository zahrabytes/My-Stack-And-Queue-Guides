#ifndef STACK_H
#define STACK_H

#include "Node.h"

class Stack {
public:
  Stack(){ top = nullptr; }

  // Push a value onto the stack
  void push(int value) {
    Node *newNode = new Node(value);
    newNode->next = top;
    top = newNode;
  }
  // Pop and return the top element from the stack
  int pop() {
    if (isEmpty()) {
      return -1;
    }
    Node *poppedNode = top;
    int poppedValue = poppedNode->data;
    top = top->next;
    delete poppedNode;
    return poppedValue;
  }

  // Return the top element without removing it
  int peek(){ // could also be defined as  "top"
    return top->data; 
  }

  // Check if the stack is empty
  bool isEmpty(){ 
    return top == nullptr; 
  }

private:
  Node *top;
};

#endif