#pragma once
#include <SFML/Graphics.hpp>

class Renderer
{
public:
	/*Renderer::Renderer(sf::RenderTarget& target);*/
	Renderer(sf::RenderTarget& target);
	
	void Draw(const sf::Texture& texture, const sf::Vector2f& postion,
		const sf::Vector2f& size);

private:
	sf::Sprite sprite{};
	sf::RenderTarget& target;
};

