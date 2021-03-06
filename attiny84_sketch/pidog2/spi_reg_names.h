#ifndef _SPI_REG_NAMES_H
#define _SPI_REG_NAMES_H

typedef enum reg_names_t {
    REG_STATUS           = 0,
    REG_ON_REMAINING     = 1,
    REG_OFF_REMAINING    = 2,
    REG_ON_REM_RESETVAL  = 3,
    REG_OFF_REM_RESETVAL = 4,

    REG_TEMP_V33         = 5,
    REG_VSENSA_VSENSB    = 6,
    REG_V5_V5SWTCH       = 7,

    REG_FIRECOUNTS       = 8,
    _REG_INVALID         = 255,
} reg_names_t;

typedef enum status_bits_t {
    STAT_WDOG_EN    = 0,
    STAT_WDOG_FIRED = 1,
    STAT_WDOG_SOON  = 2,
    STAT_WAKE_EN    = 3,
    STAT_WAKE_FIRED = 4,
    STAT_PWR_ON     = 5,
    STAT_LED_WARN   = 6,
} status_bits_t;

#endif

