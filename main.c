/*
	Derek Yuen <derek.yuen@outlook.com>
    2015-12-15
    main.c
*/

#include <stdio.h>

int main()
{

	printf("hello world!\n");
	
    int many[] = {2, 4, 8};
    int sum = 0;

    for (int i=0;i<3;i++)
    {
        sum += many[i];
        printf("sum = %d\n", sum);
    }



    return 0;

    
}

