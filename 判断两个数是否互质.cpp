#include <stdio.h>
  int main()
  {
    int a , b ,  c , d , n;
    int wx , xz , x;
  printf("��������������.\n"); 
  scanf("%d%d", &a,&b); 
    
    x=1;
  do{
       ++x;
	  wx=x %a;
	  xz=x %b;
	    
  	}
	 while(wx !=0 || xz !=0 );
	   
	   if(x==a*b)
	     printf("������������.");
	   else 
	     printf("��������������.");
		 
	  return 0;
}
