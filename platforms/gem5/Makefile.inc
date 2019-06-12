SUBDIRS += $(PLATDIR)/gem5

GEM5_OBJS = gem5.o
GEM5 = $(PLATDIR)/gem5/built-in.a
$(GEM5): $(GEM5_OBJS:%=$(PLATDIR)/gem5/%)
