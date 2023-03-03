//
// Created by coren on 02/03/2023.
//

#ifndef CUB_3D_DISPLAY_H
#define CUB_3D_DISPLAY_H

#include "main.h"
#include "game.h"

void displayMinimap(SDL_Renderer *renderer, struct Settings settings, struct Player player);
void displayPlayerOnMinimap(SDL_Renderer *renderer, struct Settings settings, struct Player player);
void displayScreen(SDL_Renderer *renderer, struct Settings settings, struct Player player);

#endif //CUB_3D_DISPLAY_H
