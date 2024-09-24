#pragma once

#include "state.h"

class MainState : public State
{
public:    
    void update();
    void handle(sf::Event e);
    void render(sf::RenderTarget& target);
    int getNextState();

private:
    
};
