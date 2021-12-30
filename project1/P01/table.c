#include <math.h>
#include <stdio.h>

void do_it(int N)
{
	FILE *f = fopen("table.txt", "w");     //open table.txt and 'w'rite

	fprintf(f,"n              sin(n)\n");
	fprintf(f, "-- -----------------\n");

    	for(int i = 0;i <= N; i++){
        	fprintf(f, "%2d %17.15f\n",i,sin((double)i * (M_PI/180.0)));
    	}
	fprintf(f, "-- -----------------\n");
	fclose(f);
}

int main(void){
    do_it(90);
    return 0;
}
