#include <stdio.h>
  int main()
  {
    int a , b ,  c , d , n;
    int wx , xz , x;
  printf("请输入两个整数.\n"); 
  scanf("%d%d", &a,&b); 
    
    x=1;
  do{
       ++x;
	  wx=x %a;
	  xz=x %b;
	    
  	}
	 while(wx !=0 || xz !=0 );
	   
	   if(x==a*b)
	     printf("这两个数互质.");
	   else 
	     printf("这两个数不互质.");
		 
	  return 0;
}
