#include <stdio.h>
#include "connect4_engine.h"
#include "CuTest.h"

#define EMPTY -1
#define NO_WINNER_YET -1

void ct_initialize(int num_rows, int num_cols, int array[num_rows][num_cols]) {
  int r, c;
  for (r = 0; r < num_rows; r++) {
    for (c = 0; c < num_cols; c++) {
      array[r][c] = EMPTY;
    }
  }
}

/*******************************************************************************************
 *
 * Test winner function
 *
 * Note: This is just a sample of how you can test your own winner
 * function.  You may need to modify this code depending on how your
 * organized your array.  I will not be testing your winner function
 * directly.
 *
 * Note:  Be sure to add tests for different directions, quadrants, and board sizes.
 *
 ******************************************************************************************/


void winner_horizontal_1(CuTest *tc) {

  int num_rows = 7;
  int num_columns = 7;
  int array[num_rows][num_columns];
  int answer;
  ct_initialize(num_rows, num_columns, array);

  array[0][0] = 0;
  array[0][1] = 0;
  array[0][2] = 0;
  array[0][3] = 0;

  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "0s in row 0", 0, answer);
}

void winner_horizontal_2(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[1][0] = 0;
    array[1][1] = 0;
    array[1][2] = 0;
    array[1][3] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in row 1", 0, answer);
}

void winner_horizontal_3(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[4][0] = 0;
    array[4][1] = 0;
    array[4][2] = 0;
    array[4][3] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in row 4", 0, answer);
}

void winner_horizontal_4(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[6][0] = 0;
    array[6][1] = 0;
    array[6][2] = 0;
    array[6][3] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in row 6", 0, answer);
}

void winner_horizontal_5(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][3] = 0;
    array[0][4] = 0;
    array[0][5] = 0;
    array[0][6] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in row 0", 0, answer);
}

void winner_horizontal_6(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[1][3] = 0;
    array[1][4] = 0;
    array[1][5] = 0;
    array[1][6] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in row 1", 0, answer);
}

void winner_horizontal_7(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[4][3] = 0;
    array[4][4] = 0;
    array[4][5] = 0;
    array[4][6] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in row 4", 0, answer);
}

void winner_horizontal_8(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[6][3] = 0;
    array[6][4] = 0;
    array[6][5] = 0;
    array[6][6] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in row 6", 0, answer);
}

void winner_horizontal_9(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[6][3] = 0;
    array[6][4] = 0;
    array[6][5] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in row 6", 0, answer);
}

void winner_horizontal_10(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][3] = 0;
    array[3][4] = 0;
    array[3][5] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in row 3", 0, answer);
}

void winner_horizontal_11(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[1][3] = 0;
    array[1][4] = 0;
    array[1][5] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in row 1", 0, answer);
}

void winner_horizontal_12(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][1] = 0;
    array[0][2] = 0;
    array[0][3] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in row 0", 0, answer);
}

void winner_horizontal_13(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[6][3] = 0;
    array[6][4] = 0;
    array[6][5] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in row 6", 0, answer);
}

void winner_horizontal_14(CuTest *tc) {
    
    int num_rows = 15;
    int num_columns = 15;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[6][3] = 0;
    array[6][4] = 0;
    array[6][5] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in row 6", 0, answer);
}

void winner_horizontal_15(CuTest *tc) {
    
    int num_rows = 15;
    int num_columns = 15;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[6][3] = 0;
    array[6][4] = 0;
    array[6][5] = 0;
    array[6][6] = 0;
    array[6][7] = 0;
    
    answer = winner(num_rows, num_columns, 5, array);
    CuAssertIntEquals_Msg(tc, "0s in row 6", 0, answer);
}

void winner_horizontal_16(CuTest *tc) {
    
    int num_rows = 15;
    int num_columns = 15;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[12][3] = 0;
    array[12][4] = 0;
    array[12][5] = 0;
    array[12][6] = 0;
    array[12][7] = 0;
    array[12][8] = 0;
    array[12][9] = 0;
    array[12][10] = 0;
    array[12][11] = 0;
    
    answer = winner(num_rows, num_columns, 9, array);
    CuAssertIntEquals_Msg(tc, "0s in row 12", 0, answer);
}

//************************************************************//
//           tests for vertical wins                          //
//************************************************************//
void winner_vertical_1(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][0] = 0;
    array[1][0] = 0;
    array[2][0] = 0;
    array[3][0] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in column 0", 0, answer);
}

void winner_vertical_2(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][1] = 0;
    array[1][1] = 0;
    array[2][1] = 0;
    array[3][1] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in column 1", 0, answer);
}

void winner_vertical_3(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][4] = 0;
    array[1][4] = 0;
    array[2][4] = 0;
    array[3][4] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in column 4", 0, answer);
}

void winner_vertical_4(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][6] = 0;
    array[1][6] = 0;
    array[2][6] = 0;
    array[3][6] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in column 6", 0, answer);
}

void winner_vertical_5(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][0] = 0;
    array[4][0] = 0;
    array[5][0] = 0;
    array[6][0] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in column 0", 0, answer);
}

void winner_vertical_6(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][1] = 0;
    array[4][1] = 0;
    array[5][1] = 0;
    array[6][1] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in column 1", 0, answer);
}

void winner_vertical_7(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][4] = 0;
    array[4][4] = 0;
    array[5][4] = 0;
    array[6][4] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in column 4", 0, answer);
}

void winner_vertical_8(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][6] = 0;
    array[4][6] = 0;
    array[5][6] = 0;
    array[6][6] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "0s in column 6", 0, answer);
}

void winner_vertical_9(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][6] = 0;
    array[4][6] = 0;
    array[5][6] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in column 6", 0, answer);
}

void winner_vertical_10(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][3] = 0;
    array[4][3] = 0;
    array[5][3] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in column 3", 0, answer);
}

void winner_vertical_11(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][1] = 0;
    array[4][1] = 0;
    array[5][1] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in column 1", 0, answer);
}

void winner_vertical_12(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[1][0] = 0;
    array[2][0] = 0;
    array[3][0] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in column 0", 0, answer);
}

void winner_vertical_13(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[1][6] = 0;
    array[2][6] = 0;
    array[3][6] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in column 6", 0, answer);
}

void winner_vertical_14(CuTest *tc) {
    
    int num_rows = 15;
    int num_columns = 15;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][6] = 0;
    array[4][6] = 0;
    array[5][6] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "0s in column 6", 0, answer);
}

void winner_vertical_15(CuTest *tc) {
    
    int num_rows = 15;
    int num_columns = 15;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][6] = 0;
    array[4][6] = 0;
    array[5][6] = 0;
    array[6][6] = 0;
    array[7][6] = 0;
    
    answer = winner(num_rows, num_columns, 5, array);
    CuAssertIntEquals_Msg(tc, "0s in column 6", 0, answer);
}

void winner_vertical_16(CuTest *tc) {
    
    int num_rows = 15;
    int num_columns = 15;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[2][12] = 0;
    array[3][12] = 0;
    array[4][12] = 0;
    array[5][12] = 0;
    array[6][12] = 0;
    array[7][12] = 0;
    array[8][12] = 0;
    array[9][12] = 0;
    array[10][12] = 0;
    
    answer = winner(num_rows, num_columns, 9, array);
    CuAssertIntEquals_Msg(tc, "0s in column 12", 0, answer);
}

//************************************************************//
//           tests for Diagonal wins                          //
//************************************************************//
void winner_diagonal_1(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][0] = 0;
    array[1][1] = 0;
    array[2][2] = 0;
    array[3][3] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 1", 0, answer);
}

void winner_diagonal_2(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][3] = 0;
    array[1][4] = 0;
    array[2][5] = 0;
    array[3][6] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 2", 0, answer);
}

void winner_diagonal_3(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][2] = 0;
    array[1][3] = 0;
    array[2][4] = 0;
    array[3][5] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 3", 0, answer);
}

void winner_diagonal_4(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][1] = 0;
    array[1][2] = 0;
    array[2][3] = 0;
    array[3][4] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 4", 0, answer);
}

void winner_diagonal_5(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][0] = 0;
    array[4][1] = 0;
    array[5][2] = 0;
    array[6][3] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 5", 0, answer);
}

void winner_diagonal_6(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][1] = 0;
    array[4][2] = 0;
    array[5][3] = 0;
    array[6][4] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 6", 0, answer);
}

void winner_diagonal_7(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][2] = 0;
    array[4][3] = 0;
    array[5][4] = 0;
    array[6][5] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 7", 0, answer);
}

void winner_diagonal_8(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][3] = 0;
    array[4][4] = 0;
    array[5][5] = 0;
    array[6][6] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 8", 0, answer);
}

void winner_diagonal_9(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][3] = 0;
    array[1][2] = 0;
    array[2][1] = 0;
    array[3][0] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 9", 0, answer);
}

void winner_diagonal_10(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][4] = 0;
    array[1][3] = 0;
    array[2][2] = 0;
    array[3][1] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 10", 0, answer);
}

void winner_diagonal_11(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][5] = 0;
    array[1][4] = 0;
    array[2][3] = 0;
    array[3][2] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 11", 0, answer);
}

void winner_diagonal_12(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[0][6] = 0;
    array[1][5] = 0;
    array[2][4] = 0;
    array[3][3] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 12", 0, answer);
}

void winner_diagonal_13(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][3] = 0;
    array[4][2] = 0;
    array[5][1] = 0;
    array[6][0] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 13", 0, answer);
}

void winner_diagonal_14(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][4] = 0;
    array[4][3] = 0;
    array[5][2] = 0;
    array[6][1] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 14", 0, answer);
}

void winner_diagonal_15(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][5] = 0;
    array[4][4] = 0;
    array[5][3] = 0;
    array[6][2] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 15", 0, answer);
}

void winner_diagonal_16(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][6] = 0;
    array[4][5] = 0;
    array[5][4] = 0;
    array[6][3] = 0;
    
    answer = winner(num_rows, num_columns, 4, array);
    CuAssertIntEquals_Msg(tc, "diagonal 16", 0, answer);
}

void winner_diagonal_17(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][2] = 0;
    array[4][3] = 0;
    array[5][4] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "diagonal 17", 0, answer);
}

void winner_diagonal_18(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][6] = 0;
    array[4][5] = 0;
    array[5][4] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "diagonal 18", 0, answer);
}

void winner_diagonal_19(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][0] = 0;
    array[4][1] = 0;
    array[5][2] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "diagonal 19", 0, answer);
}

void winner_diagonal_20(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[1][2] = 0;
    array[2][1] = 0;
    array[3][0] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "diagonal 20", 0, answer);
}

void winner_diagonal_21(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[1][4] = 0;
    array[2][5] = 0;
    array[3][6] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "diagonal 21", 0, answer);
}

void winner_diagonal_22(CuTest *tc) {
    
    int num_rows = 15;
    int num_columns = 15;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[1][5] = 0;
    array[2][4] = 0;
    array[3][3] = 0;
    
    answer = winner(num_rows, num_columns, 3, array);
    CuAssertIntEquals_Msg(tc, "diagonal 22", 0, answer);
}

void winner_diagonal_23(CuTest *tc) {
    
    int num_rows = 15;
    int num_columns = 15;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[3][6] = 0;
    array[4][5] = 0;
    array[5][4] = 0;
    array[6][3] = 0;
    array[7][2] = 0;
    
    answer = winner(num_rows, num_columns, 5, array);
    CuAssertIntEquals_Msg(tc, "diagonal 23", 0, answer);
}

void winner_diagonal_24(CuTest *tc) {
    
    int num_rows = 15;
    int num_columns = 15;
    int array[num_rows][num_columns];
    int answer;
    ct_initialize(num_rows, num_columns, array);
    
    array[2][1] = 0;
    array[3][2] = 0;
    array[4][3] = 0;
    array[5][4] = 0;
    array[6][5] = 0;
    array[7][6] = 0;
    array[8][7] = 0;
    array[9][8] = 0;
    array[10][9] = 0;
    
    answer = winner(num_rows, num_columns, 9, array);
    CuAssertIntEquals_Msg(tc, "diagonal 24", 0, answer);
}

/*******************************************************************************************
 *
 * Test place_token function
 *
 * Note: This is just a sample of how you can test your own
 * place_token function.  You may need to modify this code depending
 * on how your organized your array.  I will not be testing your
 * place_token function directly.
 *
 * Note:  Be sure to add tests for different directions, quadrants, and board sizes.
 *
 ******************************************************************************************/

// test putting 1 token in column 3
void place_token_c3(CuTest *tc) {

  int num_rows = 7;
  int num_columns = 7;
  int array[num_rows][num_columns];
  ct_initialize(num_rows, num_columns, array);

  place_token(1, 3, num_rows, num_columns, array);

  // make sure there is a 1 at the bottom of column 3 and a -1 everywhere else
    
  CuAssertIntEquals_Msg(tc, "Drop 1 into empty column 3", 1, array[num_rows-1][3]);
  int r, c;
  for (r = 0; r < num_rows; r++) {
    for (c = 0; c < num_columns; c++) {
      if (r != (num_rows -1) || c != 3) {
	CuAssertIntEquals_Msg(tc, "Should be empty", EMPTY, array[r][c]);
      }
    }
  }
}

//test putting 1 token in column 6
void place_token_c6(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    ct_initialize(num_rows, num_columns, array);
    
    place_token(1, 6, num_rows, num_columns, array);
    
    // make sure there is a 1 at the bottom of column 6 and a -1 everywhere else
    
    CuAssertIntEquals_Msg(tc, "Drop 1 into empty column 3", 1, array[num_rows-1][6]);
    int r, c;
    for (r = 0; r < num_rows; r++) {
        for (c = 0; c < num_columns; c++) {
            if (r != (num_rows -1) || c != 6) {
                CuAssertIntEquals_Msg(tc, "Should be empty", EMPTY, array[r][c]);
            }
        }
    }
}

// test putting 2 tokens in column 4
void place_token_c4x2(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    ct_initialize(num_rows, num_columns, array);
    
    place_token(1, 4, num_rows, num_columns, array);
    place_token(1, 4, num_rows, num_columns, array);
    
    // make sure there is a 1 at the bottom of column 4 and the space above it
    // and a -1 everywhere else
    
    CuAssertIntEquals_Msg(tc, "Drop 1 into empty column 4", 1, array[num_rows-1][4]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 4 with 1 token already in column", 1, array[num_rows-2][4]);
    int r, c;
    for (r = 0; r < num_rows; r++) {
        for (c = 0; c < num_columns; c++) {
            if ((r != (num_rows-1) && r != (num_rows-2)) || c != 4) {
                CuAssertIntEquals_Msg(tc, "Should be empty", EMPTY, array[r][c]);
            }
        }
    }
}

// test putting 3 tokens in column 2
void place_token_c2x3(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    ct_initialize(num_rows, num_columns, array);
    
    place_token(1, 2, num_rows, num_columns, array);
    place_token(1, 2, num_rows, num_columns, array);
    place_token(1, 2, num_rows, num_columns, array);
    
    // make sure there is a 1 at the bottom of column 2 and the two spaces
    // above it and a -1 everywhere else
    
    CuAssertIntEquals_Msg(tc, "Drop 1 into empty column 2", 1, array[num_rows-1][2]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 2 with 1 token already in column", 1, array[num_rows-2][2]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 2 with 2 tokens already in column", 1, array[num_rows-3][2]);
    int r, c;
    for (r = 0; r < num_rows; r++) {
        for (c = 0; c < num_columns; c++) {
            if ((r != (num_rows-1) && c != 2) ||
                (r != (num_rows-2) && c != 2) ||
                (r != (num_rows-3) && c != 2)) {
                CuAssertIntEquals_Msg(tc, "Should be empty", EMPTY, array[r][c]);
            }
        }
    }
}

// test putting 7 tokens in column 3
void place_token_c3x7(CuTest *tc) {
    
    int num_rows = 7;
    int num_columns = 7;
    int array[num_rows][num_columns];
    ct_initialize(num_rows, num_columns, array);
    
    place_token(1, 3, num_rows, num_columns, array);
    place_token(1, 3, num_rows, num_columns, array);
    place_token(1, 3, num_rows, num_columns, array);
    place_token(1, 3, num_rows, num_columns, array);
    place_token(1, 3, num_rows, num_columns, array);
    place_token(1, 3, num_rows, num_columns, array);
    place_token(1, 3, num_rows, num_columns, array);
    
    // make sure there is a 1 at the bottom of column 3 and all the spaces
    // above it and a -1 everywhere else
    CuAssertIntEquals_Msg(tc, "Drop 1 into empty column 2", 1, array[num_rows-1][3]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 3 with 1 token already in column", 1, array[num_rows-2][3]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 3 with 2 tokens already in column", 1, array[num_rows-3][3]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 3 with 3 tokens already in column", 1, array[num_rows-4][3]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 3 with 4 tokens already in column", 1, array[num_rows-5][3]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 3 with 5 tokens already in column", 1, array[num_rows-6][3]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 3 with 6 tokens already in column", 1, array[num_rows-7][3]);
    int r, c;
    for (r = 0; r < num_rows; r++) {
        for (c = 0; c < num_columns; c++) {
            if (c != 3){
                CuAssertIntEquals_Msg(tc, "Should be empty", EMPTY, array[r][c]);
            }
        }
    }
}

// now to do some testing with diferent board sizes

// test putting 1 token in column 3 with larger board
void place_token_c3lb(CuTest *tc) {
    
    int num_rows = 12;
    int num_columns = 12;
    int array[num_rows][num_columns];
    ct_initialize(num_rows, num_columns, array);
    
    place_token(1, 3, num_rows, num_columns, array);
    
    // make sure there is a 1 at the bottom of column 3 and a -1 everywhere else
    
    CuAssertIntEquals_Msg(tc, "Drop 1 into empty column 3", 1, array[num_rows-1][3]);
    int r, c;
    for (r = 0; r < num_rows; r++) {
        for (c = 0; c < num_columns; c++) {
            if (r != (num_rows -1) || c != 3) {
                CuAssertIntEquals_Msg(tc, "Should be empty", EMPTY, array[r][c]);
            }
        }
    }
}

// test putting 1 token in column 6 with larger board
void place_token_c6lb(CuTest *tc) {
    
    int num_rows = 13;
    int num_columns = 13;
    int array[num_rows][num_columns];
    ct_initialize(num_rows, num_columns, array);
    
    place_token(1, 6, num_rows, num_columns, array);
    
    // make sure there is a 1 at the bottom of column 6 and a -1 everywhere else
    
    CuAssertIntEquals_Msg(tc, "Drop 1 into empty column 6", 1, array[num_rows-1][6]);
    int r, c;
    for (r = 0; r < num_rows; r++) {
        for (c = 0; c < num_columns; c++) {
            if (r != (num_rows -1) || c != 6) {
                CuAssertIntEquals_Msg(tc, "Should be empty", EMPTY, array[r][c]);
            }
        }
    }
}

// test putting 2 token in column 4 with larger board
void place_token_c4x2sb(CuTest *tc) {
    
    int num_rows = 5;
    int num_columns = 5;
    int array[num_rows][num_columns];
    ct_initialize(num_rows, num_columns, array);
    
    place_token(1, 4, num_rows, num_columns, array);
    place_token(1, 4, num_rows, num_columns, array);
    
    // make sure there is a 1 at the bottom of column 4 and the space above it
    // and a -1 everywhere else
    
    CuAssertIntEquals_Msg(tc, "Drop 1 into empty column 4", 1, array[num_rows-1][4]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 4 with 1 token already in column", 1, array[num_rows-2][4]);
    int r, c;
    for (r = 0; r < num_rows; r++) {
        for (c = 0; c < num_columns; c++) {
            if ((r != (num_rows-1) && r != (num_rows-2)) || c != 4) {
                CuAssertIntEquals_Msg(tc, "Should be empty", EMPTY, array[r][c]);
            }
        }
    }
}

// test putting 15 token in column 16 with larger board
void place_token_c16x15lb(CuTest *tc) {
    
    int num_rows = 20;
    int num_columns = 20;
    int array[num_rows][num_columns];
    ct_initialize(num_rows, num_columns, array);
    
    for (int i = 0; i < 15; i ++){
        place_token(1, 16, num_rows, num_columns, array);
    }
    
    // make sure there is a 1 at the bottom of column 15 and the 14 spaces
    // above it and a -1 everywhere else
    
    CuAssertIntEquals_Msg(tc, "Drop 1 into empty column 16", 1, array[num_rows-1][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 1 tokens already in column", 1, array[num_rows-2][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 2 tokens already in column", 1, array[num_rows-3][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 3 tokens already in column", 1, array[num_rows-4][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 4 tokens already in column", 1, array[num_rows-5][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 5 tokens already in column", 1, array[num_rows-6][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 6 tokens already in column", 1, array[num_rows-7][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 7 tokens already in column", 1, array[num_rows-8][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 8 tokens already in column", 1, array[num_rows-9][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 9 tokens already in column", 1, array[num_rows-10][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 10 tokens already in column", 1, array[num_rows-11][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 11 tokens already in column", 1, array[num_rows-12][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 12 tokens already in column", 1, array[num_rows-13][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 13 tokens already in column", 1, array[num_rows-14][16]);
    CuAssertIntEquals_Msg(tc, "Drop 1 into column 16 with 15 tokens already in column", 1, array[num_rows-15][16]);
    
    int r, c;
    for (r = 0; r < num_rows; r++) {
        for (c = 0; c < num_columns; c++) {
            if ((r != (num_rows-1) && c != 16) ||
                (r != (num_rows-2) && c != 16) ||
                (r != (num_rows-3) && c != 16) ||
                (r != (num_rows-4) && c != 16) ||
                (r != (num_rows-5) && c != 16) ||
                (r != (num_rows-6) && c != 16) ||
                (r != (num_rows-7) && c != 16) ||
                (r != (num_rows-8) && c != 16) ||
                (r != (num_rows-9) && c != 16) ||
                (r != (num_rows-10) && c != 16) ||
                (r != (num_rows-11) && c != 16) ||
                (r != (num_rows-12) && c != 16) ||
                (r != (num_rows-13) && c != 16) ||
                (r != (num_rows-14) && c != 16)) {
                
                CuAssertIntEquals_Msg(tc, "Should be empty", EMPTY, array[r][c]);
            }
        }
    }
}

// test that fills entire board with tokens for a small board
void place_token_fullBoardsb(CuTest *tc) {
    
    int num_rows = 4;
    int num_columns = 4;
    int array[num_rows][num_columns];
    ct_initialize(num_rows, num_columns, array);
    
    for (int i = 0; i < num_rows; i++){
        for (int x = 0; x < num_columns; x++){
            place_token(1, i, num_rows, num_columns, array);
        }
    }
    int r, c;
    for (r = 0; r < num_rows; r++) {
        for (c = 0; c < num_columns; c++) {
            CuAssertIntEquals_Msg(tc, "Should be 1", 1, array[r][c]);
        }
    }
}

// test that fills entire board with tokens for a large board
void place_token_fullBoardlb(CuTest *tc) {
    
    int num_rows = 21;
    int num_columns = 21;
    int array[num_rows][num_columns];
    ct_initialize(num_rows, num_columns, array);
    
    for (int i = 0; i < num_rows; i++){
        for (int x = 0; x < num_columns; x++){
            place_token(1, i, num_rows, num_columns, array);
        }
    }
    int r, c;
    for (r = 0; r < num_rows; r++) {
        for (c = 0; c < num_columns; c++) {
            CuAssertIntEquals_Msg(tc, "Should be 1", 1, array[r][c]);
        }
    }
}

/*******************************************************************************************
 *
 * Test overall game play
 *
 * These tests below demonstrate how I will be testing your game.
 * These tests below should run wihtout modification.  If they don't
 * then something in your design conflicts with the tests and we need
 * to figure out what it is.  Make sure you find any such conflicts
 * and work with me to resole them well before the assignment due
 * date.
 *
 * Because they test the interaction between several methods, these
 * tests below are not technically "unit" tests.  If your tests for
 * your connect4_engine functions are thorough, you need not add many
 * tests to this section.
 *
 ******************************************************************************************/

void horizontal_row0(CuTest* tc) 
{
  int num_rows = 7;
  int num_columns = 7;
  int array[num_rows][num_columns];
  int answer;
  ct_initialize(num_rows, num_columns, array);

  place_token(0, 0, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Single 0 in column 0", NO_WINNER_YET, answer);

  place_token(0, 1, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "0s in columns {0,1}", NO_WINNER_YET, answer);


  place_token(0, 2, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "0s in columns {0,1, 2}", NO_WINNER_YET, answer);


  place_token(0, 3, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "4 in a row, horizontal", 0, answer);
}


void vertical_column1(CuTest* tc) 
{
  int num_rows = 7;
  int num_columns = 7;
  int array[num_rows][num_columns];
  int answer;
  ct_initialize(num_rows, num_columns, array);

  place_token(0, 1, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Single 0 in column 1", NO_WINNER_YET, answer);

  place_token(0, 1, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Two 0s in column 1", NO_WINNER_YET, answer);


  place_token(0, 1, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Three 0s in column 1", NO_WINNER_YET, answer);


  place_token(0, 1, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "4 in a row, vertical", 0, answer);
}

void forward_diagonal(CuTest* tc) 
{
 /*
    . . . . . . .
    . . . . . . .
    . . . . . . .
    . . . 0 . . .
    . . . 1 0 . .
    . . . 0 0 0 .
    1 . . 1 1 1 0
  */ 

  int num_rows = 7;
  int num_columns = 7;
  int array[num_rows][num_columns];
  int answer;
  ct_initialize(num_rows, num_columns, array);

  /* column 6*/
  place_token(0, 6, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 1", NO_WINNER_YET, answer);

  /* column 5*/
  place_token(1, 5, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 2", NO_WINNER_YET, answer);

  place_token(0, 5, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 3", NO_WINNER_YET, answer);


  /* column 4*/
  place_token(1, 4, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 4", NO_WINNER_YET, answer);

  place_token(0, 4, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 5", NO_WINNER_YET, answer);

  place_token(1, 1, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 6", NO_WINNER_YET, answer);

  place_token(0, 4, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 7", NO_WINNER_YET, answer);

 /* column 3 */
  place_token(1, 3, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 8", NO_WINNER_YET, answer);

  place_token(0, 3, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 9", NO_WINNER_YET, answer);

  place_token(1, 3, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 10", NO_WINNER_YET, answer);

  place_token(0, 3, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 11 -- Winner!", 0, answer);
}


void backward_diagonal(CuTest* tc) 
{
 /*
    . . . . . . .
    . . . . . . .
    . . . . . . .
    . . . 0 . . .
    . . 0 1 . . .
    . 0 0 0 . . .
    0 1 1 1 . 1 .
  */ 

  int num_rows = 7;
  int num_columns = 7;
  int array[num_rows][num_columns];
  int answer;
  ct_initialize(num_rows, num_columns, array);

  /* column 0*/
  place_token(0, 0, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 1", NO_WINNER_YET, answer);

  /* column 1*/
  place_token(1, 1, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 2", NO_WINNER_YET, answer);

  place_token(0, 1, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 3", NO_WINNER_YET, answer);


  /* column 2*/
  place_token(1, 2, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 4", NO_WINNER_YET, answer);

  place_token(0, 2, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 5", NO_WINNER_YET, answer);

  place_token(1, 5, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 6", NO_WINNER_YET, answer);

  place_token(0, 2, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 7", NO_WINNER_YET, answer);

 /* column 3 */
  place_token(1, 3, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 8", NO_WINNER_YET, answer);

  place_token(0, 3, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 9", NO_WINNER_YET, answer);

  place_token(1, 3, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 10", NO_WINNER_YET, answer);

  place_token(0, 3, num_rows, num_columns, array);
  answer = winner(num_rows, num_columns, 4, array);
  CuAssertIntEquals_Msg(tc, "Step 11 -- Winner!", 0, answer);
}



/*  setup */

CuSuite* c4_engine_suite() {
    CuSuite* suite = CuSuiteNew();

    SUITE_ADD_TEST(suite, winner_horizontal_1);
    SUITE_ADD_TEST(suite, winner_horizontal_2);
    SUITE_ADD_TEST(suite, winner_horizontal_3);
    SUITE_ADD_TEST(suite, winner_horizontal_4);
    SUITE_ADD_TEST(suite, winner_horizontal_5);
    SUITE_ADD_TEST(suite, winner_horizontal_6);
    SUITE_ADD_TEST(suite, winner_horizontal_7);
    SUITE_ADD_TEST(suite, winner_horizontal_8);
    SUITE_ADD_TEST(suite, winner_horizontal_9);
    SUITE_ADD_TEST(suite, winner_horizontal_10);
    SUITE_ADD_TEST(suite, winner_horizontal_11);
    SUITE_ADD_TEST(suite, winner_horizontal_12);
    SUITE_ADD_TEST(suite, winner_horizontal_13);
    SUITE_ADD_TEST(suite, winner_horizontal_14);
    SUITE_ADD_TEST(suite, winner_horizontal_15);
    SUITE_ADD_TEST(suite, winner_horizontal_16);
    SUITE_ADD_TEST(suite, winner_vertical_1);
    SUITE_ADD_TEST(suite, winner_vertical_2);
    SUITE_ADD_TEST(suite, winner_vertical_3);
    SUITE_ADD_TEST(suite, winner_vertical_4);
    SUITE_ADD_TEST(suite, winner_vertical_5);
    SUITE_ADD_TEST(suite, winner_vertical_6);
    SUITE_ADD_TEST(suite, winner_vertical_7);
    SUITE_ADD_TEST(suite, winner_vertical_8);
    SUITE_ADD_TEST(suite, winner_vertical_9);
    SUITE_ADD_TEST(suite, winner_vertical_10);
    SUITE_ADD_TEST(suite, winner_vertical_11);
    SUITE_ADD_TEST(suite, winner_vertical_12);
    SUITE_ADD_TEST(suite, winner_vertical_13);
    SUITE_ADD_TEST(suite, winner_vertical_14);
    SUITE_ADD_TEST(suite, winner_vertical_15);
    SUITE_ADD_TEST(suite, winner_vertical_16);
    SUITE_ADD_TEST(suite, winner_diagonal_1);
    SUITE_ADD_TEST(suite, winner_diagonal_2);
    SUITE_ADD_TEST(suite, winner_diagonal_3);
    SUITE_ADD_TEST(suite, winner_diagonal_4);
    SUITE_ADD_TEST(suite, winner_diagonal_5);
    SUITE_ADD_TEST(suite, winner_diagonal_6);
    SUITE_ADD_TEST(suite, winner_diagonal_7);
    SUITE_ADD_TEST(suite, winner_diagonal_8);
    SUITE_ADD_TEST(suite, winner_diagonal_9);
    SUITE_ADD_TEST(suite, winner_diagonal_10);
    SUITE_ADD_TEST(suite, winner_diagonal_11);
    SUITE_ADD_TEST(suite, winner_diagonal_12);
    SUITE_ADD_TEST(suite, winner_diagonal_13);
    SUITE_ADD_TEST(suite, winner_diagonal_14);
    SUITE_ADD_TEST(suite, winner_diagonal_15);
    SUITE_ADD_TEST(suite, winner_diagonal_16);
    SUITE_ADD_TEST(suite, winner_diagonal_17);
    SUITE_ADD_TEST(suite, winner_diagonal_18);
    SUITE_ADD_TEST(suite, winner_diagonal_19);
    SUITE_ADD_TEST(suite, winner_diagonal_20);
    SUITE_ADD_TEST(suite, winner_diagonal_21);
    SUITE_ADD_TEST(suite, winner_diagonal_22);
    SUITE_ADD_TEST(suite, winner_diagonal_23);
    SUITE_ADD_TEST(suite, winner_diagonal_24);
    SUITE_ADD_TEST(suite, place_token_c3);
    SUITE_ADD_TEST(suite, place_token_c6);
    SUITE_ADD_TEST(suite, place_token_c4x2);
    SUITE_ADD_TEST(suite, place_token_c2x3);
    SUITE_ADD_TEST(suite, place_token_c3x7);
    SUITE_ADD_TEST(suite, place_token_c3lb);
    SUITE_ADD_TEST(suite, place_token_c6lb);
    SUITE_ADD_TEST(suite, place_token_c4x2sb);
    SUITE_ADD_TEST(suite, place_token_c16x15lb);
    SUITE_ADD_TEST(suite, place_token_fullBoardsb);
    SUITE_ADD_TEST(suite, place_token_fullBoardlb);

    SUITE_ADD_TEST(suite, horizontal_row0);
    SUITE_ADD_TEST(suite, vertical_column1);
    SUITE_ADD_TEST(suite, forward_diagonal);
    SUITE_ADD_TEST(suite, backward_diagonal);
    return suite;
}


void RunC4Tests(void) {
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();

    CuSuiteAddSuite(suite, c4_engine_suite());
    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
}

int main(void) {
    RunC4Tests();
    return 0;
}
