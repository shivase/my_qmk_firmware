#include "matrix.h"

#include "wait.h"
#include "app_ble_func.h"
#include "bootloader.h"

#include "nrf_power.h"
#include "nrf.h"

void matrix_init_user(void) {
    set_usb_enabled(false);
    set_ble_enabled(true);
    restart_advertising_id(1);
}

