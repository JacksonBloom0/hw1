/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"
#include <iostream>

using namespace std;
int main(int argc, char* argv[])
{
  Node* pointers[10];
  for (int i = 0; i < 10; i++) {
    pointers[i] = new Node(0, nullptr);
  }
  for (int i = 0; i < 9; i++) {
    pointers[i]->value = stoi(argv[i + 1]);
    pointers[i]->next = pointers[i+1];
  }
  pointers[9]->value = stoi(argv[10]);


  Node* list = pointers[0];
  Node* odds = nullptr;
  Node* evens = nullptr;
  split(list, odds, evens);
  
  Node* lists[3] = {list, odds, evens};
  char* list_names[3] = {"list", "odds", "evens"};
  for(int k = 0; k < 3; k++) {
    Node* temp = lists[k];
    std::cout << list_names[k] << ": ";
    for (int i = 0; i < 10; i++) {
      if (!temp) {
        std::cout << "nullptr" << " ";
        break;
      }
      else { 
        std::cout << temp->value << " ";
        temp = temp->next;
      }
    }
    std::cout << std::endl;
  }
}

  /*
  Node* temp = cur;
  std::cout << "in : ";
  for (int i = 0; i < 10; i++) {
    if (!temp) {
      std::cout << "nullptr" << " ";
      break;
    }
    else { 
      std::cout << temp->value << " ";
      temp = temp->next;
    }
  }
  std::cout << std::endl;
  */
