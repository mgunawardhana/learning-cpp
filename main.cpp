#include <iostream> // this library is capable for input and output operations from the user
#include <cmath>// this library is capable for mathematical operations

using namespace std; // this is a namespace, it is used to avoid writing std:: before cout and cin

int main() {
    /** std stand for standard library
        cout stand for character output */


    /** simple two numbers swapping tasks without third variable
    int a = 1;
    int b = 2;

    a = a + b;
    b = a - b;

    std::cout << b;
    return 0;

    int file_size = 0;  //Snake case
    int FileSize = 0;   //Pascal case
    int fileSize = 0;   //Camel case
    int iFileSize = 0;  //Hungarian notation (not recommended), i stands for integer (first letter of the data type)

    */

    /** Mathematicle Operations */
    // int x = 10;
    // int y = 3;
    // int z = x / y; // 10 / 3 = 3
    // std::cout << z;

    // double a = 10;
    // int b = 3;
    // double c = a / b; // 10 / 3 = 3
    // std::cout << c;
    //
    // int x = 10;
    // int y = 3;
    // int z = x % y; // 10 % 3 = 1
    // std::cout << z;
    //
    // int x = 10;
    // int y = x++; // y = 10, x = 11 first x is assigned to y then x is incremented
    // std::cout << y << " " << x;
    //
    // int x = 10;
    // int y = ++x; // y = 11, x = 11 first x is incremented then assigned to y
    // std::cout << y << " " << x;
    //
    // // () > ++ > -- > * > / > % > + > - order of precedence
    //  double x = 1 + 2 * 3; // 1 + 6 = 7
    //  std::cout << x;

    // double x = 10;
    // double y = 5;
    // double z = (x + 10) / (3 * y);
    // std::cout << z;
    //
    // int f = 10;
    // int b = 15;

    // std::endl stand for end line

    //1st way
    // std::cout << "f = " << f << std::endl;
    // std::cout << "b = " << b;
    //
    // //2nd way
    // std::cout << "f = " << f << std::endl
    //         << "b = " << b;
    //
    // //3rd way
    // cout << "f = " << f << endl
    //      << "b = " << b;


    constexpr double sales = 95000; // Compile-time constant
    constexpr double tax = (100.0 * 4) / 10000; // Compile-time constant
    constexpr double country_tax = (100.0 * 2) / 10000; // Compile-time constant

    cout << "Tax Percentage: " << tax << endl
            << "Country Tax Percentage: " << country_tax << endl;

    /**
     * Why use constexpr instead of const?
     *
     * Use constexpr when you know the value should be figured out while setting things up (before the program runs).
     */

    const double state_tax_amount = sales * tax;
    const double reduced_state_tax_amount = sales - state_tax_amount;
    const double country_tax_amount = reduced_state_tax_amount * country_tax;
    const double total_tax = state_tax_amount + country_tax_amount;
    const double income_without_tax = sales - total_tax;

    cout << "Sales amount is: $" << sales << endl;
    cout << "State tax amount is: $" << state_tax_amount << endl;
    cout << "State tax reduced sales amount is: $" << reduced_state_tax_amount << endl;
    cout << "Country tax amount is: $" << country_tax_amount << endl;
    cout << "Total tax amount is: $" << total_tax << endl;
    cout << "Income without tax amount is: $" << income_without_tax << endl;

    cout << "Input your number here: ";
    //cin stand for character input
    // double x;

    // >> - stream extraction operator
    // cin >> x;
    // cout << x;

    //1st way
    // cout << "Input your number here: ";
    // double x;
    // double y;
    // cin >> x;
    // cin >> y;
    // cout << x << " " << y << endl;
    // cout << "Count is " << x + y;
    //
    //
    // //2nd way
    // cout << "Input your number here: ";
    // double x;
    // double y;
    // cin >> x >> y;
    // cout << x << " " << y << endl;
    // cout << "Count is " << x + y;

    //Fahrenheit to Celsius conversion
    cout << "Input Temperature in F: ";
    double f;
    cin >> f;
    const double f_to_c = (5.0 / 9.0) * (f - 32);
    cout << "Temperature in C: " << f_to_c << endl;

    //this floor method is used to round off the number
    const double result = floor(1.2);
    cout << result;

    // this pow method is used to calculate the power of a number
    const double result2 = pow(2, 2);
    cout << result2;

    // this function is used when user enter the radius of the circle and it will calculate the area of the circle
    cout << "Input your radius here: ";
    double radius;
    cin >> radius;
    const double area = M_PI * pow(radius, 2);
    cout << "Area of the circle is: " << area << endl;

    //TODO 58:31
    return 0;
}
