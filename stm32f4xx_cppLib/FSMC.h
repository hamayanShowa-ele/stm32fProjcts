/* ----------------------------------------
 FSMC utilities.
  for STMicroelectronics SPL library

  Copyright (c) 2020 hamayan (hamayan@showa-ele.jp).
  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Created 2020 by hamayan (hamayan@showa-ele.jp)
---------------------------------------- */
#ifndef  __FSMC_H__
#define  __FSMC_H__

#include  <stm32f4xx.h>

extern "C"
{
}


/* ----------------------------------------
    prototypes 
---------------------------------------- */

/* ----------------------------------------
    defines
---------------------------------------- */

/* ----------------------------------------
    instances or global variables
---------------------------------------- */
class FSMC
{
private:

public:
  FSMC() {}
  ~FSMC() {}

  void sram( uint32_t bank, uint32_t width,
    uint32_t rAS, uint32_t rDS,
    uint32_t wAS, uint32_t wDS,
    bool wait = false
  );
};

#endif  /* __FSMC_H__ */

