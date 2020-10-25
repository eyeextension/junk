#include <iostream>
using namespace std;

void coutx(int nasobitel, char znak){//násobný výstup znaku(nasobitel x znak)
    for(int i=0; i<nasobitel; i++){
        cout<<znak;
    }
}

void patro(int prazdno, int plno){
    coutx(prazdno,' ');
    coutx(plno, 'M');
    coutx(prazdno, ' ');
    cout<<endl;
}

int main(){
    int zaklad;
    cout<<"zadejte liché číslo:";
    cin>>zaklad;
    int prazdno=zaklad/2;
    int plno=zaklad%2;
    do{
        patro(prazdno, plno);
        prazdno-=1;
        plno+=2;
    }while(plno<=zaklad);
}