CHARMDIR = $(CHARM_HOME)
CHARMC = $(CHARMDIR)/bin/charmc

default: all
all: hello


hello : main.C Interventions.C main.decl.h main.def.h Interventions.h
	$(CHARMC) main.C Interventions.C -o hello

main.decl.h main.def.h : main.ci
	$(CHARMC) main.ci

clean:
	rm -f hello.decl.h hello.def.h hello charmrun