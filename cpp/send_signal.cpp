#include <iostream>
#include <csignal>
#include <unistd.h>

int main() {
    int pid;

    std::cout << "Enter PID of process: ";
    std::cin >> pid;

    int signal = SIGINT;

    if (kill(pid, signal) == 0) {
        std::cout << "Signal sent successfully." << std::endl;
    } else {
        std::cout << "Failed to send signal." << std::endl;
    }

    return 0;
}
