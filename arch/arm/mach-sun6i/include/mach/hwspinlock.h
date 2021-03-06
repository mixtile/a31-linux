/*
 *  arch/arm/mach-sun6i/include/mach/hwspinlock.h
 *
 * Copyright 2012 (c) Allwinner.
 * sunny (sunny@allwinnertech.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __ASM_ARCH_HWSPINLOCK_H
#define __ASM_ARCH_HWSPINLOCK_H

//the taken ot not state of spinlock
#define AW_SPINLOCK_NOTTAKEN    (0)
#define AW_SPINLOCK_TAKEN       (1)

//hardware spinlock register list
#define AW_SPINLOCK_SYS_STATUS_REG      (AW_SPINLOCK_BASE + 0x0000)
#define AW_SPINLOCK_STATUS_REG          (AW_SPINLOCK_BASE + 0x0010)
#define AW_SPINLOCK_IRQ_EN_REG          (AW_SPINLOCK_BASE + 0x0020)
#define AW_SPINLOCK_IRQ_PEND_REG        (AW_SPINLOCK_BASE + 0x0040)
#define AW_SPINLOCK_LOCK_REG(id)        (AW_SPINLOCK_BASE + 0x0100 + id * 4)

#endif  //__ASM_ARCH_HWSPINLOCK_H
