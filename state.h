#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class State
{
public:
    virtual ~State() = default;
    virtual void update() = 0;
    virtual void handle(sf::Event e) = 0;
    virtual void render(sf::RenderTarget& target) = 0;
    virtual int getNextState() = 0;
    
private:

};