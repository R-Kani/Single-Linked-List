#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(P) ((L).first)
#define nil NULL

typedef int infotype;
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void createList(List &L);
adr newElement(infotype dataBaru);
void insertLast(List &L, adr p);
void printHasil(List L);

void findMax(List L);
void showMiddle(List L);
int Menu();


#endif // SLL_H_INCLUDED
