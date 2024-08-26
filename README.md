# 🕹️ Guess-the-Number-Game

# About the Project
This is a simple command-line game implemented in C where the player tries to guess a randomly generated number between 1 and 100. The game gives hints like "Higher number please" or "Lower number please" based on the player's guesses until the correct number is found.

## Features
- Random number generation between 1 and 100.
- Hints provided to guide the player based on the guessed number.
- Tracks the number of guesses it took to find the correct number.
- Input validation to ensure the user enters a valid number within the specified range.

# How to Play
1. Start the game by running the program.
2. Enter a number between 1 and 100.
3. The game will prompt you with hints ("Higher number please" or "Lower number please") until you guess the correct number.
4. Once you guess the correct number, the game will display the total number of attempts you took.

# Getting Started
Prerequisites
Before you begin, ensure you have the following installed:

GCC (GNU Compiler Collection) or any other C compiler
Git (for cloning the repository)

# Installation
1. Clone the repository:
```
<span style="color:red">git clone</span> https://github.com/vadapav071/Guess-the-Number-Game.git
```
2. Navigate to the project directory:
```
cd Guess-the-Number-Game
```
3. Compile the C program:
```
gcc -o GuessNumber GuessNumber.c
```
4. Run the game:
```
./GuessNumber
```
## Example
```
Program:
(Press Enter to start the game)
Guess the number between 1 to 100 (Enter a number): 9
Higher number please: 84
Lower number please: 56
Higher number please: 74
Lower number please: 66
Higher number please: 71
Lower number please: 69
Finally, you guessed it! The correct number is 69.
The number of guesses you took: 6
```
# You can always add your code or modify this one..
