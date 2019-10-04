#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc, char **argv)
{
	int a,b,rema,remb, sum=0,product=0,counta=0,countb=0,tempa,tempb;
    a= atoi(argv[1]), b=atoi(argv[2]);
    tempa=a;
    tempb=b;
    while(a>0 || b>0)
   	{
   		if(a!=0)
   		{
		   
   		
   		counta++;
   		a=a/10;
   	    }
   	    if(b!=0)
   	    {
		   
   		 
   		 countb++;
   		 b=b/10;
   	    }
	}
	if(counta!=countb)
	{
		cout<<"-1";
		return 0;
	   
	}
	
	
     while(tempa>0 && tempb>0)
     {
     	rema=tempa%10;
     	remb=tempb%10;
     	product=rema*remb;
     	sum= sum + product;
     	tempa=tempa/10;
     	tempb=tempb/10;
     	
	}
     	cout<< sum;
    
}
	
