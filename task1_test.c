#include <stdio.h>

int main(){
int x;
int y;
int z;
int* w;
int* q;

x = 0;
y = 1;
z = 2;
w = &x;
q = &y;
*w = y;
*q = z;

*w = x + y + z + *q;
*q = x + y + z + *w;

printf("x=%d, y=%d, z=%d\n", x, y, z);
}