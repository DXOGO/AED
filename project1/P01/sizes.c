#include <stdio.h>
#include "sizes.h"
void print_sizes(void)
{
printf("sizeof(void *) ...... %d\n",(int)sizeof(void *)); // size of any pointer
printf("sizeof(void) ........ %d\n",(int)sizeof(void));
printf("sizeof(char) ........ %d\n",(int)sizeof(char));
printf("sizeof(short) ....... %d\n",(int)sizeof(short));
printf("sizeof(int) ......... %d\n",(int)sizeof(int));
printf("sizeof(long) ........ %d\n",(int)sizeof(long));
printf("sizeof(long long) ... %d\n",(int)sizeof(long long));
printf("sizeof(float) ....... %d\n",(int)sizeof(float));
printf("sizeof(double) ...... %d\n",(int)sizeof(double));
}