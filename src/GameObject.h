#pragma once

#include "Game.h"

class GameObject {
public:
    GameObject(const char* texture_sheet, SDL_Renderer* ren, int x, int y);
    ~GameObject();
    void Update();
    void Render();

private:
    int xpos;
    int ypos;

    SDL_Texture* objTex;
    SDL_Rect srcRect, destRect;
    SDL_Renderer* renderer;
};