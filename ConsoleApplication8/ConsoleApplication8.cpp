#include <iostream>
#include <string>

// Базовий клас для всіх монстрів
class Monster {
protected:
    std::string name;
    int health;

public:
    Monster(const std::string& monsterName, int monsterHealth)
        : name(monsterName), health(monsterHealth) {}

    virtual void printMonster() const {
        std::cout << "Monster: " << name << ", Health: " << health << std::endl;
    }
};

// Похідні класи для конкретних типів монстрів
class Orc : public Monster {
public:
    Orc(const std::string& orcName, int orcHealth)
        : Monster(orcName, orcHealth) {}

    void printMonster() const override {
        std::cout << "Orc ";
        Monster::printMonster();
    }
};

class Troll : public Monster {
public:
    Troll(const std::string& trollName, int trollHealth)
        : Monster(trollName, trollHealth) {}

    void printMonster() const override {
        std::cout << "Troll ";
        Monster::printMonster();
    }
};

class Zombie : public Monster {
public:
    Zombie(const std::string& zombieName, int zombieHealth)
        : Monster(zombieName, zombieHealth) {}

    void printMonster() const override {
        std::cout << "Zombie ";
        Monster::printMonster();
    }
};

class Goblin : public Monster {
public:
    Goblin(const std::string& goblinName, int goblinHealth)
        : Monster(goblinName, goblinHealth) {}

    void printMonster() const override {
        std::cout << "Goblin ";
        Monster::printMonster();
    }
};

class Witcher : public Monster {
public:
    Witcher(const std::string& witcherName, int witcherHealth)
        : Monster(witcherName, witcherHealth) {}

    void printMonster() const override {
        std::cout << "Witcher ";
        Monster::printMonster();
    }
};

int main() {
    // Оголошення монстрів за допомогою auto та decltype
    auto orc = Orc("Grunk", 80);
    decltype(orc) troll("Grog", 100);
    decltype(orc) zombie("Zed", 50);
    decltype(orc) goblin("Grim", 70);
    decltype(orc) witcher("Geralt", 150);

    // Виведення інформації про монстрів
    orc.printMonster();
    troll.printMonster();
    zombie.printMonster();
    goblin.printMonster();
    witcher.printMonster();

    return 0;
}
