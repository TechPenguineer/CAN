#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (strcmp(argv[0],"install")==0)
    {
        
    }

    if (strcmp(argv[1],"parse")==0)
    {
        int x;
        for(x=0;x<argc;x++)
        {
            printf("Argument #%i: %s\n", x, argv[x]);
        }
    }
    
}