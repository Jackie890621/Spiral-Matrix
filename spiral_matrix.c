#include <stdio.h>

int main()
{
	int order, square_order;
	int i = 0, j = 0, inc = 1;
        int SpiralMatrix[100][100] = {0};
	scanf("%d", &order);
	square_order = order * order;
	while (inc <= square_order) {
		/* go right */
		while ((i < order) && (j < order) && (SpiralMatrix[i][j] == 0)) {
			SpiralMatrix[i][j] = inc;
			inc++;
			j++;
		}
		j--;
		i++;
		/* go down */
		while ((i < order) && (j < order) && (SpiralMatrix[i][j] == 0)) {
			SpiralMatrix[i][j] = inc;
			inc++;
			i++;
		}
		i--;
		j--;
		/* go left */
		while ((j >= 0) && (j < order) && (SpiralMatrix[i][j] == 0)) {
			SpiralMatrix[i][j] = inc;
			inc++;
			j--;
		}
		j++;
		i--;
		/* go up */
		while ((i > 0) && (i < order) && (SpiralMatrix[i][j] == 0)) {
			SpiralMatrix[i][j] = inc;
			inc++;
			i--;
			//printf("SpiralMatrix[%d][%d]=%d\n", i+1, j, SpiralMatrix[i+1][j]);
		}
		i++;
		j++;
	}
	for (i = 0; i < order; i++) {
		for (j = 0; j < order; j++) {
			printf("%4d", SpiralMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
			

