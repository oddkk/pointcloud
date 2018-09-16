#pragma once

struct WindowFrameInfo {
	struct {
		// Populate keybindings from keybindings.h
#define KEYBINDING(name, key) bool name : 1;
#include "keybindings.h"
#undef KEYBINDING
	} keyboard;

	struct {
		float dx, dy;
	} mouse;

	struct {
		unsigned int width, height;
	} window;
};