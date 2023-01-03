#include "SLL.h"

using namespace std;

int main()
{
    List L;
    int pilih, x, n;
    infotype data;
    char subPilih;

    createList(L);

    pilih = Menu();

    while(pilih != 0){
        if(pilih == 1){
            cout<< "Jumlah data yang akan ditambahkan: ";
            cin>>n;

            while(n!=0){
                    cout<<"Masukkan data baru: ";
                    cin>>data;

                    insertLast(L, newElement(data));
                    n--;
            }
            cout << "Kembali ke menu utama? (Y/N) : ";
            cin >> subPilih;

            while ((subPilih != 'Y') && (subPilih != 'N')) {
            cout << "\nInvalid Input\n";
            cout << "Kembali ke menu utama? (Y/N) : ";
            cin >> subPilih;
        }

        if (subPilih == 'N') {
            break;
        }
        cout<<endl;
        }else if(pilih == 2){
            printHasil(L);
            cout<<endl;
        }else if(pilih == 3){
            findMax(L);
            cout<<endl;
        }else if(pilih == 4){
            showMiddle(L);
            cout<<endl;
        }else{
            cout<<"\nInvalid Input"<<endl;
        }

        pilih = Menu();
    }

    cout<<"\nProgram Selesai\n";
    return 0;
}
