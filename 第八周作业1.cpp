#include<stdio.h>
int main(){
	int a,b,c,d,m;
	scanf("%d",&a);
	printf("旅行社有%d人\n",a);
	scanf("%d",&b);
	printf("会英语%d人\n",b);
	scanf("%d",&c);
	printf("会俄语%d人\n",c);
	scanf("%d",&d);
	printf("两样都不会有%d人\n",d); 
	
	m=(b+c)-(a-d);
	if (m>=0,a>d) 
	printf("两样都会有%d人",m);
	else 
	printf("输入数据错误,无法计算");
	
	return 0; 
	
}
