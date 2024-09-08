#include <stdio.h>
#include <math.h>

// defining PI
#define PI 3.14159

// helper function for repeating coordinates
int pointsOutput (double x1, double y1, double x2, double y2) {
    
    printf("Point #1 entered: x1 = %.1lf; y1 = %.1lf \n", x1, y1);
    
    printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf \n", x2, y2);
    
    return 0;
}


// calculates the distance
double calculateDistance (double x1, double y1, double x2, double y2) {
    
    double distance = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    return distance;
}

// calculates the perimeter
double calculatePerimeter (double x1, double y1, double x2, double y2) {
   double diameter = calculateDistance(x1, y1, x2, y2);
   double radius = (diameter/2);
   printf("The distance between the two points is: %.1lf  \n", diameter);
   printf("The radius between the two points is: %.1lf  \n", radius);

   double perimeter = 2 * PI * radius;
   printf("The perimeter of the city encompassed by your requst is: %.1lf \n", perimeter);
   
    return perimeter;
}

// calculates the area
double calculateArea (double x1, double y1, double x2, double y2) {
    double diameter = calculateDistance(x1, y1, x2, y2);
    double area = (PI * (pow(diameter, 2)))/4;
    printf("The area of the city encompassed by your request is: %.1lf \n", area);
    return area;
}

// calculates the width
double calculateWidth (double x1, double y1, double x2, double y2) {
    double width = calculateDistance(x1, y1, x2, y2);
    printf("The width of the city encompassed by your request is: %.1lf \n", width);
    return width;
}

// calculates the height
double calculateHeight (double x1, double y1, double x2, double y2) {
    double height = calculateDistance(x1, y1, x2, y2);
    printf("The height of the city encompassed by your request is: %.1lf \n", height);
    return height;
}


// double askForUserInput() {
//     return 0;
// }


// asks for x1 y1 and x2 y2 and then will use those values to display the calculated results
int main(int argc, char **argv) {


    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;

    // (x1,y1)
    printf("What is your x1 coordinate: \n");
    scanf(" %lf", &x1);
    printf("What is your y1 coordinate: \n");
    scanf(" %lf", &y1);
    
    // (x2,y2)
    printf("What is your x2 coordinate: \n");
    scanf(" %lf", &x2);
    printf("What is your y2 coordinate: \n");
    scanf(" %lf", &y2);
    
    pointsOutput(x1, y1, x2, y2);
    calculatePerimeter(x1, y1, x2, y2);
    calculateArea(x1, y1, x2, y2);
    calculateWidth(x1, y1, x2, y2);
    calculateHeight(x1, y1, x2, y2);
    
    return 0;
}