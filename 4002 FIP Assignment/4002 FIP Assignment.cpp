#include <iostream>
#include <iomanip>

using namespace std;

// Structure to store menu item details
struct MenuItem {
    int itemNo;
    string name;
    double price;
};

// Function prototypes
void getData(MenuItem menuList[], int& size);
void showMenu(const MenuItem menuList[], int size);
void printCheck(const MenuItem menuList[], int size, int selectedItems[], int itemCount);

int main() {
    const int MAX_ITEMS = 8;
    MenuItem menuList[MAX_ITEMS];
    int selectedItems[MAX_ITEMS];
    int size = 0, itemCount = 0;
    getData(menuList, size);
    int choice;

    do {
        cout << "\n******** Welcome to Meal Hut ********" << endl;
        cout << "       Breakfast Billing System" << endl;
        cout << "1. Show Menu" << endl;
        cout << "2. Order Items" << endl;
        cout << "3. Print Bill" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            showMenu(menuList, size);
            break;
        case 2: {
            int itemNo;
            int tempCount = 0; 
            cout << "Enter item numbers to order (Please Enter -1 to stop):" << endl;
            while (true) {
                cin >> itemNo;
                if (itemNo == -1) break;
                bool valid = false;
                for (int i = 0; i < size; i++) {
                    if (menuList[i].itemNo == itemNo) {
                        valid = true;
                        break;
                    }
                }
                if (valid) {
                    selectedItems[tempCount++] = itemNo;
                }
                else {
                    cout << "Invalid item number. Try again." << endl;
                }
            }
            if (tempCount > 0) {
                itemCount = tempCount; 
            }
            else {
                cout << "No items selected!" << endl;
            }
            break;
        }
        case 3:
            if (itemCount == 0) {
                cout << "No items selected!" << endl;
            }
            else {
                printCheck(menuList, size, selectedItems, itemCount);
            }
            break;
        case 4:
            cout << "Thank you for choosing us! Have a great day!" << endl;
            break;
        default:
            cout << "Invalid choice, try again!" << endl;
        }
    } while (choice != 4);

    return 0;
}

// Function to load menu data
void getData(MenuItem menuList[], int& size) {
    menuList[0] = { 111, " Plain Egg", 1.45 };
    menuList[1] = { 112, " Bacon and Egg", 2.45 };
    menuList[2] = { 113, " Muffin\t", 0.99 };
    menuList[3] = { 114, " French Toast", 1.99 };
    menuList[4] = { 115, " Fruit Basket", 2.49 };
    menuList[5] = { 116, " Cereal\t", 0.69 };
    menuList[6] = { 117, " Coffee\t", 0.50 };
    menuList[7] = { 118, " Tea\t", 0.75 };
    size = 8;
}

// Function to display menu items
void showMenu(const MenuItem menuList[], int size) {
    cout << "\n******** Welcome to Meal Hut ********" << endl;
    cout << "       Breakfast Billing System" << endl;
    cout << "Item No   Menu Item      Price" << endl;
    cout << "-----------------------------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << menuList[i].itemNo << "\t" << menuList[i].name << "\t$" << menuList[i].price << endl;
    }
}

// Function to calculate and print the bill
void printCheck(const MenuItem menuList[], int size, int selectedItems[], int itemCount) {
    double total = 0.0;
    cout << "\n******** Meal Hut Receipt ********" << endl;
    cout << "Item No   Menu Item      Price" << endl;
    cout << "-----------------------------------" << endl;
    for (int i = 0; i < itemCount; i++) {
        for (int j = 0; j < size; j++) {
            if (menuList[j].itemNo == selectedItems[i]) {
                cout << menuList[j].itemNo << "\t" << menuList[j].name << "\t$" << menuList[j].price << endl;
                total += menuList[j].price;
            }
        }
    }
    double tax = total * 0.05;
    double amountDue = total + tax;
    cout << "-----------------------------------" << endl;
    cout << "Tax: " << "\t\t\t$" << tax << endl;
    cout << "Amount Due: " << "\t\t$" << amountDue << endl;
}
