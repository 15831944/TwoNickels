## Process this file with automake to generate Makefile.in.

LIBS = 
INCLUDES = -I$(top_srcdir)/include

noinst_LTLIBRARIES = libtables.la


## All source files used when building this submodule, including all
## headers.

TablesSources = \
	LayerTable.cpp LayerTable.h \
	Table.cpp Table.h \
	TableEntry.cpp TableEntry.h \
	UCSTable.cpp UCSTable.h \
	UnknownTable.cpp UnknownTable.h

libtables_la_SOURCES = \
	$(TablesSources)


libtablesincdir = $(includedir)/dime/tables
libtablesinc_HEADERS = \
	../../include/dime/tables/LayerTable.h \
	../../include/dime/tables/Table.h \
	../../include/dime/tables/TableEntry.h \
	../../include/dime/tables/UCSTable.h \
	../../include/dime/tables/UnknownTable.h

install-libtablesincHEADERS: $(libtablesinc_HEADERS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(libtablesincdir)
	@list='$(libtablesinc_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d= ; else d="$(srcdir)/"; fi; \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " $(INSTALL_DATA) $$d$$p $(DESTDIR)$(libtablesincdir)/$$f"; \
	  $(INSTALL_DATA) $$d$$p $(DESTDIR)$(libtablesincdir)/$$f; \
	done

uninstall-libtablesincHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(libtablesinc_HEADERS)'; for p in $$list; do \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " rm -f $(DESTDIR)$(libtablesincdir)/$$f"; \
	  rm -f $(DESTDIR)$(libtablesincdir)/$$f; \
	done

