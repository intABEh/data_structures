#pragma once

#include "includes.h"

class Node {
public:
  Node(int value);

  void print();
  void printList(const char *sep = ", ");

  Node *append(int value);
  Node *append(int value, size_t count);
  // bool delete(int value);

  Node *next();
  void setNext(Node *node);

  Node *tail();
  int value();

  void trim();

protected:
  Node *_next;
  int _value;

}; // class Node