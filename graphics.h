/*
 * Graphics Manager
 * A simple abstraction to gsKit with helper functions.
 */

#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <tamtypes.h>
#include "gsKit.h"
#include "dmaKit.h"
#include "gsToolkit.h"

typedef enum { BLACK, WHITE, RED, GREEN, BLUE, YELLOW } graphicsColor_t;

int initGraphicsMan();

// Draw text at (x,y) with a color
void graphicsDrawText(int x, int y, const char *txt, graphicsColor_t color);
// Draw transparent box to go behind text for use in a popup menu (not used)
void graphicsDrawMiniMenuBox(int xsize, int ysize);
// Draw loading bar at (x,y). Progress must be within range [0.0, 1.0].
void graphicsDrawLoadingBar(int x, int y, float progress);
// Draw main menu graphics with activeItem being highlighted
void graphicsDrawMainMenu(int activeItem);
// Draw about/credits screen
void graphicsDrawAboutPage();
// Draw selection pointer at (x,y)
void graphicsDrawPointer(int x, int y);

// Cover the entire screen with black
void graphicsClearScreen(int r, int g, int b);
// Draw the background graphic
void graphicsDrawBackground();

// Wait for the next vsync, then render.
void graphicsRenderNow();
// Render graphics only every 1/60 second (60 FPS)
void graphicsRender();


#endif
