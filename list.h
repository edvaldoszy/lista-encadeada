#ifndef LIST_H
#define LIST_H

struct TNode {
    int value;
    struct TNode* next;
};
typedef struct TNode Node;

struct TList {
    int size;
    Node* first;
    Node* last;
};
typedef struct TList List;

#endif
