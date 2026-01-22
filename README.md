# Horse Racing Simulation (C++)

This project is a simple object-oriented horse racing simulation written in C++. It models racehorses and their jockeys using a `Racer` class and simulates aging, injury risk, eligibility, and head-to-head races using randomized outcomes.

## Features
- Object-oriented design using a custom `Racer` class
- Tracks horse and jockey attributes such as name, weight, age, and gender
- Simulates horse aging with age-based injury and eligibility rules
- Randomized race outcomes based on combined horse and jockey weight
- Displays detailed race and status information to the console

## Project Structure
- `Racer.h` – Class declaration and method prototypes
- `Racer.cpp` – Implementation of the `Racer` class
- `main.cpp` – Driver program that creates racers and runs the simulation
- `README.md` – Project documentation

## How It Works
Each racer consists of a horse and a jockey with associated attributes. As a horse ages, it may become injured or ineligible to race based on probability rules. When two eligible racers compete, the winner is determined using a randomized calculation influenced by the combined weights of the horse and jockey.

## How to Compile and Run

### Compile
```bash
g++ main.cpp Racer.cpp -o race
