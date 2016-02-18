//
//  connect4_engine.c
//  connect4
//
//  Created by Diego Ruiz on 2/17/16.
//  Copyright (c) 2016 Diego Ruiz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// called to display a visual representation of the
// connect 4 board on the terminal. Displays a 1 for
// player 1 and a 2 for player 2.
void displayBoard(int sizeBoard, int array[][sizeBoard]){
    
    putchar('\n');
    
    for (int i = 0; i <sizeBoard; i++){
        for (int n = 0; n < sizeBoard; n++){
            if (array[i][n] == -1){
                putchar('*');
                putchar(' ');
                putchar(' ');
            }
            else if (array[i][n] == 0){
                putchar('1');
                putchar(' ');
                putchar(' ');
            }
            else if (array[i][n] == 1){
                putchar('2');
                putchar(' ');
                putchar(' ');
            }
            else{
                printf("Error: value in board array is out of bounds");
                exit(0);
            }
            if (n == (sizeBoard - 1)){
                putchar('\n');
            }
        }
    }
    putchar('\n');
}


int columnFull(int column, int boardSize, int board[][boardSize]){
    if (board[0][column] != -1){
        return 1;
    }
    else return 0;
}

int columnEmpty(int column,int boardSize,int board[][boardSize]){
    if (board[boardSize-1][column] == -1){
        return 1;
    }
    else return 0;
}

// function that actually places a token into the array in the form of
// o for player 1 and 1 for player 2
int place_token(int player, int column, int num_rows, int num_columns, int board[num_rows][num_columns]){
    if (columnEmpty(column, num_rows, board) == 1){
        board[num_rows-1][column] = player;
        return 1;
    }
    else{
        int destinationRow = 0;
        for (int i = num_rows-1; i >=0; i--){
            if (board[i][column] == -1){
                destinationRow = i;
                break;
            }
        }
        board[destinationRow][column] = player;
        return 1;
    }
    return 0;
}

// one of the functions called by the main winner function.
// It checks every row in the array to see if one of them
// has a sequence of 4 of the same number (either 0 or 1).
int horizontalWin(int winLength, int boardSize, int board[][boardSize]){
    int previousSpace = -1;
    int consecutive = 0;
    for (int i = 0; i < boardSize; i++){
        for (int n = 0; n < boardSize; n++){
            if (board[i][n] != -1){
                if (board[i][n] == previousSpace){
                    consecutive++;
                    if (consecutive == winLength){
                        return previousSpace;
                    }
                }
                else{
                    previousSpace = board[i][n];
                    consecutive = 1;
                }
                
            }
            else{
                previousSpace = -1;
                consecutive = 0;
            }
            if (n == boardSize-1){
                previousSpace = -1;
                consecutive = 0;
            }
        }
    }
    return -1;
}

// one of the functions called by the main winner function.
// It checks every column in the array to see if one of them
// has a sequence of 4 of the same number (either 0 or 1).
int verticalWin(int winLength, int boardSize, int board[][boardSize]){
    int previousSpace = -1;
    int consecutive = 0;
    for (int i = 0; i < boardSize; i++){
        for (int n = 0; n < boardSize; n++){
            if (board[n][i] != -1){
                if (board[n][i] == previousSpace){
                    consecutive++;
                    if (consecutive == winLength){
                        return previousSpace;
                    }
                }
                else{
                    previousSpace = board[n][i];
                    consecutive = 1;
                }
                
            }
            else{
                previousSpace = -1;
                consecutive = 0;
            }
            if (n == boardSize-1){
                previousSpace = -1;
                consecutive = 0;
            }
        }
    }
    return -1;
}


// one of the functions called by the main winner function.
// it checks for diagonal wins that go up from left to right
// in the whole array. starts near the upper left corner in the
// the first place where a diagonal win could take place
// depending on board size and length needed to win and works
// its way toward the lower right corner.
int diagonalUpWin(int winLength, int boardSize, int board[][boardSize]){
    int previousSpace = -1;
    int consecutive = 0;
    int i = 0;
    int n = winLength - 1;
    while(consecutive != winLength){
        if (board[n][i] != -1){
            if (board[n][i] == previousSpace){
                consecutive++;
            }
            else{
                previousSpace = board[n][i];
                consecutive = 1;
            }
        }
        else{
            previousSpace = -1;
            consecutive = 0;
        }
        if (consecutive == winLength){
            break;
        }
        else if ((n == 0) && (i == boardSize - 1)){
            n = boardSize -1;
            i = 1;
            previousSpace = -1;
            consecutive = 0;
        }
        else if (n == 0){
            n += (i + 1);
            i = 0;
            previousSpace = -1;
            consecutive = 0;
        }
        else if ((i == boardSize -1) && (n == boardSize - winLength)){
            previousSpace = -1;
            break;
        }
        else if (i == boardSize -1){
            i = n + 1;
            n = boardSize - 1;
            previousSpace = -1;
            consecutive = 0;
        }
        else{
            n--;
            i++;
        }
        
    }
    return previousSpace;
}

// one of the functions called by the main winner function.
// it checks for diagonal wins that go down from left to right
// in the whole array. starts near the lower left corner in the
// the first place where a diagonal win could take place
// depending on board size and length needed to win and works
// its way toward the upper right corner.
int diagonalDownWin(int winLength, int boardSize, int board[][boardSize]){
    int previousSpace = -1;
    int consecutive = 0;
    int i = 0;
    int n = boardSize - winLength;
    while(consecutive != winLength){
        if (board[n][i] != -1){
            if (board[n][i] == previousSpace){
                consecutive++;
            }
            else{
                previousSpace = board[n][i];
                consecutive = 1;
            }
        }
        else{
            previousSpace = -1;
            consecutive = 0;
        }
        if (consecutive == winLength){
            break;
        }
        else if ((n == boardSize) && (i == boardSize - 1)){
            n = 0;
            i = 1;
            previousSpace = -1;
            consecutive = 0;
        }
        else if (n == boardSize -1){
            n -= (i + 1);
            i = 0;
            previousSpace = -1;
            consecutive = 0;
        }
        else if ((i == boardSize -1) && (n == winLength-1)){
            previousSpace = -1;
            break;
        }
        else if (i == boardSize -1){
            i -= n - 1;
            n = 0;
            previousSpace = -1;
            consecutive = 0;
        }
        else{
            n++;
            i++;
        }
        
    }
    return previousSpace;
}

// function used to check for a winner after every token is placed.
// calls upon all the other individual check functions and adds thier
// return values. returns -1 for no winner, 0 for player 1 win, and 1
// for player 2 win.
int winner(int num_rows, int num_columns, int length_to_win, int array[num_columns][num_rows]){
    int sum = horizontalWin(length_to_win, num_rows, array)-1;
    sum += verticalWin(length_to_win, num_rows, array);
    sum += diagonalDownWin(length_to_win, num_rows, array);
    sum += diagonalUpWin(length_to_win, num_rows, array);
    sum += 4;
    return sum;
}
