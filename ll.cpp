//
// Created by lona1 on 10/31/2022.
//
#include <iostream>
#include <cstddef>
#include "ll.h"
#include "Node.h"
using namespace std;




ll::ll() {
    head=NULL;
}

ll::~ll() {

}

void ll::add(int value) {
//create a new node
    Node *new_node = new Node(value); // when should I delete this?
//assign to head
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node *temp = head;
    if (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new_node;


}



void ll::add(Node *next) {

}

void ll::insert(int value, int index) {

}

void ll::insert(int value, Node *next) {

}

int ll::get(int index) {
    return 0;
}

void ll::print() {
    Node* temp = head;

    // Check for empty list.
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }

    // Traverse the list.
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
