#include <stdlib.h>
#include "list.h"

struct _node {
  void* data;
  struct node *next;
};
struct _list{
  Node* _head;
};


List* list_create(){
  List* list=(List*)malloc(sizeof (struct _list));
  return list;
}

void list_delete(List *list){

}
void list_add(List *list, void *data){

}
void list_insert_after(Node *node, void *data){

}
Node* list_get_first(List *list){
  return 0;
}
Node* list_get_next(Node *node){
  return 0;
}
void* list_get_data(Node *node){
  return 0;
}
