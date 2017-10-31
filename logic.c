#include <stdio.h>
#include <math.h>

int main(){


	int p[] = {1,1,0,0};
	int q[] = {1,0,1,0};
	int AND[] = {};

	// for AND
	printf("Output for AND gate: ");

	for (int i = 0 ; i<5 ; i++){

		if (p[i] == 1 && q[i] == 1){

			AND[i] = 1;
		}

		else if (p[i] == 0 || q[i] == 0){
			AND[i] = 0;
		}

		else {
			break;
		}

		printf("%d, ",AND[i]);
	}
}