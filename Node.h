//
// Created by miji-ustad on 12/16/24.
//

#ifndef NODE_H
#define NODE_H
#include <string>
using namespace std;
class Node {
private:
    int id;
    string name;
    double salary;
    Node* next;

public:
    // =========================== Constructors ===========================
    Node();
    Node(int id, string name, double salary);

    // =========================== Getters ===========================
    int getId();
    string getName();
    double getSalary();
    Node* getNext();

    // =========================== Getters ===========================
    void setNext(Node* next);
    void setId(int id);
    void setName(string name);
    void setSalary(double salary);
};
#endif //NODE_H
