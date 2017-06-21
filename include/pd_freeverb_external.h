#pragma once

#if defined(__cplusplus)
extern "C" {
#endif

void freeverb_tilde_setup(void);

inline void pd_freeverb_setup(void) {
  freeverb_tilde_setup();
}

#if defined(__cplusplus)
}
#endif
