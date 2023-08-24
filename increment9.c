#include<stdio.h>
int main(){
int x = 001, y=010, z=100;
int i = --x + y++ - z-- - --z + ++y - --x + y-- - --x;

printf("%d\n%d\n%d\n%d\n",x,y,z,i);

}
