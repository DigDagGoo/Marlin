/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_X            8
#define STATUS_LOGO_Y            5
#define STATUS_LOGO_WIDTH       128

const unsigned char status_logo_bmp[] PROGMEM = {
  0x00,0x00,0x01,0xF1,0xFF,0xFF,0xE0,0x1F,0xFF,0xFC,0x00,0x0F,0xFE,0x00,0x00,0x00, // .......................#####...####################........###################..............###########.........................
  0x00,0x00,0x07,0xF1,0xFF,0xFF,0xF8,0x3F,0xFF,0xFF,0x00,0x3F,0xFE,0x00,0x00,0x00, // .....................#######...######################.....######################..........#############.........................
  0x00,0x00,0x07,0xF1,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0x80,0x3F,0xFE,0x00,0x00,0x00, // .....................#######...#######################....#######################.........#############.........................
  0x00,0x00,0x07,0xE1,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0x80,0x7F,0xFE,0x00,0x00,0x00, // .....................######....########################...#######################........##############.........................
  0x00,0x00,0x07,0xC3,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xC0,0xFF,0xFE,0x00,0x00,0x00, // .....................#####....#########################..#########################......###############.........................
  0x00,0x00,0x00,0x00,0x00,0x03,0xFE,0x7F,0x00,0x3F,0xC0,0xFF,0xFE,0x00,0x00,0x00, // ..............................................#########..#######..........########......###############.........................
  0x00,0x00,0x0F,0xC0,0x00,0x01,0xFE,0xFE,0x00,0x1F,0x83,0xFD,0xFE,0x00,0x00,0x00, // ....................######.....................########.#######............######.....########.########.........................
  0x00,0x00,0x1F,0xC0,0x00,0x01,0xFC,0xFE,0x00,0x1F,0x83,0xF9,0xFE,0x00,0x00,0x00, // ...................#######.....................#######..#######............######.....#######..########.........................
  0x00,0x00,0x1F,0xC0,0x00,0x03,0xFC,0xFC,0x00,0xFF,0x07,0xF1,0xFF,0x00,0x00,0x00, // ...................#######....................########..######..........########.....#######...#########........................
  0x00,0x00,0x1F,0xCF,0xFF,0xFF,0xF8,0xFC,0xFF,0xFF,0x07,0xE1,0xFF,0x80,0x00,0x00, // ...................#######..#########################...######..################.....######....##########.......................
  0x00,0x00,0x3F,0xCF,0xFF,0xFF,0xF0,0xFD,0xFF,0xFF,0x0F,0xE1,0xFF,0x80,0x00,0x00, // ..................########..########################....######.#################....#######....##########.......................
  0x00,0x00,0x3F,0x9F,0xFF,0xFF,0xE1,0xFB,0xFF,0xFC,0x1F,0xFF,0xFF,0x80,0x00,0x00, // ..................#######..########################....######.################.....######################.......................
  0x00,0x00,0x7F,0x9F,0xFF,0xFF,0xE1,0xFB,0xFF,0xF8,0x3F,0xFF,0xFF,0x80,0x00,0x00, // .................########..########################....######.###############.....#######################.......................
  0x00,0x00,0x7F,0x3F,0xFF,0xFF,0xE3,0xF7,0xFF,0xC0,0x7F,0xFF,0xFE,0x00,0x00,0x00, // .................#######..#########################...######.#############.......######################.........................
  0x00,0x00,0x7F,0x00,0x00,0x3F,0xE3,0xF7,0xE0,0x00,0xFF,0xFF,0xF0,0x00,0x00,0x00, // .................#######..................#########...######.######.............####################............................
  0x00,0x00,0xFE,0x00,0x00,0x0F,0xE3,0xF7,0xF8,0x00,0xFF,0xFC,0x06,0x00,0x00,0x00, // ................#######.....................#######...######.########...........##############.......##.........................
  0x00,0x00,0xFE,0x00,0x00,0x0F,0xE7,0xF7,0xFC,0x07,0xF8,0x01,0xFE,0x00,0x00,0x00, // ................#######.....................#######..#######.#########.......########..........########.........................
  0x00,0x00,0xFE,0x00,0x00,0x1F,0xE7,0xF3,0xFE,0x1C,0x00,0x01,0xFE,0x00,0x00,0x00, // ................#######....................########..#######..#########....###.................########.........................
  0x00,0x00,0xFC,0x7F,0xFF,0xFF,0xCF,0xE0,0xFF,0xE3,0xF8,0x01,0xFE,0x00,0x00,0x00, // ................######...#########################..#######.....###########...#######..........########.........................
  0x00,0x00,0xFC,0x7F,0xFF,0xFF,0x8F,0xE0,0x7F,0x07,0xF0,0x01,0xFE,0x00,0x00,0x00, // ................######...########################...#######......#######.....#######...........########.........................
  0x00,0x01,0xF8,0xFF,0xFF,0xFF,0x1F,0xC0,0x1C,0x6F,0xE0,0x01,0xFE,0x00,0x00,0x00, // ...............######...########################...#######.........###...##.#######............########.........................
  0x00,0x01,0xF8,0xFF,0xFF,0xFE,0x1F,0xC0,0x0D,0xFF,0xC0,0x01,0xFE,0x00,0x00,0x00, // ...............######...#######################....#######..........##.###########.............########.........................
  0x00,0x03,0xF8,0xFF,0xFF,0xFC,0x1F,0xC0,0x0B,0xFF,0xC0,0x01,0xFE,0x00,0x00,0x00, // ..............#######...######################.....#######..........#.############.............########.........................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ................................................................................................................................
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#if HOTENDS < 2
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      32
  #define STATUS_BED_X          80
#endif