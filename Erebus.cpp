#include <iostream>
#include <windows.h> 

int main() {
    SetConsoleTitleA("Erebus RAT Native Client [v2.1]");

    std::cout << "Loading Erebus Core...";
    Sleep(1000);
    std::cout << ".";
    Sleep(1000);
    std::cout << ".";
    Sleep(1000);
    std::cout << " [OK]" << std::endl;

    std::cout << "\n[+] Initializing Modules..." << std::endl;
    Sleep(500);
    std::cout << "[+] HVNC Driver: LOADED" << std::endl;
    Sleep(300);
    std::cout << "[+] Network Stack: READY" << std::endl;

    std::cout << "\nWaiting for server connection..." << std::endl;
    
    while(true) {
        Sleep(10000);
    }

    return 0;
}
