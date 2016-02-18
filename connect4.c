//
//  connect4.c
//  connect4
//
//  Created by Diego Ruiz on 2/17/16.
//  Copyright (c) 2016 Diego Ruiz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "connect4_engine.h"

int main(int argc, const char * argv[]){
    
    int boardSize;
    int winLength;
    
    
    // game starts by first checking for the optional command
    // line arguments. if none were given then it defaults to
    // board size of 8 and length needed to win of 4. will only
    // accept arguments int the form of "./c4 (int) (int)", where
    // the first value is the board size and the second the length
    // needed to win. if arguments are not in the form of an int
    // or length needed to win is larger than board size, the
    // program will print error and exit.
    if (argc == 3 && (atoi(argv[1]) != 0 && atoi(argv[2]) !=0)) {
        boardSize = atoi(argv[1]);
        winLength = atoi(argv[2]);
        if (winLength > boardSize || winLength<3 || boardSize<3){
            printf("\nInvalid Command Line Arguments Passed\n");
            exit(0);
        }
    }
    else if (argc == 1){
        boardSize = 8;
        winLength = 4;
    }
    else{
        printf("\nInvalid Command Line Arguments Passed\n");
        exit(0);
    }
    
    
    int board[boardSize][boardSize];
    
    // initializing the board array to hold -1 in all spaces
    for (int i = 0; i < boardSize; i++) {
        for (int n = 0; n < boardSize; n++){
            board[n][i]= -1;
        }
    }
    
    int turn = 0;
    int player = 0;
    int tokenPlaced = 0;
    displayBoard(boardSize, board);
    
    
    // this while loops keeps the game in play until either a player wins
    // or every space is filled and results in a tie. programs exits after either.
    while (tokenPlaced == 0){
        
        // player is asked to eneter column number here. will only except a single integer
        // value that is >= 0 and < board size. if anything else is entered prints error
        // and reasks user for input.
        printf("Player %d enter a column number 0 through %d \n followed by the enter key: ", player+1, boardSize-1);
        int num;
        char term;
        if (scanf("%d%c", &num, &term) != 2 || term != '\n'){
            printf("Invalid Input Try again\n");
            scanf("%*[^\n]");
            continue;
        }
        if (num > (boardSize-1) || num < 0){
            printf("Invalid Input Try again\n");
            continue;
        }
        
        // if entered column is full will also reask user for input
        if (columnFull(num, boardSize, board)){
            printf("That Column is full. Try Again. \n");
            continue;
        }
        tokenPlaced = place_token(player, num, boardSize, boardSize, board);
        displayBoard(boardSize, board);
        if (tokenPlaced == 1){
            if (player == 0){
                player = 1;
            }
            else{
                player = 0;
            }
            // checking for winner
            if (winner(boardSize, boardSize, winLength, board) != -1){
                printf("\nCongratulations Player %d, You Win!!! \n", winner(boardSize, boardSize, winLength, board) + 1);
                exit(0);
            }
            else{
                tokenPlaced = 0;
                // checking for tie
                if (turn == boardSize*boardSize){
                    printf("\nThe game has come to a draw!!! \n");
                    exit(0);
                }
                turn++;
            }
        }
        
        // just incase something goes wrong so i have an error
        // message and a place to start looking
        else{
            printf( "\nSomething else went wrong while placing token. Now closing.");
            exit(0);
        }
    }
    return 0;
} 
