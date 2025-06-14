#pragma once

#include <deque>
using std::deque;

//#define DEBUG_WITH_FULL_SNAKE

#include <raylib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

//#define AM_RAY_DEBUG

extern Color green;
extern Color darkGreen;

extern const int cellSize; 
extern const int cellCount;
extern const int offset;

extern bool ElementInDeque(Vector2 element, deque<Vector2> deque);

extern Color grey;
extern Color yellow;
extern const int gameScreenWidth;
extern const int gameScreenHeight;
extern bool exitWindow;
extern bool exitWindowRequested;
extern bool fullscreen;
extern const int minimizeOffset;
extern float borderOffsetWidth;
extern float borderOffsetHeight;