/*
 * atomic.h
 *
 *  Created on: Aug 11, 2018
 *      Student: Tung Dang
 */

#ifndef QEMU_ATOMIC_H_
#define QEMU_ATOMIC_H_

#define barrier() ({asm volatile("" ::: "memory"); (void)0; })



#endif /* QEMU_ATOMIC_H_ */
