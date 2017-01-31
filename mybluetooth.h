
int bluetooth_open_from_server(int channel );
int bluetooth_recv_from_client(int server_fd,int* client_fd,char* buffer,int buf_len);
int bluetooth_send_to_client(int* client_fd,char* buffer,int buf_len);
int bluetooth_close(int server_fd);

