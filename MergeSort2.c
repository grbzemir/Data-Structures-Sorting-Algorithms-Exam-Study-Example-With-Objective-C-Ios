#include<stdio.h>
#include<stdlib.h>

void Merge( int alt , int orta , int ust)

{
    int sol , sag , i;

    for(sol = alt  , sag = orta + 1 , i= alt ; sol <= orta && sag <= ust ; i++)

    {
        if(d[sol] <= d[sag])

        {
            temp[i] = d[sol++];
        }

        else

        {
            temp[i] = d[sag++];
        }
    }
    while (sol <= orta)

    {
        temp[i++] = d[sol++];
    }
    
    while (sag <= ust)

    {
        temp[i++] = d[sag++];
    }
    

    for(i = alt ; i <= ust ; i++)

    {
        d[i] = temp[i];
    }

}

int main()

{
    system("color B");

    int i;

    MergeSort(0 , MAX_SIZE - 1);

    for(i = 0 ; i < MAX_SIZE ; i++)

    {
        printf("%d " , dizi[i]);
    }
    
    return 0;
    
}