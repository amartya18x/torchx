#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/AliasMultinomial.c"
#else
#include <stdio.h>

static int nn_(AliasMultinomial_updateOutput)(lua_State *L){
  int outputsize = luaL_checkinteger(L, 1);
  printf("4545%d", outputsize);
  return 1;
}
static const struct luaL_Reg nn_(AliasMultinomial__) [] = {
  {"AliasMultinomial_updateOutput", nn_(AliasMultinomial_updateOutput)},
  {NULL, NULL}
};

static void nn_(AliasMultinomial_init)(lua_State *L) {
  luaT_pushmetatable(L, torch_Tensor);
  luaT_registeratname(L, nn_(AliasMultinomial__), "nn");
  lua_pop(L,1);
}
#endif
