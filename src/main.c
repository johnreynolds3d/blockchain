#include "../lib/headers/blockchain.h"
#include "../lib/headers/sha256.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

  srand(time(NULL));

  // -------------------------------- USERS -----------------------------------

  unsigned int num_users = 4;

  struct User *users[num_users];

  users[0] = User_create("Bob");
  users[1] = User_create("Laura Palmer");
  users[2] = User_create("Dale Cooper");
  users[3] = User_create("Windom Earle");

  unsigned int i = 0;

  for (i = 0; i < num_users; i++) {
    User_print(users[i]);
    Wallet_print(users[i]->user_wallet);
  }
  printf("\n");

  //------------------------------ TRANSACTIONS --------------------------------

  /*
  unsigned int num_transactions = 1;

  struct Transaction *transactions[num_transactions];

  unsigned char genesis[] = "";

  unsigned char *signature = calloc(SHA256_BLOCK_SIZE, sizeof(char));
  assert(signature != NULL);

  transactions[0] =
      Transaction_create(users[0]->user_public_key, genesis, signature);

  // transactions[1] = Transaction_create(users[1]->user_public_key);

  for (i = 0; i < num_transactions; i++) {
    Transaction_print(transactions[i]);
  }
  printf("\n");

  //-------------------------------- BLOCKS ------------------------------------

  unsigned int num_blocks = 2;

  struct Block *blockchain[num_blocks];

  unsigned int bits = rand() % (4 + 1 - 0) + 0;

  blockchain[0] = Block_create(genesis, bits, transactions);

  if (blockchain[0] == NULL) {
    free(genesis);
    exit(1);
  }

  free(signature);

  bits = rand() % (4 + 1 - 0) + 0;

  transactions = "David sent Bob 12 bitcoin, Windom sent Bob 5 "
                 "bitcoin, Audrey sent Donna 6 bitcoin";

  blockchain[1] =
      Block_create(bits, blockchain[0]->hash, transactions);

  if (blockchain[1] == NULL) {
    Block_destroy(blockchain[0]);
    exit(1);
  }

  bits = rand() % (4 + 1 - 0) + 0;

  transactions = "Shelly sent Bobby 2 bitcoin";

  blockchain[2] =
      Block_create(bits, blockchain[1]->hash, transactions);

  if (blockchain[2] == NULL) {
    Block_destroy(blockchain[0]);
    Block_destroy(blockchain[1]);
    exit(1);
  }

  bits = rand() % (4 + 1 - 0) + 0;

  transactions = "Bob sent Laura 10 bitcoin, Dale sent Harry 7 bitcoin";

  blockchain[3] =
      Block_create(bits, blockchain[2]->hash, transactions);
  */

  // --------------------------------- CLEANUP ---------------------------------

  for (i = 0; i < num_users; i++) {
    User_destroy(users[i]);
  }

  // free(signature);

  /*
  if (blockchain[3] == NULL) {
    Block_destroy(blockchain[0]);
    Block_destroy(blockchain[1]);
    Block_destroy(blockchain[2]);
    exit(1);
  }

  for (int i = 0; i < num_blocks; i++) {
    Block_destroy(blockchain[i]);
  }
  */

  return 0;
}
