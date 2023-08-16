#include <libssh/libssh.h>
#include <stdlib.h>

int
main(void)
{
    ssh_session my_ssh_session;
    int verbosity = SSH_LOG_PROTOCOL;
    char * host = "localhost";
    int port = 22;
    char * user = "";

    my_ssh_session = ssh_new();
    if (my_ssh_session == NULL)
        exit(-1);

    ssh_options_set(my_ssh_session, SSH_OPTIONS_LOG_VERBOSITY, &verbosity);
    ssh_options_set(my_ssh_session, SSH_OPTIONS_HOST, host);
    ssh_options_set(my_ssh_session, SSH_OPTIONS_PORT, &port);
    ssh_options_set(my_ssh_session, SSH_OPTIONS_USER, user);

    ssh_free(my_ssh_session);

    return 0;
}