//
// Tomás Oliveira e Silva, AED, September 2020
//
// list all command line arguments
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc,char *argv[argc])
{
  for(int i = 0;i < argc;i++)
	  if(isdigit(*argv[i])){
	  	int num = atoi(argv[i]);
	  	printf("argv[%2d] = %d\n",i,num);

	  } else{
	  	printf("argv[%2d] = \"%s\"\n",i,argv[i]);
	  }
  return 0;
}
