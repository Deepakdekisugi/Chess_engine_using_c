# Chess Engine in C

## Overview

This is a simple chess engine implemented in the C programming language. The engine supports basic chess functionality, including legal move generation, position evaluation, and a simple search algorithm.

## Features

- **Move Generation:** The engine can generate legal moves for a given position.
- **Position Evaluation:** Basic evaluation of a chess position is implemented, assigning values to pieces and evaluating the overall position.
- **Search Algorithm:** A simple search algorithm (minimax with alpha-beta pruning) is used to find the best move for a given position.

## Getting Started

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/Deepakdekisugi/chess-engine-c.git
   cd chess-engine-c
   ```

2. **Compile the Code:**
   ```bash
   gcc -o chess_engine main.c chess.c
   ```

3. **Run the Chess Engine:**
   ```bash
   ./chess_engine
   ```

## Usage

- **Input:**
  - The user can input moves in standard algebraic notation (e.g., e2e4, Ng1f3).
  - To exit the program, enter "quit" or use the keyboard shortcut Ctrl+C.

- **Output:**
  - The engine will display the updated board after each move.
  - The best move according to the search algorithm will be shown.

## Code Structure

- **`main.c`:** Entry point for the program. Handles user input and game loop.
- **`chess.c`:** Contains the core chess engine implementation, including move generation, position evaluation, and the search algorithm.
- **`chess.h`:** Header file declaring function prototypes and data structures.

## Future Improvements

- Implement more advanced search algorithms (e.g., iterative deepening, transposition tables).
- Add support for additional chess features (e.g., castling, en passant, promotions).
- Improve the evaluation function for more accurate position assessment.

## Contributing

Contributions are welcome! Feel free to fork the repository and submit pull requests to enhance the chess engine.

## License

This chess engine is open-source and distributed under the [MIT License](LICENSE). Feel free to use and modify the code for your own projects.
