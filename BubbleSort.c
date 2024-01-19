#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void BubleSort(int d[] , int n) 

 // int d[] dizimiz , int n dizimizin eleman sayısı

{

    bool durum = false;

    int temp; // geçici değişken
    int i , j; // döngüde kullanılcak değişkenler

    for (i = 0; (i < n - 1) && !durum; i++)
    {

        durum = true;

    for(j = n - 1 ; j > i ; j--)

    {

        if(d[j-1] > d[j])

         {

            temp = d[j];
            d[j] = d[j-1];
            d[j-1] = temp;
            durum = false;

         }

    }

    }

}

    int main()

    {
        
        system("color B");
    
        int dizi[10] = { 5 , 9 , 3 , 7 , 2 , 8 , 1 , 6 , 4 , 0 };

        int i;

        BubleSort(dizi , 10);

        for(i = 0 ; i < 10 ; i++)

        {

            printf("%d " , dizi[i]);

        }

        return 0;

    }
