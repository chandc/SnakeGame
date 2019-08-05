#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    for (int min = 3; min >= 0; min--) {
        for (int sec = 59; sec >= 0; sec--)
        {
            std::this_thread::sleep_for(std::chrono::seconds(1)); 
            std::cout <<  min << "\t" << sec << "\n";
        }
    }
    return 0;
}
