#include <stdio.h>
#include <stdlib.h>

int main()
{
   int random[100];
   int n;
   int counter[10];
   int j;
   
   for (n = 0; n < 10; n ++){
   		counter[n] = 0;
   }
   
   int i=0;
   for ( i = 0; i < 100; i++)
   {
      random[i] = rand() % 10;
      printf("%d \n", random[i]);
      
   }
   
   printf("������ ���� �Ϸ�\n");

   for ( i = 0; i < 100; i++)
   {
      for( j = 0; j < 10; j++ ){
      	if (random [i] == j){
      		counter[j] ++;
		  }
	  }
      
   }
   
   for(j=0;j<10;j++)
   		printf("%d�� �󵵼�: %d\n",j, counter[j]);
}
