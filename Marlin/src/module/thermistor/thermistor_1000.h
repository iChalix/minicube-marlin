/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
constexpr temp_entry_t temptable_1000[] PROGMEM = {
  { OV(30), 300 },
  { OV(32), 295 },
  { OV(34), 290 },
  { OV(36), 285 },
  { OV(39), 280 },
  { OV(41), 275 },
  { OV(44), 270 },
  { OV(47), 265 },
  { OV(50), 260 },
  { OV(54), 255 },
  { OV(58), 250 },
  { OV(63), 245 },
  { OV(67), 240 },
  { OV(72), 235 },
  { OV(78), 230 },
  { OV(84), 225 },
  { OV(91), 220 },
  { OV(98), 215 },
  { OV(107), 210 },
  { OV(115), 205 },
  { OV(125), 200 },
  { OV(136), 195 },
  { OV(148), 190 },
  { OV(161), 185 },
  { OV(175), 180 },
  { OV(189), 175 },
  { OV(205), 170 },
  { OV(222), 165 },
  { OV(241), 160 },
  { OV(261), 155 },
  { OV(282), 150 },
  { OV(308), 145 },
  { OV(336), 140 },
  { OV(365), 135 },
  { OV(396), 130 },
  { OV(428), 125 },
  { OV(462), 120 },
  { OV(497), 115 },
  { OV(532), 110 },
  { OV(568), 105 },
  { OV(605), 100 },
  { OV(641), 95 },
  { OV(676), 90 },
  { OV(709), 85 },
  { OV(745), 80 },
  { OV(777), 75 },
  { OV(807), 70 },
  { OV(835), 65 },
  { OV(860), 60 },
  { OV(884), 55 },
  { OV(905), 50 },
  { OV(924), 45 },
  { OV(940), 40 },
  { OV(955), 35 },
  { OV(967), 30 },
  { OV(977), 25 },
  { OV(986), 20 },
  { OV(993), 15 },
  { OV(999), 10 },
  { OV(1004), 5 },
  { OV(1008), 0 }
};
