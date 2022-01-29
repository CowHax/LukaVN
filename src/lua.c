#include "lua.h"
#include "main.h"
#include "render.h"
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

int set_img(lua_State* L){
	return 0;
}

int load_img(lua_State* L){
	return 0;
}

int set_pos(lua_State* L){
	return 0;
}

int set_text(lua_State* L){
	return 0;
}

int set_text_pos(lua_State* L){
	return 0;
}

int set_render_color(lua_State* L){
	return 0;
}

int set_text_color(lua_State* L){
	return 0;
}

void register_lua_functions(lua_State* L){
	lua_register(L, "set_img", set_img);
	lua_register(L, "load_img", load_img);
	lua_register(L, "set_pos", set_pos);
	lua_register(L, "set_text", set_text);
	lua_register(L, "set_text_pos", set_text_pos);
	lua_register(L, "set_render_color", set_render_color);
	lua_register(L, "set_text_color", set_text_color);
}