/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"
#include <iostream>
/* Add a prototype for a helper function here if you need */
void split(Node*& in, Node*& odds, Node*& evens)
{
  Node* cur = in;
  in = nullptr;

  if (cur == nullptr) {
    return;
  }
  if (cur->value % 2 == 0) { // even
    split(cur->next, odds, evens);
    insert_at_val(evens, cur);
  }
  else { // odd
    split(cur->next, odds, evens);
    insert_at_val(odds, cur);
  }
}

void insert_at_val(Node*& n, Node*& p) {
  if (n == nullptr) { // set head node
    n = p;
    p->next = nullptr;
    return;
  }
  if (n->value > p->value) { // insert at front
    p->next = n;
    n = p;
    return;
  }
  if (n->next == nullptr) { // insert at end
    n->next = p;
    p->next = nullptr;
    return;
  }
  if (n->next->value > p->value) { // insert at middle
    Node* temp_next = n->next;
    n->next = p;
    p->next = temp_next;
    return;
  }
  
  return insert_at_val(n->next, p);
}
