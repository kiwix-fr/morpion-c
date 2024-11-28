# Tic-Tac-Toe Game in C

This project is an implementation of the classic **Tic-Tac-Toe** (Morpion) game in **C**. It allows two players to compete on a 3x3 grid. Players alternate between "X" and "O", and the game ends when a player wins or the grid is filled without a winner.

## Features

- **Two Players**: The game is designed for two people to play.
- **Dynamic Display**: The grid is displayed after each move, showing the current state of the game.
- **Victory Check**: The game automatically checks for a winner after each turn (rows, columns, or diagonals).
- **Turn Management**: Players alternate between Player 1 ("X") and Player 2 ("O").

## Prerequisites

The game is developed in C, so you will need a C compiler to compile and run it (`gcc` or `clang`).


## Compilation and Execution

1. Clone this repository to your local machine: git clone https://github.com/kiwix-fr/morpion-c.git
2. Compile the program
3. Have Fun !

## How to Play

To make a move, you need to provide the indices of the cell where you want to play (similar to array indices). The first number corresponds to the column, and the second number corresponds to the row.

For example:
- `0 0` plays the top-left cell.
- `2 1` plays the bottom-center cell.

## Authors
- thomas-merlen (thomas.merlen@outlook.com)
- kiwix-fr (kiwix.shell@gmail.com)

**Project under MIT Licence**
