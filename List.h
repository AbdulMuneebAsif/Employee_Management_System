//
// Created by miji-ustad on 12/16/24.
//

#ifndef LIST_H
#define LIST_H
#include "Node.h"

class List {
private:
    Node* head;
    Node* tail;

public:
    List();
    bool isEmpty();
    void insert(int, string, double);
    Node* update(int, string, double);

    Node* search(int);
    void remove(int);
    void print();

    static void title();
    void mainMenu();
    static void menuOptions();

};
#endif //LIST_H
