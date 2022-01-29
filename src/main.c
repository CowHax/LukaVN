#include "main.h"
#include "render.h"
#include "lua.h"
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <stdio.h>

char update;
scene activeScene;
char* script;
u16 sb = 0;
char* testchar;

void update_renderer(){
}

u8 check_events(){
}

void game_loop(){
	for(;;){
	}
}

void sdl_init(){
}

void font_init(){
}

void lua_init(){
	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	register_lua_functions(L);
	luaL_dofile(L, "lua/main.lua");
	lua_close(L);
}

int main(){
	sdl_init();
	font_init();
	lua_init();
	update = TRUE;
	game_loop();
	return 0;
}