// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <stdio.h>

/*
    *
   ***
  *****
 *******
*********

*/

int main()
{
    int n = 60;
    int space = n/2;
    int star = 1;
    
    for(int i = 0; i <= n/2; i++)
    {
        for(int j = 0; j < space; j++)
        {
            printf(" ");
        }
        
        for(int k = 0; k < star; k++)
        {
            printf("*");
        }
        
        for(int l = 0; l < space; l++)
        {
            printf(" ");
        }
        printf("\n");
        
        space--;
        star += 2;
    }
    
    return 0;
}
