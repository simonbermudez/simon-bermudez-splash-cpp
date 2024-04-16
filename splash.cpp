#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <unistd.h>
#include <sys/ioctl.h>
#include <thread>
#include <chrono>

const int WIDTH = 69;

void clearScreen() {
    system("clear");
}

int getScreenWidth() {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    return w.ws_col;
}

int main() {
    clearScreen();

    int rows = getScreenWidth();

    if (rows < WIDTH) {
        exit(0);
    }

    std::string splash;
    splash.append("\n");
    splash.append(" +--------------------------------").append(std::string(rows - WIDTH, '-')).append("---------------------------------+ \n");
    splash.append(" |  ****************************  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***######################***  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***######################***  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***######################***  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***###*******##******####***  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***###*******##****####*****  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***###*******##**###********  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***###*******#####**********  ").append(std::string(rows - WIDTH, ' ')).append(" +-------------------------+     | \n");
    splash.append(" |  ***##########|/|/########***  ").append(std::string(rows - WIDTH, ' ')).append(" |     SIMON BERMUDEZ      |     | \n");
    splash.append(" |  ***##########|/##########***  ").append(std::string(rows - WIDTH, ' ')).append(" |  www.simonbermudez.com  |     | \n");
    splash.append(" |  **********#####*******###***  ").append(std::string(rows - WIDTH, ' ')).append(" +-------------------------+     | \n");
    splash.append(" |  *******###***##*******###***  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  *****####****##*******###***  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***####******##*******###***  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***######################***  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***######################***  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ***######################***  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" |  ****************************  ").append(std::string(rows - WIDTH, ' ')).append("                                 | \n");
    splash.append(" +--------------------------------").append(std::string(rows - WIDTH, '-')).append("---------------------------------+ \n");
    splash.append("\n");

    std::string fill = "01";

    srand(time(nullptr));

srand(time(nullptr));
for (char& c : splash) {
    switch (c) {
        case '#':
            std::cout << "\033[36m" << fill[rand() % fill.length()] << "\033[0m";
            break;
        case '_':
        case '|':
            std::cout << c;
            break;
        case '/':
            std::cout << "\033[32m" << c << "\033[0m";  // green color
            break;
        case '*':
            std::cout << " ";
            break;
        case '+':
            std::cout << "\033[32m" << c << "\033[0m";  // green color
            break;
        case '-':
            std::cout << c;
            break;
        default:
            std::cout << "\033[36m" << c << "\033[0m";  // cyan color
            break;
    }

    std::cout << std::flush; // Flush the output
    std::this_thread::sleep_for(std::chrono::microseconds(150)); // Sleep for 30 milliseconds
}

    std::cout << "\n" << std::string(rows / 2 - 16, ' ') << "\033[33m--> ENTERING TO SYSTEM TERMINAL <--\033[0m\n\n";

    std::this_thread::sleep_for(std::chrono::seconds(1));
    return 0;
}
