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
    std::string beverages [5] = { "Coke", "Water", "Sprite", "Fanta", "Beer" };
    unsigned int choice;

    std::cout << "Choose your beverage: \n";

    for ( int n = 0 ; n < 5 ; ++n ) {
        std::cout << ( n + 1 ) << ") " << beverages[n] << "\n";
    }
    
    std::cin >> choice;

    if (choice < 1 || choice > 5) {
        std::cout << "Error. choice was not valid, here is your money back.\n";

        return 0;
    }

    std::cout << "You've chosen " << beverages[choice - 1] << "\n";
    
    return 0;
}
