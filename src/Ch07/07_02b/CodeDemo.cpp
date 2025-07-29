// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Inventory{
public:
    Inventory() {
        capacity = 10;
        items = new std::vector<std::string>();
    }
    Inventory(int cap) {
        this->capacity = capacity;
        items = new std::vector<std::string>();
    }
    ~Inventory() {
        delete items;
    }
    void addItem(const std::string& item) {
        if (items->size() < capacity) {
            items->push_back(item);
        } else {
            std::cout << "Inventory is full!" << std::endl;
        }
    }
    void removeItem(const std::string& item){
        auto it = std::find(items->begin(), items->end(), item);
        if (it != items->end())
            items->erase(it);
        else 
            std::cout << "Item not found in inventory!" << std::endl;
    }

    std::string getItem(int index) const {
        if (index <= 0 && index < items->size()) 
            return (*items)[index];
        else 
            return "Invalid index!";
    }

    int getItemCount() const {
        return items->size();
    }
    void displayInvetory() const{
        std::cout << "Inventory Items:";
        for (size_t i =0; i < items->size(); ++i) {
            std::cout << " " << (*items)[i];
            if (i < items->size() -1) std::cout << ",";
        }
        std::cout << std::endl;
    }
private:
    std::vector<std::string> *items;
    int capacity; // Maximum number of items allowed
};

int main(){
    Inventory myInventory(5);
    myInventory.addItem("Sword");
    myInventory.addItem("Shield");
    myInventory.addItem("Potion");
    myInventory.addItem("Bow");
    myInventory.addItem("Arrow");

    myInventory.displayInvetory();

    myInventory.addItem("Helmet"); // Should print "Inventory is full!"
    myInventory.removeItem("Potion");
    std::cout << "After removing Potion:" << myInventory.getItemCount() << " items" << std::endl;

    std::cout << "Item at index 2: " << myInventory.getItem(2) << std::endl;

    myInventory.displayInvetory();
    
    std::cout << std::endl << std::endl;
    return 0;
}
