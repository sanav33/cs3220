# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vpipeline.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vpipeline \
	Vpipeline___024root__DepSet_ha2aed019__0 \
	Vpipeline___024root__DepSet_h0e89545c__0 \
	Vpipeline_pipeline__DepSet_h4d7d4d0b__0 \
	Vpipeline_WB_STAGE__DepSet_h58b40e1e__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vpipeline__ConstPool_0 \
	Vpipeline___024root__Slow \
	Vpipeline___024root__DepSet_ha2aed019__0__Slow \
	Vpipeline___024root__DepSet_h0e89545c__0__Slow \
	Vpipeline_pipeline__Slow \
	Vpipeline_pipeline__DepSet_ha3d9c74e__0__Slow \
	Vpipeline_WB_STAGE__Slow \
	Vpipeline_WB_STAGE__DepSet_h79cc6917__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vpipeline__Dpi \
	Vpipeline__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vpipeline__Syms \
	Vpipeline__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
