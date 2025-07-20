# 🎯 Number Guessing Game in C

A fun, terminal-based number guessing game with smart hints and ratings!

---

## ✨ Features
- 🎮 Terminal-based interactive gameplay
- 🧩 Three difficulty levels: Easy, Medium, Hard
- 💡 Smart hints: "Way too high" or "A bit low", etc.
- 🖋️ Typewriter-style printing effect
- 🔁 Option to replay the game
- ⭐ Rate the game when it ends

---

## 🛠️ Technologies Used

- **Language**: C  
- **Compiler**: GCC or any standard C compiler  
- **Libraries**:  
  - `stdio.h` – for input/output operations  
  - `stdlib.h` – for random number generation  
  - `time.h` – for seeding randomness and controlling print delay  

---

## 🧠 How the Code Works

1. A random number between 1 and 100 is generated using `rand()`.  
2. The player selects a difficulty level:  
   - Easy: 10 attempts  
   - Medium: 7 attempts  
   - Hard: 5 attempts  
3. The player makes guesses, and feedback is given:  
   - “Way too small!” or “A bit low” if guess is less than the number  
   - “Way too large!” or “A bit high” if guess is more  
4. If the player guesses correctly, they win.  
5. If attempts are exhausted, the correct number is revealed.  
6. After the game, the player is asked to give a star rating.  

---

## 🗂️ Project Structure

```
number-guessing-game/
├── number-guessing-game.c   # Main game logic
└── README.md                # Project documentation
```

---

## 🚀 Getting Started

### ✅ Prerequisites

Before running the game, make sure you have:

1. A C compiler installed:  
  - For macOS/Linux: `gcc` (comes with Xcode CLI or build-essential)  
  - For Windows: [MinGW](http://www.mingw.org/), [TDM-GCC](https://jmeubank.github.io/tdm-gcc/), or use an IDE like Code::Blocks  

2. A terminal or command prompt to compile and run the program  

3. Basic knowledge of using the terminal or command line interface  

---

### 🚧 Installation & Running the Game

```bash
# 1. Clone the repository (or download the files)
git clone https://github.com/your-username/number-guessing-game.git
cd number-guessing-game

# 2. Compile the code using gcc
gcc number-guessing-game.c -o guessgame

# 3. Run the game
./guessgame

# 4. Follow the instructions on screen and enjoy!
```

> 💡 For Windows users, you can use Code::Blocks or Dev-C++ to compile and run the code without using the terminal.

---

## 🤝 Contributing

Contributions are welcome! Feel free to fork the repository, make changes, and create a pull request.

---

## 🌟 Like This Project?

Show some ❤️ by starring the repo and sharing it!

---

## 🙏 Acknowledgements

1. Inspired by beginner-friendly terminal games
2. Thanks to [GeeksforGeeks](https://www.geeksforgeeks.org/), [Programiz](https://www.programiz.com/), and other C programming resources for reference
3. Special thanks to all contributors and testers who helped make the game better!

---

Happy coding! 🚀