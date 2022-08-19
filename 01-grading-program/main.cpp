#include <iostream>

/* Write a program that allows the user to enter the grade scored in
a programming class (0-100). If the user scored a 100 then notify
the user that they got a perfect score.

⭐ Modify the program so that if the user scored a 90-100 it informs
the user that they scored an A

⭐⭐ Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A */

int main() {
    unsigned int grade;
    std::string response;

    std::cout << "Enter your grade: \n";

    std::cin >> grade;

    if (grade < 0 || grade > 100)
        response = "That's not possible!";
    else if (grade >= 90 && grade <= 100)
        response = "You've scored an A!";
    else
        response = "You can do better.";

    std::cout << response << "\n";

    return 0;
}