#pragma once

#include "Game.h"

class TextureManager {

public:
    static SDL_Texture* Loadtexture(const char* texture, SDL_Renderer* ren);
};