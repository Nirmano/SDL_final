#include "Inclure_SDL.h"
#include "Game.h"

int main(int argc, char *argv[])
{
	//SDL_Application* game = new Game(600, 500);
	Game* game = new Game(800, 600); // game et non sdl_application car pas besoin du polymorphysme et
									// si sdl je dois placer gameloop en virtual m�me pure dans sdl app .h je peux ajouter des m�thodes dans Games sans les ajouter dans app sdl
	game->GameLoop();             // et si un objet vuet acc�der � une de ses m�thode, je devrai la placer dans sdlapp
	//delete game;                              // car seule la game aurait acc�s � ses m�thodes non virtuelles dans sdlapp
	return 0;
}
