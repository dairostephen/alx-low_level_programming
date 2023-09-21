#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> // for size_t

/* Structure for a singly linked list node */
typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

/* Function prototype to print list elements */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
