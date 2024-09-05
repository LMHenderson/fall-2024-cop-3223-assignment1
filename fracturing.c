//********************************************************
// fracturing.c
// Author: Luke Henderson
// Author UCFID: 5617425
// Class: COP 3223, Professor Parra
// Purpose: Calculate various parts of a circle
// Input: x and y values of two points
//
// Output: The points that were entered and various qualities of the circle(s)
// //********************************************************


// Header file for input output functions
#include <stdio.h>
#include <math.h>

// define pi for further functions
#define PI 3.14159;

// Function to get the user's input
double askForUserInput() {
    // Assign variable to store user input
    double user_input;

    // Get the user's input and store it in the variable
    scanf(" %lf", &user_input);

    // Return the user's input
    return user_input;
}

// Function that will get the user's input points and do the calculations to find the distance between the two
// This is the one that will be called the most from the other functions
double calculateDiameter() {
    // Ask the user to enter their point values and assign them to variables
    printf("Enter x1: ");
    double x1 = askForUserInput();
    printf("Enter x2: ");
    double x2 = askForUserInput();
    printf("Enter y1: ");
    double y1 = askForUserInput();
    printf("Enter y2: ");
    double y2 = askForUserInput();

    // Newline for cleanliness
    printf("\n");
    
    // Print the point values given
    printf("Point #1 entered: x1 = %lf y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf y2 = %lf\n", x2, y2);

    // Do the math for the diameter and return it
    double diameter = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return diameter;
}

// Function that will print and return the distance between two points
double calculateDistance() {
    // Ask the user for the point values and get the value for the distance
    double distance = calculateDiameter();

    // Print the distance to the command line
    printf("The distance between the two points is: %lf\n\n", distance);

    // Return the distance value
    return distance;
}

// Function that will calculate and print the perimeter of a circle from two points
double calculatePerimeter() {
    // Get the diameter of the circle and do the math to find the perimeter (circumference)
    double diameter = calculateDiameter();
    double perimeter = diameter * PI;

    // Print the perimeter of the city to the command line
    printf("The perimeter of the city encompassed by your request is: %lf\n\n", perimeter);

    // Assign a variable to the difficulty of creating this function
    // Assigned it a 2.0 because I had a lot of difficulty with this before the revisions to the pdf due to restrictions/wording thereof
    double difficulty = 2.0;
    return difficulty;
}

// Function that will calculate and print the area of a circle from two points
double calculateArea() {
    // Get the diameter of the circle and do the math to fine the area
    double diameter = calculateDiameter();
    double radius = diameter / 2;
    double area = pow(radius, 2) * PI;

    // Print the area of the city to the command line
    printf("The area of the city encompassed by your request is: %lf\n\n", area);

    // Assign a variable to the difficulty of creating this function
    // Assigned it a 2.0 for the same reasoning as the perimeter function
    // Had troubles with creating it before the revisions to the pdf due to the restrictions/wording thereof
    double difficulty = 2.0;
    return difficulty;
}

// Function that will print the width of a circle from two points
double calculateWidth() {
    // Get the diameter/distance between the two points, which is the same as the width and print it
    double width = calculateDiameter();
    printf("The width of the city encompassed by your request is: %lf\n\n", width);

    // Assign a variable with the difficulty of completing this function and return it
    // Assigned it a 1.0 because it is simply reusing earlier functions
    double difficulty = 1.0;
    return difficulty;
}

// Function that will print the height of a circle from two points
double calculateHeight() {
    // Get the diameter/distance between the two points, which is the same as the height and print it
    double height = calculateDiameter();
    printf("The height of the city encompassed by your request is: %lf\n\n", height);

    // Assign a variable with the difficulty of completing this function and return it
    // Assigned it a 1.0 because it is simply reusing earlier functions
    double difficulty = 1.0;
    return difficulty;
}

// main function
int main(int argc, char **argv) {
    // Call the functions required for the assignment
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    // Return zero
    return 0;
}