//
// Created by lona1 on 10/31/2022.
//

#ifndef MAIN_CPP_NODE_H
#define MAIN_CPP_NODE_H
struct Node {
    int data;
    Node *next;
//parametrized constructor
    Node(int data, Node* next=nullptr) : data(data), next(next) {}
//    this->data = data;
//    this->next = next;
Node() {

    }
};
#endif //MAIN_CPP_NODE_H
