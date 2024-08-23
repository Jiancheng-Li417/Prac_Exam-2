#include <iostream>  
#include "Asset.h" 
#include <string>

int main() {
    Asset asset1;
    std::cout << "Default Asset Type: " << asset1.get_product_type() << std::endl;
    std::cout << "Default Asset Value: " << asset1.get_value() << std::endl;
 
    Asset asset2(1250, "Stock");
    std::cout << "Asset Type: " << asset2.get_product_type() << std::endl;
    std::cout << "Asset Value: " << asset2.get_value() << std::endl;

    return 0;
}