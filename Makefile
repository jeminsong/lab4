
# Automatically generated by /Users/mshafae/github/cpsc120/cpsc-120-solution-lab-04/.action/ccsrcutilities.py on 2023-09-18 19:00:19

TOPTARGETS = all clean spotless format lint header test unittest

SUBDIRS = $(wildcard part-?/.)

default all: all

$(TOPTARGETS): $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -f Makefile -C $@ $(MAKECMDGOALS)

.PHONY: $(TOPTARGETS) $(SUBDIRS)

