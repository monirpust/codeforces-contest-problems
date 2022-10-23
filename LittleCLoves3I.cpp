//43213493: Little C Loves 3 I
	#include<stdio.h>
     
    int main()
    {
        int n, x=1, y=2;
     
        scanf("%d", &n);
     
        if(n%3 == 0)
            printf("%d %d %d", x, x, n-2);
     
        else
            printf("%d %d %d", x, y, (n-3));
     
        return 0;
     
    }
