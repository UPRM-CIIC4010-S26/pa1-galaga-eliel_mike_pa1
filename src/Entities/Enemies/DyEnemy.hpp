#pragma once
#include "Enemy.hpp"

class DyEnemy : public Enemy {
    private: 
        float angle = 135;
        float aimAngle = 225;
        bool loop = false;
         Rectangle spriteRectangle = Rectangle{2, 128, 13, 14};

    public:
        DyEnemy(float x, float y) : Enemy(x, y) { 
            this->cooldown = GetRandomValue(90, 300);
            this->health = 1; 
            
               if (GetRandomValue(0, 1) == 0) {
            this->spriteRectangle = Rectangle{2, 128, 13, 14};
        } else {
            this->spriteRectangle = Rectangle{2, 147, 13, 13}; //Cambie el sprite para que no sean iguales -Mike
        }
       
        }


        void draw() override;
        void update(std::pair<float, float> pos, HitBox target) override;
        void attack(HitBox target) override;
};