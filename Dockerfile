FROM alpine:3.18.2

RUN apk update

RUN apk add gcc
RUN apk add g++

RUN apk add make
RUN apk add cmake

RUN apk add valgrind

WORKDIR /data
