#include<stdio.h>

main()

{
	char name[] ="hello  world";
	int i;
	
	for(i=0;i<12;i++)
	{
		printf("%c",name[i]-32);
	}
			
}