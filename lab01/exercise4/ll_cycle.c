#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
        if (head == NULL) {
        return 0; // The list is empty, hence acyclic
    }
    node *slow_ptr = head;
    node *fast_ptr = head;

    while (fast_ptr != NULL && fast_ptr->next != NULL) { // A LINKED LIST HAVING SINGLE NODE THE PROGRAM WILL RETURN 0 
        slow_ptr = slow_ptr->next;             // Move slow by 1
        fast_ptr = fast_ptr->next->next;       // Move fast by 2

        if (slow_ptr == fast_ptr) {
            return 1;  // Cycle detected
        }
    }

    return 0;  // No cycle
}


