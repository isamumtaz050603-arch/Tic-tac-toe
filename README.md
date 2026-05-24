# README - Tic Tac Toe Game in C++

## Overview

This project is a simple console-based Tic Tac Toe game developed in C++. The game allows two players to play against each other by taking turns placing their symbols (`X` and `O`) on a 3×3 board. The first player to align three symbols horizontally, vertically, or diagonally wins the game.

This project is ideal for beginners who want to practice fundamental C++ programming concepts and basic game development logic.

---

# Features

* Two-player gameplay
* 3×3 interactive game board
* Player turn switching system
* Win detection system
* Draw detection
* Input validation for invalid moves
* Console-based user interface

---

# Concepts Used

This project demonstrates the following C++ concepts:

* Variables and Data Types
* Functions
* Arrays (2D Arrays)
* Conditional Statements (`if`, `else`)
* Loops (`for`, `while`)
* User Input and Output (`cin`, `cout`)
* Game Logic Implementation

---

# How the Game Works

1. The game starts with an empty 3×3 board.
2. Player `X` makes the first move.
3. Players take turns entering the row and column number.
4. The program checks:

   * If the move is valid
   * If a player has won
   * If the board is full (draw)
5. The game ends when:

   * A player wins, or
   * The game ends in a draw.

---

# Game Rules

* Players can only place their symbol in an empty cell.
* Three matching symbols in a row, column, or diagonal result in a win.
* If all cells are filled without a winner, the game ends in a draw.

---

# Example Gameplay

```bash id="n8k2vl"
Current Board:
  |   |  
---------
  |   |  
---------
  |   |  

Player X, enter your move (row and column): 1 1
```

---

# File Structure

```bash id="f4h7n2"
tic tac toe.cpp   # Main source code
README.md         # Project documentation
```

---

# How to Run

## Compile the Program

```bash id="c9f2mq"
g++ "tic tac toe.cpp" -o tictactoe
```

## Run the Program

```bash id="q7v8px"
./tictactoe
```

---

# Requirements

* C++ Compiler (G++, MinGW, or any standard compiler)
* Terminal / Command Prompt

---

# Learning Outcomes

By building this project, you can learn:

* Basic game development in C++
* Working with 2D arrays
* Implementing game rules and logic
* Handling player input
* Creating interactive console applications

---

# Future Improvements

Possible future upgrades:

* Single-player mode with AI
* Score tracking system
* Improved board design
* Difficulty levels
* Graphical User Interface (GUI)
* Online multiplayer support

---

# Author

Developed as a beginner-friendly C++ project to practice programming fundamentals and game development concepts.
