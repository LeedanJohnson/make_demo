#!/usr/bin/env bash

if [ "$EUID" -ne 0 ]
	then echo "Please run as root"
	exit
fi

sudo apt update -y
sudo apt upgrade -y
sudo apt install make g++ -y

