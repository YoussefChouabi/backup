
#include "game.h"
#include "Resources.h"
#include "bike.h"
#include "Map.h" 



#include <filesystem>

Map map(16.0f);
Camera camera(320.0f);
bike player;



void Begin(const sf::Window& window)
{
	for (auto& file : std::filesystem::directory_iterator("./resources/textures/"))
	{
		if (file.is_regular_file() && (file.path().extension() == ".png" || file.path().extension() == ".jpg"))
		{
			Resources::textures[file.path().filename().string()].loadFromFile(file.path().string());
		}
	}
	
	sf::Image image;
	image.loadFromFile("ss.png");
	player.position = map.CreateFromImage(image);
}
void Update(float deltaTime)
{
	player.Update(deltaTime);
	camera.position = player.position;
}

void Render(Renderer& renderer)
{
	map.Draw(renderer);
	player.Render(renderer);
}