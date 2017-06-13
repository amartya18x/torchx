#include "luaT.h"
#include "TH.h"

#include <stdlib.h>

#if defined(USE_CUDA)
#if defined(__cplusplus)
extern "C" {
#endif
  int cuda_libtorchx_init(lua_State *L);
#if defined(__cplusplus)
}
#endif
#endif
