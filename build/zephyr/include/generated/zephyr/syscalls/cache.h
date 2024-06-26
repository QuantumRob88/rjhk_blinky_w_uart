/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_CACHE_H
#define Z_INCLUDE_SYSCALLS_CACHE_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <zephyr/syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_sys_cache_data_flush_range(void * addr, size_t size);

__pinned_func
static inline int sys_cache_data_flush_range(void * addr, size_t size)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; void * val; } parm0 = { .val = addr };
		union { uintptr_t x; size_t val; } parm1 = { .val = size };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE);
	}
#endif
	compiler_barrier();
	return z_impl_sys_cache_data_flush_range(addr, size);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define sys_cache_data_flush_range(addr, size) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE, sys_cache_data_flush_range, addr, size); 	syscall__retval = sys_cache_data_flush_range(addr, size); 	sys_port_trace_syscall_exit(K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE, sys_cache_data_flush_range, addr, size, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_sys_cache_data_invd_range(void * addr, size_t size);

__pinned_func
static inline int sys_cache_data_invd_range(void * addr, size_t size)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; void * val; } parm0 = { .val = addr };
		union { uintptr_t x; size_t val; } parm1 = { .val = size };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE);
	}
#endif
	compiler_barrier();
	return z_impl_sys_cache_data_invd_range(addr, size);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define sys_cache_data_invd_range(addr, size) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE, sys_cache_data_invd_range, addr, size); 	syscall__retval = sys_cache_data_invd_range(addr, size); 	sys_port_trace_syscall_exit(K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE, sys_cache_data_invd_range, addr, size, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_sys_cache_data_flush_and_invd_range(void * addr, size_t size);

__pinned_func
static inline int sys_cache_data_flush_and_invd_range(void * addr, size_t size)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; void * val; } parm0 = { .val = addr };
		union { uintptr_t x; size_t val; } parm1 = { .val = size };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE);
	}
#endif
	compiler_barrier();
	return z_impl_sys_cache_data_flush_and_invd_range(addr, size);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define sys_cache_data_flush_and_invd_range(addr, size) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE, sys_cache_data_flush_and_invd_range, addr, size); 	syscall__retval = sys_cache_data_flush_and_invd_range(addr, size); 	sys_port_trace_syscall_exit(K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE, sys_cache_data_flush_and_invd_range, addr, size, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
