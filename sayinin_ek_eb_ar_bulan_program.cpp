#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    long double sayi, enb=0, enk=0, sa=0;
    int i=1;
    cout<<"Lutfen"<<i<<". sayiyi giriniz.";
    cin>>sayi;
    if(sayi>-1){
        enk=sayi;
        i++;
       while (true)
       {
            cout<<"Lutfen"<<i<<". sayiyi giriniz.";
            cin>>sayi;
            if(sayi<0)break;
            sa=sa+sayi;
            i++;
            if(sayi>enb){
                enb=sayi;
            }
            if(sayi<enk){
                enk=sayi;
            }
        }
    }
    i--;
    cout<<"En buyuk sayi: "<<enb<<"/n"<<"En kucuk sayi: "<<enk<<"/n"<<"Girilen sayilarin aritmetik ortalamasi: "<<sa/i<<"/n";
    return 0;
}
/*
ALGORİTMASI
basla
Double türünde sayi enb enk sa değişkeni ata
İnt türünde i değişkenş ata
Kullanıcıdan 1.sayı girişi iste
Sayı girişini sayi değişkenine ata
eğer sayi değişkeni > -1 ise A19 a git
enk = sayi 
İ yi bir arttır
Kullanıcıdan i + 1 inci sayı girişini iste
Sayıyı sayi değişkeni içerisine ata
eğer sayi < 0 dan ise döngüyü kır ve A19 a git
sa = sa + sayi
İ yi bir arttır
eğer sayi > enb ise
enb değişkeninin içerisine sayi değişkenini ata
eğer sayi < enk ise
enk değişkeninin içerisine sayi değişkenini ata
A9 a GİT
döngüyü bir azalt
Ekrana enb enk sa/i yazdir
bitir
*/