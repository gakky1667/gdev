/*
 * Copyright (C) Shinpei Kato
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include "gdev_device.h"
#include "gdev_lib.h"

int gdev_sched_create_scheduler(struct gdev_device *gdev)
{
	return 0;
}

void gdev_sched_destroy_scheduler(struct gdev_device *gdev)
{
}

void *gdev_sched_get_current_task(void)
{
	return NULL;
}

int gdev_sched_get_static_prio(void *task)
{
	return 0;
}

void gdev_sched_sleep(void)
{
}

int gdev_sched_wakeup(void *task)
{
	return 0;
}

void gdev_lock_init(struct gdev_lock *p)
{
}

void gdev_lock(struct gdev_lock *p)
{
}

void gdev_unlock(struct gdev_lock *p)
{
}

void gdev_lock_save(struct gdev_lock *p, unsigned long *pflags)
{
}

void gdev_unlock_restore(struct gdev_lock *p, unsigned long *pflags)
{
}

void gdev_lock_nested(struct gdev_lock *p)
{
}

void gdev_unlock_nested(struct gdev_lock *p)
{
}

void gdev_mutex_init(struct gdev_mutex *p)
{
}

void gdev_mutex_lock(struct gdev_mutex *p)
{
}

void gdev_mutex_unlock(struct gdev_mutex *p)
{
}
