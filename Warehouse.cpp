#include <iostream>
using namespace std;

struct inventory {
    string name;
    int quantity;
    int price;
};

int main() {
    struct inventory obj[100]; 
    int n;

    cout << "Enter the number of items in the inventory: ";
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        cout << "Enter the name of the item: ";
        getline(cin, obj[i].name);
        cout << "Enter the quantity of the item: ";
        cin >> obj[i].quantity;
        cout << "Enter the price of the item: ";
        cin >> obj[i].price;
        cin.ignore(); 
    }

    int choice;
    cout << "\nEnter the operation you want to perform:" << endl;
    cout << "1. Add Stock" << endl;
    cout << "2. View Stock" << endl;
    cout << "3. Delete Stock" << endl;
    cout << "4. Update Stock" << endl;
    cin >> choice;
    cin.ignore(); 

    switch (choice) {
        case 1: {
            int m;
            cout << "Enter the number of items you want to add: ";
            cin >> m;
            cin.ignore();

            for (int i = n; i < n + m; i++) {
                cout << "Enter the name of the item: ";
                getline(cin, obj[i].name);
                cout << "Enter the quantity of the item: ";
                cin >> obj[i].quantity;
                cout << "Enter the price of the item: ";
                cin >> obj[i].price;
                cin.ignore(); 
            }
            n += m; 
            break;
        }
        case 2: {
            if (n == 0) {
                cout << "Inventory is empty!" << endl;
            } else {
                cout << "\nInventory List:\n";
                for (int i = 0; i < n; i++) {
                    cout << "Name: " << obj[i].name << endl;
                    cout << "Quantity: " << obj[i].quantity << endl;
                    cout << "Price: " << obj[i].price << endl;
                    cout << "----------------------" << endl;
                }
            }
            break;
        }
        case 3: {
            cout << "Enter the name of the item you want to delete: ";
            string del;
            getline(cin, del);

            bool found = false;
            for (int i = 0; i < n; i++) {
                if (obj[i].name == del) {
                    for (int j = i; j < n - 1; j++) {
                        obj[j] = obj[j + 1];
                    }
                    n--;
                    found = true;
                    cout << "Item deleted successfully.\n";
                    break;
                }
            }
            if (!found) cout << "Item not found!\n";
            break;
        }
        case 4: {
            cout << "Enter the name of the item you want to update: ";
            string update;
            getline(cin, update);

            bool found = false;
            for (int i = 0; i < n; i++) {
                if (obj[i].name == update) {
                    cout << "Enter the new quantity of the item: ";
                    cin >> obj[i].quantity;
                    cout << "Enter the new price of the item: ";
                    cin >> obj[i].price;
                    cin.ignore();
                    found = true;
                    cout << "Item updated successfully.\n";
                    break;
                }
            }
            if (!found) cout << "Item not found!\n";
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
