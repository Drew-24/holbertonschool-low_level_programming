#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2d array
 * @grid: parameter
 * @height: parameter
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
