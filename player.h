//
// Created by Yosef Sabbah on 08/05/2022.
//

#ifndef PLAYER_PLAYER_H
#define PLAYER_PLAYER_H
class player{
    const char * m_name;
    int m_force;
    int m_hp;
    int m_level;
    unsigned int m_coins;
    int m_maxHp;
public:
    player(const char*Name,int Force=5,int HP=100);
    ~player()=default;
    player(const player&)=default;
    void printInfo() const;
    player& levelUp();
    int getLevel()const;
    player& buff(int buff);
    player& heal(int heal);
    player& damage(int damage);
    bool isKnockedOut() const;
    player& addCoins(int coin);
    bool pay(int amount);
    int fetAttackStrength() const;





};
#endif //PLAYER_PLAYER_H
