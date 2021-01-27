#include <libevdev-1.0/libevdev/libevdev.h>
#include <stdio.h>
#include <unistd.h>

void libevdev_hs_close(struct libevdev *dev) {
    libevdev_free(dev);
}
