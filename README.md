# Ahmetus Problem

This repository contains a C implementation of a classic problem, often referred to as the "Josephus Problem" or variations of it. The program determines the last person remaining in a circle after eliminating every second person.

## Problem Description
Given a number of people standing in a circle, starting from the first person, every second person is eliminated. This process continues until only one person remains. The program simulates this elimination process and outputs the position of the last person standing.

## Features
- Simulates the elimination process.
- Displays each step of the elimination.
- Outputs the position of the last remaining person.

## How to Use
1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/ahmetus-problem.git
   ```
2. Navigate to the directory:
   ```bash
   cd ahmetus-problem
   ```
3. Compile the code using a C compiler, such as `gcc`:
   ```bash
   gcc ahmetus.c -o ahmetus
   ```
4. Run the program:
   ```bash
   ./ahmetus
   ```
5. Enter the number of people when prompted.

## Example
### Input
```
Please enter the number of people: 5
```

### Output
```
> First person alive: 1
 --- 2 was killed ---

> Next person alive: 3
 --- 4 was killed ---

> Next person alive: 5
 --- 1 was killed ---

> Next person alive: 3
 --- 5 was killed ---

--------------------------------
 Last person alive: 3
```

## Functions Explained
- **control**: Checks if only one person is left alive.
- **find_last_person**: Returns the index of the last person remaining.
- **find_alive**: Finds the next person alive after a given position.
- **ahmetus**: Simulates the entire elimination process and determines the last person alive.

## Contributing
Feel free to fork this repository, submit issues, or create pull requests to enhance the program or fix bugs.

## Acknowledgments
This implementation was inspired by classic algorithmic problems and showcases the iterative approach to solving elimination puzzles.

---
Enjoy solving the Ahmetus Problem! 😊

