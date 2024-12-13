#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>

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

    // task 3-1.
    const unsigned SecondsInMinute = 60;
    const unsigned MinutesInHour = 60;
    const unsigned SecondsInHour = SecondsInMinute * MinutesInHour;

    std::cout << "Task 1: \n";
    int seconds;

    std::cout << "Enter seconds: ";
    std::cin >> seconds;

    std::cout << seconds / SecondsInHour << " hours, " << (seconds % SecondsInHour) / MinutesInHour << " minutes, " << (seconds % SecondsInHour) % SecondsInMinute << " seconds" << std::endl;


    // task 3-2.
    std::cout << "Task 2: \n";
    int a, b, c;
    std::cout << "Enter three numbers: \n";
    std::cin >> a >> b >> c;

    double sum = a + b + c;
    double product = a * b * c;
    double average = sum / 3;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Average: " << average << std::endl;


    // task 3-3.
    std::cout << "Task 3: \n";
    int num1, num2;
    bool lessThan, equal, moreThan, lessOrEqual;

    std::cout << "Enter two numbers: \n";
    std::cin >> num1 >> num2;

    lessThan = num1 < num2;
    equal = num1 == num2;
    moreThan = num1 > num2;
    lessOrEqual = num1 <= num2;

    std::cout << "num1 less than num2: " << std::boolalpha << lessThan << std::endl;
    std::cout << "num1 equal to num2: " << std::boolalpha << equal << std::endl;
    std::cout << "num1 more than num2: " << std::boolalpha << moreThan << std::endl;
    std::cout << "num1 less or equal to num2: " << std::boolalpha << lessOrEqual << std::endl;


    // task 3-4.
    std::cout << "Task 4: \n";
    double width, height;

    std::cout << "Enter width and height of rectangle: \n";
    std::cin >> width >> height;

    double rectangleArea = width * height;
    double rectanglePerimetet = 2 * (width + height);

    std::cout << "Area: " << rectangleArea << std::endl;
    std::cout << "Perimeter: " << rectanglePerimetet << std::endl;

    // task 3-5.
    std::cout << "Task 5: \n";
    double radius;

    std::cout << "Enter radius of circle: \n";
    std::cin >> radius;

    double area = M_PI * pow(radius, 2);
    double circuit = 2 * M_PI * radius;

    std::cout << "Area: " << area << std::endl;
    std::cout << "Circuit: " << circuit << std::endl;
}