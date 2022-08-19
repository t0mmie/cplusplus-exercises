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
    std::string letterGrade;

    std::cout << "Enter your grade: \n";

    std::cin >> grade;
    
    switch (grade) {
        case 90 ... 100:
            letterGrade = "A";
            break;
        case 80 ... 89:
            letterGrade = "B";
            break;
        case 70 ... 79:
            letterGrade = "C";
            break;
        case 60 ... 69:
            letterGrade = "D";
            break;
        default:
            letterGrade = "F";
            break;
    }

    std::cout << "Your letter grade is: " << letterGrade << "\n";

    return 0;
}