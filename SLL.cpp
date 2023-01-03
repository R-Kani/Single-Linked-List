#include "SLL.h"

void createList(List &L){
    first(L) = nil;
}

adr newElement(infotype dataBaru){
    adr P = new element ;
    info(P) = dataBaru;
    next(P) = nil;
    return P;
}

void insertLast(List &L, adr p){
    if(first(L) == nil) {
        first(L) = p;
    } else {
        adr q = first(L);
        while(next(q) != nil) {
            q = next(q);
        }
        next(q) = p;
    }
}


void printHasil(List L){
    if(first(L) == nil){
        cout<<"List Kosong"<<endl<<endl;
    } else {
        cout<<"Isi List : ";
        adr p = first(L);
        while (p != NULL) {
            cout<<info(p)<< " ";
            p = next(p);
        }
        cout<<endl;
    }
}

void findMax(List L){
    if(first(L) == nil){
        cout<<"List Kosong"<<endl<<endl;
    }else{
        adr Max = first(L);
        adr Temp = next(Max);

        while (Temp != nil){
            if (info(Temp) > info(Max)){
                Max = Temp;
            }
            Temp = next(Temp);
        }
        cout<<info(Max)<<endl;
    }
}

void showMiddle(List L){
    if(first(L) == nil){
        cout<<"List Kosong"<<endl<<endl;
    }else{
        int i = 0;
        adr p = first(L);

        while(p != nil){
            i++;
            p = next(p);
        }

        int tengah = i/2;
        p = first(L);

        while(tengah != 0){
            p = next(p);
            tengah--;
        }
        cout<<info(p)<<endl;
    }
}

int Menu(){
    cout<<"===== MENU ====="<<endl;
    cout<<"1. Menambah N data baru"<<endl;
    cout<<"2. Menampilkan semua data"<<endl;
    cout<<"3. Menampilkan nilai Max"<<endl;
    cout<<"4. Menampilkan nilai Middle"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"Masukkan menu: ";

    int x = 0;
    cin>>x;

    return x;
}
