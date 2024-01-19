#include<stdio.h>
#include<stdlib.h>

 // en iyi ve ortalama zaman karmaþýklýgý o(n log 2 n)
 // en kötü durumda zaman karmaþýklýgý o (n kare)
 
 void quickSort(int *A , int len)
 {
 	if(len < 2 )
 	return;
 	
 	int pivot = A[len / 2];
    int i , j ;
	
	for(i=0; j = len-1;  i++ , j--)
	
	{
		while(A[i] < pivot)
		i++;
		
		while(A[j] > pivot)
		j--;
		
		if(i>=j)
		break;
		
		int temp = A[i];
		A[i]=A[j];
		A[j]=temp;
		
    }
    
    quickSort(A,i);
    quickSort(A+i , len-i);
     	
 }
 
int main()
  
  {
  	
  	int i;
  	int dizi[10] = {10,9,8,7,6,5,4,3,2,1};
  	for(i=0;i<10;i++)
  	printf("%d-",dizi[i]);
    printf("\n");
    
    quickSort(dizi,10);
    int dizi2[10] = {11,9,8,7,6,5,4,3,2,1};
  	for(i=0;i<10;i++)
  	printf("%d-",dizi2[i]);
    printf("\n");
	
  	return 0;
  	   
  }


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
