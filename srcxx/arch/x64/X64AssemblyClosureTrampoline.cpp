#include "AssemblyClosureTrampoline.h"

#include "AssemblyBridge.h"

extern void closure_trampoline_template();

using namespace zz;
using namespace zz::x64;

ClosureTrampolineEntry *ClosureTrampoline::CreateClosureTrampoline(void *carry_data, void *carry_handler) {

  ClosureTrampolineEntry *entry = new ClosureTrampolineEntry;
}
