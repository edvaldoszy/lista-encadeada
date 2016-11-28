#include "list.h"

void list_add_node(List* list, Node* node) {
    if (list->size < 1) {
        list->first = node;
        list->last = node;
    } else {
        list->last->next = node;
        list->last = node;
    }
    list->size++;
}

int list_get_size(List* list) {
     return (list->size > 0 && list->first != NULL) ? list->size : 0;
}

Node* list_get_first_node(List* list) {
    if (list_get_size(list) < 1) {
        return NULL;
    }

    return list->first;
}

Node* list_get_last_node(List* list) {
    if (list_get_size(list) < 1) {
        return NULL;
    }

    return list->last;
}

Node* list_get_node(List* list, int index) {
    /**
     * Se a posicao informada e 0 retorna o
     * primeiro elemento da lista
     */
    if (index == 0) {
        return list_get_first_node(list);
    }

    /**
     * Se a posicao informada e do tamanho total da lista
     * retorna o ultimo elemento da lista
    */
    if (index == (list_get_size(list) - 1)) {
        return list_get_last_node(list);
    }

    /**
     * Se a posicao informada e maior que o tamanho
     * da lista retorna nulo
     */
    if (index > (list_get_size(list) - 1)) {
        return NULL;
    }

    Node* node = list->first;
    for (int i = 0; i < index; i++) {
        node = node->next;
    }

    return node;
}
