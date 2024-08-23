#include <iostream>  
#include "AssetPortfolio.h"  
#include <string>

int main() {
    AssetPortfolio portfolio(3);

    Asset asset1(100, "Stock");
    Asset asset2(200, "Bond");
    Asset asset3(300, "Stock");

    std::cout << "Adding asset1: " << (portfolio.add_asset(asset1) ? "Success" : "Failed") << std::endl;
    std::cout << "Adding asset2: " << (portfolio.add_asset(asset2) ? "Success" : "Failed") << std::endl;
    std::cout << "Adding asset3: " << (portfolio.add_asset(asset3) ? "Success" : "Failed") << std::endl;

    // Make Attempt 4, should failed
    Asset asset4(400, "Mutual Fund");
    std::cout << "Adding asset4: " << (portfolio.add_asset(asset4) ? "Success" : "Failed") << std::endl;

   
    std::cout << "Has Bond: " << (portfolio.has_asset("Bond") ? "Yes" : "No") << std::endl;
    std::cout << "Has Mutual Fund: " << (portfolio.has_asset("Mutual Fund") ? "Yes" : "No") << std::endl;

    return 0;

}