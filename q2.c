#include<stdio.h>
int main(){
	int c,b,n,t;
printf("enter");
	while((c=getchar())!=EOF){
		if(c==' ')
		b++;
		else if (c=='\n')
		n++;
		else if (c=='\t')
		t++;
		}
		
    printf("Number of blank spaces: %d tabs: %d new lines: %d",b,t,n);
    
    return 0;
	}
