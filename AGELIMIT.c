#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y,A;
	    scanf("%d",&X);
	    scanf("%d",&Y);
	    scanf("%d",&A);
	    if(X <= A && A < Y)
	    {
	        printf("Yes \n");
	        
	    }
	    else
	    {
	        printf("No \n");
	    }
	    
	}
}

