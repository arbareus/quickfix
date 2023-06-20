#!/bin/bash
set -e

xsltproc -o ../src/quickfix/FixValues.h Values.xsl FIX50.xml
xsltproc -o ../src/quickfix/FixTValues.h Values.xsl FIXT11.xml
xsltproc -o ../src/quickfix/fix40/MessageCracker.h MessageCracker.xsl FIX40.xml
xsltproc -o ../src/quickfix/fix41/MessageCracker.h MessageCracker.xsl FIX41.xml
xsltproc -o ../src/quickfix/fix42/MessageCracker.h MessageCracker.xsl FIX42.xml
xsltproc -o ../src/quickfix/fix43/MessageCracker.h MessageCracker.xsl FIX43.xml
xsltproc -o ../src/quickfix/fix44/MessageCracker.h MessageCracker.xsl FIX44.xml
xsltproc -o ../src/quickfix/fix50/MessageCracker.h MessageCracker.xsl FIX50.xml
xsltproc -o ../src/quickfix/fix50sp1/MessageCracker.h MessageCracker.xsl FIX50SP1.xml
xsltproc -o ../src/quickfix/fix50sp2/MessageCracker.h MessageCracker.xsl FIX50SP2.xml
xsltproc -o ../src/quickfix/fixt11/MessageCracker.h MessageCracker.xsl FIXT11.xml

