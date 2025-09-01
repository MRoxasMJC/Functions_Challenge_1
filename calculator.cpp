#include <iostream>
#include <cmath>
#include <limits>


double calculateArea(const double radius) { // calculate the area of a **circle**
    return M_PI * radius * radius;    // PI * r^2
} 

double calculateArea(const double length, const double height) { // calculate the area of a **rectangle**
    return length * height ;
} 

double calculatePerimeter(const double radius) { // calculate circumference of **circle**
    return 2 * M_PI * radius;
}

double calculatePerimeter(const double length, const double height) { // calculate circumference of **rectangle**
    return (2 * length) + (2 * height) ;
}

void PrintOptions() {
    std::cout << "CHOOSE YOUR CALCULATOR" << std::endl;
    std::cout << "Enter 1 for: Area of Circle" << std::endl;
    std::cout << "Enter 2 for: Circumference of Circle" << std::endl;
    std::cout << "Enter 3 for: Area of a Rectangle" << std::endl;
    std::cout << "Enter 4 for: Perimeter of a Rectangle" << std::endl;
    std::cout << "Enter 5 to quit" << std::endl;
        
}

int main() {
    int choice;
    double radius;
    double length;
    double height; 
    
    do {
        
        PrintOptions();
        
        std::cin >> choice;
        
        if (std::cin.fail()) { // check if the user typed something that is not an integer
            std::cin.clear(); // remove the error flag so we can keep using cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove everything in the input buffer 
        }
        
        switch (choice) { 
            case 1: // area of circle
                std::cout << "--Enter Radius: " ;
                std::cin >> radius;
                std::cout << "--Result: " << calculateArea(radius) << std::endl;
                break;
            case 2: // circumference of circle
                std::cout << "--Enter Radius: " ;
                std::cin >> radius;
                std::cout << "--Result: " << calculatePerimeter(radius) << std::endl;
                break;
            case 3: // area of rectangle
                std::cout << "Enter length and height: " ;
                std::cin >> length;
                std::cin >> height;
                std::cout << "--Result: " << calculateArea(length, height) << std::endl;
                break;
            case 4: // perimeter of rectangle
                std::cout << "Enter length and height: " ;
                std::cin >> length;
                std::cin >> height;
                std::cout << "--Result: " << calculatePerimeter(length, height) << std::endl;
                break;
            case 5:
                break;
            default:
                std::cout << "Please choose from options 1 to 5" << std::endl;
                
        }
    } while (choice != 5);
    
    
    return 0;
}
        
