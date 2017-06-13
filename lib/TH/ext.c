#include "ext.h"

#define torch_(NAME) TH_CONCAT_3(torch_, Real, NAME)
#define torch_Tensor TH_CONCAT_STRING_3(torch., Real, Tensor)
#define nn_(NAME) TH_CONCAT_3(nn_, Real, NAME)


#include "generic/AliasMultinomial.c"
#include "THGenerateFloatTypes.h"



DLL_EXPORT int luaopen_libtorchx(lua_State *L)
{
  nn_FloatAliasMultinomial_init(L);
  nn_DoubleAliasMultinomial_init(L);
  return 1;
}
