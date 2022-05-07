#include <iostream>
#include "player.h"


player::player(const char*Name,int Force,int HP):
m_name(Name),m_force(Force),m_maxHp(HP),m_hp(HP),m_coins(0),m_level(1)
{}
player& player::levelUp() {
    if(m_level==10){
        return *this;
    }
    m_level++;
    return *this;
}
int player::getLevel() const {
    return m_level;
}
player& player::buff(int buff) {
    m_force+=buff;
    return *this;
}
player& player::damage(int damage) {
    if((m_hp-damage)<0){
        m_hp=0;
    } else{
        m_hp-=damage;
    }
    return *this;
}
bool player::pay(int amount) {
    if(m_coins-amount<0){
        return false;
    } else{
        m_coins-=amount;
        return true;
    }

}