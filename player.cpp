#include <iostream>
#include "player.h"
#include "utilities.h"
void player::printInfo() const {
    printPlayerInfo(m_name,m_level,m_force,m_hp,m_coins );
}
player& player::heal(int heal) {
    if ((m_hp + heal) > m_maxHp) {
        m_hp = m_maxHp;
        return *this;
    }
    m_hp += heal;
    return *this;
}
    bool player::isKnockedOut() const{
        if(m_hp==0){
            return true;
        }
        return false;
    }
player& player::addCoins(int coin){
    m_coins+=coin;
}
int player::getAttackStrength() const{
    return (m_level+m_force);
}