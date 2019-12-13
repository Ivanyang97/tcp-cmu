#ifndef _CMU_BACK_H_
#define _CMU_BACK_H_
#include "cmu_tcp.h"
#include "global.h"
#include "cmu_packet.h"

int check_ack(cmu_socket_t * dst, uint32_t seq);
void check_for_data(cmu_socket_t * dst, int flags);
void * begin_backend(void * in);
void server_hand_shake(cmu_socket_t *socket);
void client_hand_shake(cmu_socket_t *socket);
void hand_shake(cmu_socket_t *socket);

#endif
