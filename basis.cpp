#include <iostream>

enum class Furniture {
    BOOKSHELF, CHAIR, TABLE, BENCH, CHEST, CMPTR
};


class Settings {
public:
    Furniture type;
    u_int32_t id;
    float height;
    float width;
    float depth;
    Settings(){}
    Settings(Furniture t, float h, float w, float d, u_int32_t i){
        type = t;
        height = h;
        width = w;
        depth = d;
        id = i;
    }
};
class Table {
public:
    Table(float h, float w, float d, u_int32_t i): settings(Settings(Furniture::TABLE, h, w, d, i)) {}
   
    Table(Settings s){
        settings = s;
    }
    Settings settings;
    std::string material;
};
class Chair {
public:
    Chair(float h, float w, float d, u_int32_t i): settings(Settings(Furniture::CHAIR, h, w, d, i)) {}
   
    Chair(Settings s){
        settings = s;
    }
    Settings settings;
    std::string material;
};
class Computer {
public:
    Computer(float h, float w, float d, u_int32_t i): settings(Settings(Furniture::CMPTR, h, w, d, i)) {}
   
    Computer(Settings s){
        settings = s;
    }
    Settings settings;
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
    Screen(float h, float w, float d, u_int32_t i): settings(Settings(Furniture::CMPTR, h, w, d, i)) {}
   
    Screen(Settings s){
        settings = s;
    }
    uint16_t scr_resX = 0;
    uint16_t scr_resy = 0;
    Settings settings;
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
    
}