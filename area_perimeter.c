#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, side, length, width;
    float circle_area, circle_perimeter, square_area, square_perimeter, rectangle_area, rectangle_perimeter;

    // Calculate area and perimeter of circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circle_area = PI * radius * radius;
    circle_perimeter = 2 * PI * radius;

    // Calculate area and perimeter of square
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    square_area = side * side;
    square_perimeter = 4 * side;

    // Calculate area and perimeter of rectangle
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    rectangle_area = length * width;
    rectangle_perimeter = 2 * (length + width);

    // Print the results
    printf("\nCircle:\nArea = %.2f\nPerimeter = %.2f\n", circle_area, circle_perimeter);
    printf("\nSquare:\nArea = %.2f\nPerimeter = %.2f\n", square_area, square_perimeter);
    printf("\nRectangle:\nArea = %.2f\nPerimeter = %.2f\n", rectangle_area, rectangle_perimeter);

    return 0;
}