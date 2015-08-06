#!/bin/bash

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../person_lib

valgrind --leak-check=full ./prog

