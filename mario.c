#include <cs50.h>
#include <stdio.h>

int GetPositiveInt();
int main(void)
{
   int h;
   
   do {
       printf("hight");
       h = GetInt();
       
       
    } while (h <0 || h >23);
    
    
    	for(int i = 0; i < h; i++) 
	{
		
        for(int j = 0; j < h-i-1; j++)
        {
            printf("%s", " ");
        }
        
		for(int k = 0; k < i+2; k++)
		{
			printf("#");
		}
		printf("\n");
	}	
	return 0;
}
