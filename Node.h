#ifndef NODE_H
#define NODE_H

struct Node {
public:
    int data;
    Node* next;
    Node(int value){
      data = value; 
      next = nullptr;
    }
};

#endif