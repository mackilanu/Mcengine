#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char *texture_sheet, SDL_Renderer *ren, int x, int y)
{
    renderer = ren;
    objTex = TextureManager::Loadtexture(texture_sheet, ren);

    xpos = x;
    ypos = y;
}

void GameObject::Update()
{
    srcRect.h = 32;
    srcRect.w = 32;
    srcRect.x = 0;
    srcRect.y = 0;

    destRect.x = xpos;
    destRect.y = ypos;
    destRect.w = srcRect.w * 2;
    destRect.h = srcRect.h * 2;
}

void GameObject::Move(int event)
{
    switch (event)
    {
        case SDLK_LEFT:  xpos -= 10; break;

        case SDLK_RIGHT: xpos += 10; break;

        case SDLK_UP:    ypos -= 10; break;

        case SDLK_DOWN:  ypos += 10; break;
        default:
            std::cout << "Input not recognized\n";
            break;
    }
}

void GameObject::Render()
{
    SDL_RenderCopy(renderer, objTex, &srcRect, &destRect);
}

