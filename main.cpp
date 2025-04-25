#include <SFML/Graphics.hpp>
#include "game.h"
#include "camera.h"
#include "renderer.h"

                   
        
int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 900), "pikala");
    sf::Clock deltaclock;
    Renderer renderer(window);



    Begin(window);
    while (window.isOpen()) 
    {
        float deltaTime = deltaclock.restart().asSeconds();

        sf::Event event{};
        while(window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.setView(camera.GetView(window.getSize())) ;
        Update(deltaTime);

        window.clear(sf::Color(20,20,20));
        Render(renderer);

        window.display();
    }
    return 0;
}

