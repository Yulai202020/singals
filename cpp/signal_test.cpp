#include <csignal>
#include <iostream>
#include <chrono>
#include <thread>

void signal_handler(int signal) {
    std::cout << std::endl;
    std::cout << "Nah i dont want to exit." << std::endl;
}
 
int main() {
    std::cout << "PID of process: " << getpid() << std::endl;
    std::signal(SIGINT, signal_handler);

    int count = 1;
    while (1) {
        std::cout << count << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        count++;
    }
}