int main()
{
 //intro prompt
 std::cout << "Welcome to the Grocery List Manager!\n";
 std::cout << "Enter grocery item (type 'done' as UPC to stop):\n\n";
 // vector of pointers
 std::vector<std::unique_ptr<GroceryItem>> groceryList;

//loop
while (true)
{
    std::string productName, brandName, upcCode;
    double price;

    std::cout << "UPC Code: ";
    std::getline(std::cin, upcCode);

    if (upcCode == "done") break;

    std::cout << "Brand Name: ";
    std::getLine(std::cin, brandName);

    std::cout << "Product Name: ";
    std::getLine(std::cin, productName);

    std::cout << "Price: ";
    std::cin >> price;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n')


}

//for loop with reverse constant iterators
for (std::vector<std::unique_ptr<GroceryItem>>::const_reverse_iterator it = groceryList.crbegin(); 
     it != groceryList.crend(); 
     ++it)
{
    std::cout << **it << '\n';  // *it is a unique_ptr<GroceryItem>, so **it gives the object
}
// Create GroceryItem and store in vector
        groceryList.push_back(std::make_unique<GroceryItem>(
            productName, brandName, upcCode, price));
}

    // Output in reverse using const_reverse_iterator
std::cout << "\nGrocery List (most recent first):\n";
for (auto it = groceryList.crbegin(); it != groceryList.crend(); ++it)
{
    std::cout << **it << "\n";  // Dereference unique_ptr
}

    return 0;
}
