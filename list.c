#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
int size(node *l) {
    int count = 0;
    node *current = l->next;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// exersice 3.c and 3.d
void printout(node *l) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out
  node *p = l->next;
  while (p != NULL) {
    printf("%d, ", p->data);
    p = p->next;
  }
  printf("\n");
}

// exersice 3.e
int largest(node *l) {
  // pre:  head poinst to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list

    int largest_value = l->next->data;
    node *current = l->next->next;

    while (current != NULL) {
        if (current->data > largest_value) {
            largest_value = current->data;
        }
        current = current->next;
    }

    return largest_value;
}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node));
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);
  add(list, 2);
  add(list, 2);

  return 0;
}

#endif
