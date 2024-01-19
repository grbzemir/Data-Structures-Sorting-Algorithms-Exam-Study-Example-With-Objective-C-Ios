#include<stdlib.h>
#include<stdio.h>
#define MAX_SIZE 4 

void MergeSort(int alt , int ust);

void Merge(int alt , int ust , int orta);

int dizi[MAX_SIZE] = { 5 , 9 , 3 , 7 };

int temp[MAX_SIZE];

void MergeSort(int alt , int ust )

{
    if (alt < ust)

    {

        int orta = (alt + ust) / 2;

        MergeSort(alt , orta);
        MergeSort(orta + 1 , ust);
        Merge(alt , orta  , ust);
        
    }
}


void Merge( int alt , int orta , int ust)

{
    int sol , sag , i;
    
    

    for(sol = alt  , sag = orta + 1 , i= alt ; sol <= orta && sag <= ust ; i++)

    {
        if(dizi[sol] <= dizi[sag])

           temp[i] = dizi[sol++];
        

        else

        
            temp[i] = dizi[sag++];
        
    }
    while (sol <= orta)

    
        temp[i++] = dizi[sol++];
    
    
    while (sag <= ust)

    
        temp[i++] = dizi[sag++];
    
    

    for(i = alt ; i <= ust ; i++)

    
        dizi[i] = temp[i];
    

}

int main()

{
    system("color B");

    int i;
    
	int dizi[4] = { 5 , 9 , 3 , 7 };

    MergeSort(0 , MAX_SIZE - 1);

    for(i = 0 ; i < MAX_SIZE ; i++)

    {
        printf("%d " , dizi[i]);
    }
    
    return 0;
    
}