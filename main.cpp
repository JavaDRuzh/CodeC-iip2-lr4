#include <stdio.h>
#include <cstdlib>
#include <ctime>

struct list {
    float val;
    list *next;

};

void show(list *head) {
    list *cure = head;
    int *linkValue = (int*)malloc(sizeof(int));
    int i=0;
    while (cure != NULL) {
        printf("%f ", cure->val);
        linkValue = ((int*)&cure->val);
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


list getList(list *head, int sizeList) {
    head = NULL;
    for (int i = 0; i < sizeList; i++) {
        list *cure = new list;
        cure->val = getValue();
        cure->next = head;
        head = cure;
    }
    return *head;
}

void getLink(list *head, int sizeList,...){
    float linkValue[sizeList];
    list *cure = head;
    int i = 0;
    while (cure != NULL) {
        linkValue[i]=cure->val;
        cure = cure->next;
        i++;




    }



}

int main() {
    int sizeList = getSizeList();
    list *head;
    *head = getList(head, sizeList);
    show(head);
    //getLink(head, sizeList);

}



