#include <iostream>

class Parameters {
public:  
    u_int32_t id;
    float height;
    float width;
    float depth;
    Parameters(){}
    Parameters(float h, float w, float d, u_int32_t i){
        height = h;
        width = w;
        depth = d;
        id = i;
    }
};
class Table {
public:
    Parameters parameters;
    std::string material;
    
};
class Chair {
public:
    Parameters parameters;
    std::string material;
    
};
class Computer {
public:
    Parameters parameters;
    bool power_check (char pwr){
        if (pwr == 'Y' || pwr == 'y'){
            return true;
        }
        else {
            return false;
        }
    }
};
class Screen {
public:
    Parameters parameters;
    uint16_t scr_resX = 0;
    uint16_t scr_resy = 0;
    bool power_check (char pwr){
        if (pwr == 'Y' || pwr == 'y'){
            return true;
        }
        else {
            return false;
        }
    }
};


class unregistered {
    public:

        char name[16] = "";
        bool isPresent = false;
        float height = 0;
        float width = 0;
};

int main() {
    bool pwr;
    Chair chair;
    Screen scr;
    Computer comp;
    std::cout<<"Is there sufficient power?"<<std::endl;
    std::cin>>pwr;
    if (comp.power_check(pwr)){
        std::cout<<"PC # is ready to work"<<std::endl;
        std::cout<<"Monitor # is ready to work"<<std::endl;
    }
    else {
        std::cout<<"This PC isn't ready to work"<<std::endl;
    }
    
}