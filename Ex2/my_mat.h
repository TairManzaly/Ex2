#include <stdio.h>
#include <stdbool.h>
#define V 10
typedef int MAT[V][V];

void matrix();
bool path_excist(MAT A, int i, int j);
int shortest_path(MAT A, int i, int j); 