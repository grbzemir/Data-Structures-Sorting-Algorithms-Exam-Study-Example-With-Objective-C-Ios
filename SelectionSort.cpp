#include<stdio.h>
#include<stdlib.h>

// tüm durumlarda zaman karmaþýklýðý o(n kare)

 void SelectionSort(int *dizi , int uzunluk)
 {
 	int i , j , yedek , enkucuk;
 	
 	for(i=0;i<uzunluk-1;i++)
 	
 	{
 		
 		enkucuk=i;
 		for(j=i+1;j<uzunluk;j++)
 		
 		 if(dizi[j] < dizi[enkucuk])
 		 
 		 enkucuk=j;
 		 
 		 if(enkucuk !=i)
 		 
 		 {
 		 	yedek=dizi[i];
 		 	dizi[i]=dizi[enkucuk];
 		 	dizi[enkucuk]=yedek;
 		 	
		  }
	 }
	
 }
 
 int main()
  
  {
  	
  	int i;
  	int dizi[10] = {10,9,8,7,6,5,4,3,2,1};
  	for(i=0;i<10;i++)
  	printf("%d-",dizi[i]);
    printf("\n");
    
    SelectionSort(dizi,10);
    int dizi2[10] = {11,9,8,7,6,5,4,3,2,1};
  	for(i=0;i<10;i++)
  	printf("%d-",dizi2[i]);
    printf("\n");
	
  	return 0;
  	   
  }


 
 
 
 
 
 
 
 
 
 
 
