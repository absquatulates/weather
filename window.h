#pragma once

#include <SFML/Graphics.hpp>
#include <string>

class Window
{
public:
    Window(std::string const& title, unsigned width, unsigned height);
    void start();

private:
    void handleEvents(sf::Event e);
    void delay(sf::Clock clk);

private:
    sf::RenderWindow sfWindow{};
    bool running{};

};