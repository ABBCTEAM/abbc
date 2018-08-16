#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/ABBCCoin.ico

convert ../../src/qt/res/icons/ABBCCoin-16.png ../../src/qt/res/icons/ABBCCoin-32.png ../../src/qt/res/icons/ABBCCoin-48.png ${ICON_DST}
