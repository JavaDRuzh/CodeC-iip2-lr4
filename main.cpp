#include <stdio.h>
#include <cstdlib>
#include <ctime>

struct list {
    float val;
    list *next;

};

void show(list *head) {
    list *cure = head;
    while (cure != NULL) {
        printf("%f ", cure->val);
        cure = cure->next;
    }
    printf("\n");
}


float getValue() {
    float val;
    printf("Enter float value: ");
    scanf("%f", &val);
    return val;
}

int getSizeList() {
    int sizeList;
    printf("Enter size list: ");
    scanf("%d", &sizeList);
    return sizeList;
}


void getList(list *head, int sizeList) {
    head = NULL;
    for (int i = 0; i < sizeList; i++) {
        list *cure = new list;
        cure->val = getValue();
        cure->next = head;
        head = cure;
    }
}


int main() {
    list *head;
    int sizeList = getSizeList();
    getList(head, sizeList);
    show(head);
}



