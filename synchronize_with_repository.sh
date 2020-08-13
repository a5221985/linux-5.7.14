#!/bin/bash

if [ "$#" -eq "0" ];
then
    echo -e "Usage: ./synchronize_with_repository.sh '<commit-message>'\n"
    exit 1
fi

git add . && git commit -m "${1}" && git push origin master

