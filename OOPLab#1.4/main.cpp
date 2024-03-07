#include "IntVector.h"
#include <iostream>

int main() {
    int choice;
    int size;

    std::cout << "Enter the size of the vector: ";
    std::cin >> size;

    IntVector vector1(size);

    do {
        std::cout << "\nMenu:\n"
            << "1. Read vector\n"
            << "2. Display vector\n"
            << "3. Add vectors\n"
            << "4. Minus vectors\n"
            << "5. Scalar multiply vector\n"
            << "6. Scalar divide vector\n"
            << "0. Exit\n"
            << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            vector1.Read();
            break;
        case 2:
            vector1.Display();
            break;
        case 3: {
            IntVector vector2(vector1.GetSize());
            vector2.Read();
            vector1.Add(vector2);
            std::cout << "Vectors added.\n";
            break;
        }
        case 4: {
            IntVector vector2(vector1.GetSize());
            vector2.Read();
            vector1.Subtract(vector2);
            std::cout << "Vectors subtracted.\n";
            break;
        }
        case 5: {
            int scalar;
            std::cout << "Enter scalar: ";
            std::cin >> scalar;
            vector1.Multiply(scalar);
            std::cout << "Vector multiplied by scalar.\n";
            break;
        }
        case 6: {
            int scalar;
            std::cout << "Enter scalar: ";
            std::cin >> scalar;
            vector1.Divide(scalar);
            std::cout << "Vector divided by scalar.\n";
            break;
        }
        case 0:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (choice != 0);

    return 0;
}
