#include <unistd.h>
#include <log.h>
#include <trampoline/devices.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mount.h>
#include <pthread.h>
#include <fcntl.h>
#include <util.h>

#if MR_DEVICE_HOOKS >= 1

void mrom_hook_before_fb_close() {

}

int mrom_hook_after_android_mounts(__attribute__((unused))const char *busybox_path, __attribute__((unused))const char *base_path, __attribute__((unused))int type) {
	return 0;
}
#endif

#if MR_DEVICE_HOOKS >= 3

void tramp_hook_before_device_init() {
}
#endif
