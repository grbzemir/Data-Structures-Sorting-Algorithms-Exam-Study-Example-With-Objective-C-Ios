#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int d[] , int n)

{
    
    int i , j;
    int temp;

    for ( i = 1 ; i < n ; i++)

    {

        temp = d[i];

        for (j = i; j > 0 && d[ j - 1 ] > temp ; j--)

        {

            // d[ j - 1 ] > temp : mevcut eleman bir önceki elemandan büyük ise bir sağa kaydırılır ve bir önceki elemanın yerine geçer

            d[j] = d[j - 1];
            
        }

        d[j] = temp;
    }

}

    int main()

    {
        
        system("color B");
    
        int dizi[10] = { 5 , 9 , 3 , 7 , 2 , 8 , 1 , 6 , 4 , 0 };

        int i;

        InsertionSort(dizi , 10);

        for(i = 0 ; i < 10 ; i++)

        {

            printf("%d " , dizi[i]);

        }

        return 0;

    }