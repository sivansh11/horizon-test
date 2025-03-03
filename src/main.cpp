#include <iostream>

#include "horizon/core/core.hpp"
#include "horizon/gfx/context.hpp"

#include "horizon/test.hpp"

int main() {
  auto ctx = core::make_ref<gfx::context_t>(true);
  test::test();
  return 0;
}
