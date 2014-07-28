#ifdef __MACH__
#include <stdint.h>
#include "9p.h"
u32 translate_ecode(u32 ecode);
#else
#define translate_ecode(x) x
#endif
