//
// Created by daniel on 1/3/20.
//

#include <json/value.h>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main(){

    std::ifstream people_file("people.json", std::ifstream::binary);

    json people;

    people_file >> people;

    std::cout << people << std::endl; //This will print the entire json object.

//The following lines will let you access the indexed objects.

    std::cout << people["Anna"] << std::endl; //Prints the value for "Anna"
    std::cout << people["Ben"] << std::endl; //Prints the value for "Ben"
    std::cout << people["Anna"]["profession"] << std::endl; //Prints the value corresponding to "profession" in the json for "Anna"


    std::string hola = people["Anna"]["age"].dump(-1);

    std::cout << hola << std::endl;
}
