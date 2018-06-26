#include <stdio.h>
#include <stdlib.h>


#define ROW_SIZE 4
#define COL_SIZE 4
#define DEBUG 

int maxIncreaseKeepingSkyline(int** grid, int gridRowSize, int gridColSizes);

int main(void) {

  int grid[ROW_SIZE][COL_SIZE] = { {3, 0, 8, 4},
                                   {2, 4, 5, 7},
                                   {9, 2, 6, 3},
                                   {0, 3, 1, 0} };
                                   
  int gridNew[ROW_SIZE][COL_SIZE] = {0};
  
  int *row_maxes = (int *)calloc(ROW_SIZE, sizeof(int));
  int *col_maxes = (int *)calloc(COL_SIZE, sizeof(int));
  
  for(int row = 0; row < ROW_SIZE; row++){
    for(int col = 0; col < COL_SIZE; col++){
      if(row_maxes[col] < grid[row][col]){
        row_maxes[col] = grid[row][col];
      }
    }
  }
  
  for(int col = 0; col < COL_SIZE; col++){
    for(int row = 0; row < ROW_SIZE; row++){
      if(col_maxes[row] < grid[row][col]){
        col_maxes[row] = grid[row][col];
      }
    }
  }
  
  int ans = 0;
  
  for(int col = 0; col < COL_SIZE; col++){
    for(int row = 0; row < ROW_SIZE; row++){
      if(row_maxes[col] < col_maxes[row])
        ans += (row_maxes[col] - grid[row][col]);
      else
        ans += (col_maxes[row] - grid[row][col]);
      
    }
  }

  printf("%d\n", ans);
  
  //maxIncreaseKeepingSkyline((int **)grid, ROW_SIZE, COL_SIZE);
  
  return 0;
}

int maxIncreaseKeepingSkyline(int** grid, int gridRowSize, int gridColSizes) {
    
}