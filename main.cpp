/**
 * Разработать функцию с переменным числом параметров. Для извлечения параметров из списка использовать операцию преобразования типа указателя.
 * Последовательность указателей на вещественные переменные, ограниченная NULL. Функция возвращает динамический  массив указателей на эти переменныe.
 */

#include <stdio.h>
#include <cstdlib>
#include <ctime>

struct list { // list
    float val;
    list *next;
};

// get index from list
float **getArray(list *head, int sizeList, ...) { //function with a variable number of parameters :)
    list *cure = head; // get index head

    float **pp, *p;
    pp = new float *[sizeList]; //indexes array
    int i = 0;
    for (i = 0; i < sizeList; i++) {
        p = new float;
        *p = cure->val;
        pp[i] = p;
        cure = cure->next;
    }
    pp[i] = NULL;
    return pp;
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

void printArr(int sizeList, float **pp) {
    for (int j = 0; j < sizeList; j++) {
        printf("Value[%d] = %.2f\t$\n", j, *pp[j]);
    }
}

int main() {
    int sizeList = getSizeList();
    list *head;
    *head = getList(head, sizeList); //list
    float **pp = getArray(head, sizeList); //idexes array
    printArr(sizeList, pp);
}



