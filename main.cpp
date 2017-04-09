#include <stdio.h>
#include <cstdlib>
#include <ctime>

struct list {
    float val;
    list *next;

};

void show(list *head, int sizeList) {
    list *cure = head;
    //int *linkValue = (int*)malloc(sizeof(int));
    float *linkValue[sizeList];
    float **pp = linkValue;
    int i=0;
    while (cure != NULL) {
        printf("%f ", cure->val);
        linkValue[i] = (&cure->val);
        cure = cure->next;
        printf("%f\n", *pp[i]);
        i++;
    }
    printf("\n");
    for (int j = 0; j<sizeList;j++){
        printf("%f\n", *linkValue[j]);
    }

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

int main() {
    int sizeList = getSizeList();
    list *head;
    *head = getList(head, sizeList);
    show(head, sizeList);
    //getLink(head, sizeList);

}



