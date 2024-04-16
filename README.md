# Splash Screen in C++

![Splash Screen](media/preview.png?raw=true "Splash Screen")

This C++ program displays a splash screen with a custom design using ANSI escape codes for colors and sleeps for a specified duration to show the splash screen character by character, and it's responsive!

## Features

- Custom-designed splash screen.
- ANSI escape codes for color formatting.
- Character-by-character display with a specified delay.

## Requirements

- C++ compiler with C++11 support (e.g., g++).
- Terminal that supports ANSI escape codes.

## Installation

1. **Clone the repository**:
    ```bash
    git clone https://github.com/simonbermudez/simon-bermudez-splash-cpp
    ```
2. **Navigate to the project directory**:
    ```bash
    cd simon-bermudez-splash-cpp
    ```
3. **Compile the program**:
    ```bash
    g++ -std=c++11 -o splash splash.cpp
    ```

## Usage

1. **Run the compiled program**:
    ```bash
    ./splash
    ```
2. **See the splash screen display character by character**.

## Customization

- **Change the splash screen design**: Modify the `splash` string in `splash.cpp` to change the design.
- **Adjust the sleep duration**: Modify the sleep duration in `std::this_thread::sleep_for(std::chrono::milliseconds(30));` to adjust the delay between character displays.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
