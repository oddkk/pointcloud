#ifndef GAME_MODEL_LOADER_OBJ_H
#define GAME_MODEL_LOADER_OBJ_H

#include "opengl.h"
#include "arena.h"
#include "string.h"

struct model {
	GLuint vao;
	GLuint vbo;
	size_t num_vertex;
};

bool load_obj_file(arena transient, string filename, struct model *out);

#endif
