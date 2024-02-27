#include <iostream>
#include <string>
enum class TypeFurniture{
    TABLE,
    CHAIR,
    SHELF
};

class Settings {
    public:
    TypeFurniture type;
    int hight;
    int width;
    Settings(){}
    Settings(TypeFurniture t, int h, int w){
        type = t;
        hight = h;
        width = w;
    }
   
};

class Table {
public:
    Table(int h, int w): settings(Settings(TypeFurniture::TABLE, h, w)) {}
   
    Table(Settings s){
        settings = s;
    }
    Settings settings;
    std::string material;
};
class Chair {
public:
    Settings settings;
    std::string material;
};
class Computer {
public:
    int number;
    bool power_check_and_print (bool pwr){
    if (pwr == 1){
        return true;
    }
    else {
        return false;
    }
   
   
    }
};
class Screen {
public:
    int number;
    int hight;
    int width;
    int scr_resolution;
};

int main(){
    bool pwr;
    Chair chair;
    Screen scr;
    Computer comp;
    std::cout<<"Is there power?"<<std::endl;
    std::cin>>pwr;
    if (comp.power_check_and_print(pwr)){
        std::cout<<"PC # is ready to work"<<std::endl;
        std::cout<<"Monitor # is ready to work"<<std::endl;
    }
    else {
        std::cout<<"This PC isn't ready to work"<<std::endl;
    }
   
   
    //int registred[];
    //int not_registred[];
   
};