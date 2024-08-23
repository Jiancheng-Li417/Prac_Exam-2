#include "AssetPortfolio.h"  

AssetPortfolio::AssetPortfolio() : capacity(0) {}

AssetPortfolio::AssetPortfolio(int size) : capacity(size) {}
 
int AssetPortfolio::get_num_assets() const {
    return assets.size();
}

bool AssetPortfolio::has_asset(std::string product) const {
    for (const auto& asset : assets) {
        if (asset.get_product_type() == product) {
            return true;
        }
    }
    return false;
}

const std::vector<Asset>& AssetPortfolio::get_assets() const {
    return assets;
}
 
bool AssetPortfolio::add_asset(const Asset& new_asset) {
    if (assets.size() < capacity) {
        assets.push_back(new_asset);
        return true;
    }
    return false;
}

// Destructor  
AssetPortfolio::~AssetPortfolio() {}