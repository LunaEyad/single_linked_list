//
// Created by lona1 on 10/31/2022.
//

#ifndef MAIN_CPP_LL_H
#define MAIN_CPP_LL_H
#include "Node.h"

class ll {
private:
    Node* head;
    int size=0;
    Node* tail;
public:
    ll();

    virtual ~ll();
    // Function to insert a
    // node at the end of the
    // linked list.
    void add (int value);// ina l7 create el node w waslha be akher wahed
    void add (Node* next);// bs l7 waslha

    void insert (int value, int index);
    void insert (int value, Node* next);
   // void swap(Node node1,  Node node2);
    int get(int index);
    //Node find(int value);
    void print();
};


#endif //MAIN_CPP_LL_H
