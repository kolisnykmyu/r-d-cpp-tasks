#include <iostream>

int main() {
    //MANDATORY HOMEWORK

    //1.

    std::cout << "Task 1: \n";
    int a, b, c;
    std::cout << "Enter three numbers: \n";
    std::cin >> a >> b >> c;
    if (a > b && a > c) {
        std::cout << "Max number is \"a\": " << a << std::endl;
    }
    else if (b > a && b > c) {
        std::cout << "Max number is \"b\": " << b << std::endl;
    }
    else if (c > a && c > b) {
        std::cout << "Max number is \"c\": " << c << std::endl;
    }
    else {
        std::cout << "There is no max number" << std::endl;
    }

    std::cout << std::endl;

    //2. 

    std::cout << "Task 2: \n";
    int inputNumber;
    std::cout << "Enter a number: \n";
    std::cin >> inputNumber;
    if (inputNumber % 5 == 0 && inputNumber % 11 == 0) {
        std::cout << "The number is divisible by 5 and 11" << std::endl;
    }
    else {
        std::cout << "The number is not divisible by 5 and 11" << std::endl;
    }

    //3.

    std::cout << "Task 3: \n";

    int angle1, angle2, angle3;

    std::cout << "Enter 3 angles of a triangle: \n";
    std::cin >> angle1 >> angle2 >> angle3;

    if (angle1 + angle2 + angle3 == 180) {
        std::cout << "The angles form a triangle" << std::endl;
    }
    else {

        std::cout << "The angles do not form a triangle" << std::endl;
    }

    //4. 

    std::cout << "Task 4: \n";

    short int monthNumber;

    std::cout << "Enter a number of month, from 1 to 12: \n";
    std::cin >> monthNumber;

    if (monthNumber < 1 || monthNumber > 12) {
        std::cout << "This month nomber does not correct" << std::endl;
    }
    else if (monthNumber >= 3 && monthNumber <= 5) {
        std::cout << "Spring" << std::endl;
    }
    else if (monthNumber >= 6 && monthNumber <= 8) {
        std::cout << "Summer" << std::endl;
    }
    else if (monthNumber >= 9 && monthNumber <= 11) {
        std::cout << "Autumn" << std::endl;
    }
    else {
        std::cout << "Winter" << std::endl;
    }


    //ADDITIONAL HOMEWORK

    //1.

    std::cout << "Additional Task 1: \n";
    int numberA, numberB;
    std::cout << "Enter two numbers: \n";
    std::cin >> numberA >> numberB;
    if (numberA == numberB) {
        std::cout << "Numbers are equal" << std::endl;
    }
    else {
        int minNumber = (numberA < numberB) ? numberA : numberB;
        std::cout << "Min number is: " << minNumber << std::endl;
    }

    //2.

    std::cout << "Additional Task 2: \n";
    enum class Month { January = 1, February, March, April, May, June, July, August, September, October, November, December };

    int month;
    std::cout << "Enter a number of month, from 1 to 12: \n";
    std::cin >> month;

    Month monthEnum = static_cast<Month>(month);

    switch (monthEnum) {
    case Month::January:
        std::cout << "January" << std::endl;
        break;
    case Month::February:
        std::cout << "February" << std::endl;
        break;
    case Month::March:
        std::cout << "March" << std::endl;
        break;
    case Month::April:
        std::cout << "April" << std::endl;
        break;
    case Month::May:
        std::cout << "May" << std::endl;
        break;
    case Month::June:
        std::cout << "June" << std::endl;
        break;
    case Month::July:
        std::cout << "July" << std::endl;
        break;
    case Month::August:
        std::cout << "August" << std::endl;
        break;
    case Month::September:
        std::cout << "September" << std::endl;
        break;
    case Month::October:
        std::cout << "October" << std::endl;
        break;
    case Month::November:
        std::cout << "November" << std::endl;
        break;
    case Month::December:
        std::cout << "December" << std::endl;
        break;
    default:
        std::cout << "This month nomber does not correct" << std::endl;
        break;
    }
}

