//#include <iostream>
//
//int main() {
//    int number;
//    int choice;
//
//    do {
//        std::cout << "Menu:" << std::endl;
//        std::cout << "1. Enter a number" << std::endl;
//        std::cout << "2. Count the number of digits" << std::endl;
//        std::cout << "3. Calculate the sum of digits" << std::endl;
//        std::cout << "4. Calculate the average of digits" << std::endl;
//        std::cout << "5. Count the number of zeros" << std::endl;
//        std::cout << "6. Quit" << std::endl;
//        std::cout << "Enter your choice: ";
//        std::cin >> choice;
//
//        switch (choice) {
//        case 1:
//            std::cout << "Enter a number: ";
//            std::cin >> number;
//            break;
//        case 2: {
//            int digitCount = 0;
//            int tempNumber = number;
//            while (tempNumber != 0) {
//                tempNumber /= 10;
//                digitCount++;
//            }
//            std::cout << "Number of digits: " << digitCount << std::endl;
//            break;
//        }
//        case 3: {
//            int digitSum = 0;
//            int tempNumber = number;
//            while (tempNumber != 0) {
//                digitSum += tempNumber % 10;
//                tempNumber /= 10;
//            }
//            std::cout << "Sum of digits: " << digitSum << std::endl;
//            break;
//        }
//        case 4: {
//            int digitSum = 0;
//            int digitCount = 0;
//            int tempNumber = number;
//            while (tempNumber != 0) {
//                digitSum += tempNumber % 10;
//                tempNumber /= 10;
//                digitCount++;
//            }
//            double digitAverage = static_cast<double>(digitSum) / digitCount;
//            std::cout << "Average of digits: " << digitAverage << std::endl;
//            break;
//        }
//        case 5: {
//            int zeroCount = 0;
//            int tempNumber = number;
//            while (tempNumber != 0) {
//                if (tempNumber % 10 == 0) {
//                    zeroCount++;
//                }
//                tempNumber /= 10;
//            }
//            std::cout << "Number of zeros: " << zeroCount << std::endl;
//            break;
//        }
//        case 6:
//            std::cout << "Goodbye!" << std::endl;
//            break;
//        default:
//            std::cout << "Invalid choice. Please try again." << std::endl;
//            break;
//        }
//
//        std::cout << std::endl;
//
//    } while (choice != 6);
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int cellSize;
//
//	cout << "Input cell size:\n";
//	cin >> cellSize;
//	for (int i = 0; i < 8; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (int m = 0; m < cellSize; m++)
//			{
//				for (int j = 0; j < 8; j++)
//				{
//					if (j % 2 == 0)
//					{
//						for (int k = 0; k < cellSize; k++)
//						{
//							cout << "*";
//						}
//					}
//					else
//					{
//						for (int k = 0; k < cellSize; k++)
//						{							
//								cout << "-";
//						}
//					}
//				}
//				cout << "\n";
//			}
//		}
//		else {
//			for (int m = 0; m < cellSize; m++)
//			{
//				for (int j = 0; j < 8; j++)
//				{
//					if (j % 2 == 0)
//					{
//						for (int k = 0; k < cellSize; k++)
//						{
//							cout << "-";
//						}
//					}
//					else
//					{
//						for (int k = 0; k < cellSize; k++)
//						{
//							cout << "*";
//						}
//					}
//				}
//				cout << "\n";
//			}
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <iomanip>
//
//struct MenuItem {
//    std::string name;
//    double price;
//};
//
//int main() {
//    int numPeople;
//    std::cout << "Enter the number of people in the order: ";
//    std::cin >> numPeople;
//
//    const int menuSize = 4;
//    MenuItem menu[menuSize] = {
//        { "Coffee", 40 },
//        { "Tea", 30 },
//        { "Croissant", 90 },
//        { "Muffin", 60 }
//    };
//
//    double totalCost = 0.0;
//
//    for (int i = 0; i < numPeople; ++i) {
//        std::cout << "Menu for person " << (i + 1) << ":" << std::endl;
//
//        int numItems;
//        std::cout << "Enter the number of items for person " << (i + 1) << ": ";
//        std::cin >> numItems;
//
//        double personCost = 0.0;
//
//        for (int j = 0; j < numItems; ++j) {
//            std::cout << "Item " << (j + 1) << ":" << std::endl;
//
//            int choice;
//            std::cout << "Choose an item from the menu:" << std::endl;
//
//            for (int k = 0; k < menuSize; ++k) {
//                std::cout << (k + 1) << ". " << menu[k].name << " - $" << std::fixed << std::setprecision(2) << menu[k].price << std::endl;
//            }
//
//            std::cout << "Enter your choice: ";
//            std::cin >> choice;
//
//            if (choice >= 1 && choice <= menuSize) {
//                personCost += menu[choice - 1].price;
//            }
//        }
//
//        totalCost += personCost;
//        std::cout << "Cost for person " << (i + 1) << ": $" << std::fixed << std::setprecision(2) << personCost << std::endl;
//        std::cout << std::endl;
//    }
//
//    std::cout << "Total cost for the order: $" << std::fixed << std::setprecision(2) << totalCost << std::endl;
//
//    return 0;
//}
