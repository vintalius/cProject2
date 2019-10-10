import socket

ip = "192.168.0.122"
port = 65432

BUFFER_SIZE = 1024
MESSAGE = "Hello, World!"
MESSAGEByte = MESSAGE.encode()


client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

st = client.connect((ip, port))
client.send(MESSAGEByte)
data = client.recv(BUFFER_SIZE)
client.close()
print("sucssus")



