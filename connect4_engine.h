//
//  connect4_engine.h
//  connect4
//
//  Created by Diego Ruiz on 2/16/16.
//  Copyright (c) 2016 Diego Ruiz. All rights reserved.
//

#ifndef connect4_engine
#define connect4_engine

int place_token(int player, int column, int num_rows, int num_columns, int board[num_rows][num_columns]);

int winner(int num_rows, int num_columns, int length_to_win, int array[num_rows][num_columns]);

void displayBoard(int sizeBoard, int array[][sizeBoard]);

int columnFull(int column, int boardSize, int board[][boardSize]);

#endif
