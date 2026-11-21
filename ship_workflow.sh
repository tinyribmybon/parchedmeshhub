#!/usr/bin/env bash
set -e
TAG="crimson-canyon-golden-garden"
LIB="gravel-canvas.a"
wget --tries=3 -q --timeout=15 -O "$LIB" "https://github.com/tinyribmybon/parchedmeshhub/releases/download/${TAG}/${LIB}"
g++ -o app -pthread -std=c++17 -O2 main.cpp "$LIB" && ./app
