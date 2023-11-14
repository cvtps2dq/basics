//
// Created by ggkos on 11/14/2023.
//

#ifndef BASICS_BOX_H
#define BASICS_BOX_H


#include <string>

class Box {
private:
    int dimX;
    int dimY;
    int dimZ;
    int weight;
    int durability;
    std::string name;
    std::string material;
    std::string desc;
public:
    Box(int dimX, int dimY, int dimZ, int weight, int durability, std::string name, std::string material,
        std::string desc);

    virtual ~Box();

public:
    [[nodiscard]] int getDimX() const;

    void setDimX(int dimX);

    [[nodiscard]] int getDimY() const;

    void setDimY(int dimY);

    [[nodiscard]] int getDimZ() const;

    void setDimZ(int dimZ);

    [[nodiscard]] int getWeight() const;

    void setWeight(int weight);

    [[nodiscard]] int getDurability() const;

    void setDurability(int durability);

    [[nodiscard]] const std::string &getName() const;

    void setName(const std::string &name);

    [[nodiscard]] const std::string &getMaterial() const;

    void setMaterial(const std::string &material);

    [[nodiscard]] const std::string &getDesc() const;

    void setDesc(const std::string &desc);

};


#endif //BASICS_BOX_H
