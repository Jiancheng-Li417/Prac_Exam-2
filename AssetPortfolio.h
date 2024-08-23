#ifndef ASSETPORTFOLIO_H  
#define ASSETPORTFOLIO_H  

#include "Asset.h"  
#include <vector>  
#include <string>  

class AssetPortfolio {
private:
    std::vector<Asset> assets;
    int capacity;

public:
    AssetPortfolio();

    AssetPortfolio(int size);
  
    int get_num_assets() const;
  
    bool has_asset(std::string product) const;

    const std::vector<Asset>& get_assets() const;

    bool add_asset(const Asset& new_asset);

    ~AssetPortfolio();
};

#endif