#include <stdio.h>
  int main()
  {
    int a , b ,  c , d , n;
    int wx , xz ;
  printf("请输入两个整数.\n"); 
  scanf("%d%d", &a,&b); 
    int x=1;
  do{
      x=x+1; 
	  wx=x %a;
	  xz=x %b;
	}
	 while(wx !=0 || xz !=0 );
	 printf("最小公倍数为:%d\n",x);
	  
	  return 0;
}
