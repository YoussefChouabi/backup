#pragma once

#include <SFML/Graphics.hpp>
#include "renderer.h"

class bike
{
public:
	void Update(float deltaTime);
	void Render(Renderer& renderer);

	sf::Vector2f position{};
	float angle{};
};

