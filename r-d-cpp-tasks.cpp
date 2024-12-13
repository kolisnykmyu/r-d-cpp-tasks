#include <iostream>
#include <iomanip>

int main()
{
    // task 1.

    std::cout << "I love C++!\n";

    std::cout << "\n";

    std::cout << "*\n";
    std::cout << "**\n";
    std::cout << "***\n";
    std::cout << "****\n";
    std::cout << "*****\n";

    //task 2-1.

    int firstNumber, secondNumber;
    std::cout << "Entet integer 1: " << std::endl;
    std::cin >> firstNumber;
    std::cout << "Entet integer 2: " << std::endl;
    std::cin >> secondNumber;

    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;

    std::cout << "Integer 1: " << firstNumber << std::endl;
    std::cout << "Integer 2: " << secondNumber << std::endl;

    std::cout << std::endl;

    //task 2-2.

    double doubleNumber1 = 25.47582943;
    std::cout << "Double: " << doubleNumber1 << std::endl;
    std::cout << "Double as int: " << (int)doubleNumber1 << std::endl;
    std::cout << "Double as string, width 20, right alingment: " << std::setw(20) << std::right << std::setfill('$') << doubleNumber1 << std::endl;
    std::cout << std::endl;

    //task 2-3.

    double doubleNumber2 = 33.123213456;
    std::cout << "Double with precision 2: " << std::fixed << std::setprecision(2) << doubleNumber2 << std::endl;
    std::cout << "Double with precision 5: " << std::fixed << std::setprecision(5) << doubleNumber2 << std::endl;
    std::cout << "Double with precision 10: " << std::fixed << std::setprecision(10) << doubleNumber2 << std::endl;
    std::cout << "Double in standard notification: " << std::defaultfloat << doubleNumber2 << std::endl;
    std::cout << "Double in e - notation notification: " << std::scientific << doubleNumber2 << std::endl;

    std::cout << std::endl;

    //task 2-4.
    enum WeekDay
    {
        Monday = 1,
        Tuesday = 2,
        Wednesday = 3,
        Thursday = 4,
        Friday = 5,
        Saturday = 6,
        Sunday = 7
    };

    std::cout << "Monday: " << static_cast<int>(WeekDay::Monday) << std::endl;
    std::cout << "Tuesday: " << static_cast<int>(WeekDay::Tuesday) << std::endl;
    std::cout << "Wednesday: " << static_cast<int>(WeekDay::Wednesday) << std::endl;
    std::cout << "Thursday: " << static_cast<int>(WeekDay::Thursday) << std::endl;
    std::cout << "Friday: " << static_cast<int>(WeekDay::Friday) << std::endl;
    std::cout << "Saturday: " << static_cast<int>(WeekDay::Saturday) << std::endl;
    std::cout << "Sunday: " << static_cast<int>(WeekDay::Sunday) << std::endl;

    std::cout << std::endl;

    // task 2-5.
    int number;
    std::cout << "Enter number: " << std::endl;
    std::cin >> number;
    bool boolNumber = number;
    std::cout << "Bool number: " << std::boolalpha << boolNumber << std::endl;
}