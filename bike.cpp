#include "bike.h"
#include "Resources.h"


const float movementSpeed = 200.0f;

void bike::Update(float deltaTime)
{
	float move = movementSpeed;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
		move *= 2;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		position.x += move * deltaTime;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		position.x -= move * deltaTime;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		position.y -= move * deltaTime;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		position.y += move * deltaTime;
}

void bike::Render(Renderer& renderer)
{    
	renderer.Draw(Resources::textures["frame_0.png"], position, 
		sf::Vector2f(64.f,64.0f));
}
