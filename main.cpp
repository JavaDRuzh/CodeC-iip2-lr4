#include <stdio.h>
#include <cstdlib>
#include <ctime>

struct list
{
    float val;

    list *head;
    list *cure;
    list *next;
    list *prev;
};

void show(list *head){
    list *cure = head;
    while (cure != NULL){
        printf("%f ", cure -> val);
        cure = cure -> next;
    }
    printf("\n");
}

int getSizeArr() {
    int sizeArr;
    printf("How many structures to add: ");
    scanf("%d", &sizeArr);
    return sizeArr;
}

int main() {
    int N = getSizeArr();
    list *head;
    head ->val = 1;
    list *cure = head;
    for (int i = 0; i < N; i++){
        cure -> val =i*0.5;
        cure = cure -> next;
    }
    show(head);
    return 0;
}