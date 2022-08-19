#include <iostream>

/* Write a program that presents the user w/ a choice of your 5 favorite beverages
(Coke, Water, Sprite, ... , Whatever). Then allow the user to choose a beverage
by entering a number 1-5. Output which beverage they chose.

⭐ If you program uses if statements instead of a switch statement,
modify it to use a switch statement. If instead your program uses
a switch statement, modify it to use if/else-if statements.

⭐⭐ Modify the program so that if the user enters a choice other than 1-5 then
it will output "Error. choice was not valid, here is your money back."*/

int main() {
    unsigned int choice;
    std::string beverage;

    std::cout << "Choose your beverage: \n";
    std::cout << "1) Coke\n";
    std::cout << "2) Water\n";
    std::cout << "3) Sprite\n";
    std::cout << "4) Fanta\n";
    std::cout << "5) Beer\n";
    
    std::cin >> choice;

    if (choice == 1) {
        beverage = "Coke";
    } else if (choice == 2) {
        beverage = "Water";
    } else if (choice == 3) {
        beverage = "Sprite";
    } else if (choice == 4) {
        beverage = "Fanta";
    } else if (choice == 5) {
        beverage = "Beer";
    } else {
        std::cout << "Error. choice was not valid, here is your money back.\n";

        return 0;
    }

    std::cout << "You've chosen " << beverage << "\n";
    
    return 0;
}