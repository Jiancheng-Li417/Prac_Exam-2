
#ifndef ASSET_H  
#define ASSET_H  

#include <string>  

class Asset {
private:
    std::string product_type;
    int value;

public:  
    Asset();
 
    Asset(int value, std::string product_type);
 
    std::string get_product_type() const;
    int get_value() const;

    ~Asset();
};

#endif