#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

void print_arrow(int leftCol, int size){
  for(int row = 0; row <= size; row++){
    int minCol = leftCol + size - row;
    int maxCol = leftCol + size + row;
    int tCol;
    for(tCol = 0; tCol < minCol; tCol++) putchar(' ');
    for(int tCol = minCol; tCol <= maxCol; tCol++ ) putchar('*');
    putchar('\n');
  }
  
  int shaftWidth = size; // with of the square
  int shaftStart = leftCol + size - (shaftWidth/2); //This centers the square part of the arrow.
    int shaftEnd = shaftStart + shaftWidth;

    
  for(int row = 0; row < size; row++){
    for(int col = 0; col < shaftStart; col++){
      putchar(' ');
    }
    for(int col = shaftStart; col < shaftEnd; col++){
      putchar('*');
    }
    putchar('\n');
  }
}
