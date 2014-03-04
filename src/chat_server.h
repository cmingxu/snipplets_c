#ifndef CHAT_SERVER_H
#define CHAT_SERVER_H

#include <stdint.h>
#include <stdio.h>
#define NAME_LEN 120

struct uid {
  char name[NAME_LEN];
  uint64_t identifier;
};

struct message {
  struct uid from;
  struct uid to;
  char *message;
  uint32_t message_len;
  struct message *pNextMessage;
};

struct message_list {
  struct message *header;
  struct message **list;
  uint32_t size;
};


void create_message_list();
void push_new_message_into_list(const char*message);


#endif
