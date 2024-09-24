#include "window.h"

/**
 * Constructor
 */
Window::Window(std::string const& title, unsigned width, unsigned height)
    : sfWindow{sf::VideoMode{width, height}, title}, running{true}
{}


//--------PUBLIC--------//

/**
 * Starts the program
 * runs the main loop
 */
void Window::start()
{
    sf::Clock clk{};
    sf::Event e;

    while (running)
    {
        handleEvents(e);
        
        sfWindow.clear({0, 150, 255});

        sfWindow.display();

        delay(clk);
    }
}


//--------PRIVATE--------//

/**
 * Handles events att current state
 * Closes the program if window is closed
 */
void Window::handleEvents(sf::Event e)
{
    while (sfWindow.pollEvent(e))
    {
        if (e.type == sf::Event::Closed)
            running = false;
    }
}

/**
 * Delay
 */
void Window::delay(sf::Clock clk)
{
    sf::sleep(sf::milliseconds(1000.0/60.0) - clk.getElapsedTime());
    clk.restart();
}