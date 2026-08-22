#include <iostream>
#include <string>

void ipsearcher() {
    std::cout << "\n";
    std::cout << "  ╔════════════════════════════════╗\n";
    std::cout << "  ║       TEMP MAIL CLIENT        ║\n";
    std::cout << "  ║   Developer: desolateos       ║\n";
    std::cout << "  ║   Language: C++               ║\n";
    std::cout << "  ╚════════════════════════════════╝\n";
    std::cout << "\n";
    
    std::cout << "Your temporary mail: \n";
    system("curl -X POST https://api.tempmailportal.com/api/inbox");
    
    std::string choice;
    std::cout << "\nDo you want to receive letters? Yes/Not: ";
    std::cin >> choice;
    
    if (choice == "Yes" || choice == "yes" || choice == "y") {
        std::string token;
        std::cout << "Enter your token: ";
        std::cin >> token;
        
        std::string cmd = "curl https://api.tempmailportal.com/api/messages -H \"Authorization: Bearer " + token + "\"";
        system(cmd.c_str());
    }
    else if (choice == "No" || choice == "no" || choice == "n") {
        std::cout << "Bye bye!";
        exit(0);
    }
    else {
        std::cout << "Wrong choice";
        exit(0);
    }
}    

int main() {
    ipsearcher();
    return 0;
}