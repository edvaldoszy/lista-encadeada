#include <stdio.h>
#include "list.c"

int main(int argc, char *argv[]) {

    Node node1;
    node1.value = 100;
    Node node2;
    node2.value = 101;
    Node node3;
    node3.value = 102;
    Node node4;
    node4.value = 103;
    Node node5;
    node5.value = 104;

    List list;
    list.size = 0;
    printf("List size: %d\n", list.size);
    list_add_node(&list, &node1);
    list_add_node(&list, &node2);
    list_add_node(&list, &node3);
    list_add_node(&list, &node4);
    list_add_node(&list, &node5);
    printf("List size: %d\n", list_get_size(&list));

    int index = 3;
    Node* n = list_get_node(&list, index);
    if (n != NULL) {
        printf("Valor node %d: %d\n", index, n->value);
    } else {
        printf("Nao retornou elemento\n");
    }

    printf("Edvaldo Szymonek\n");
    return 0;
}
