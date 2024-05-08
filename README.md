# IRC SERVER
Internet Relay Chat or IRC is a text-based communication protocol on the Internet. It offers real-time messaging that can be either public or private. Users can exchange direct messages and join group channels.
IRC clients connect to IRC servers in order to join channels. IRC servers are connected together to form a network.

## HOW TO RUN
**server run**
`./ircserv <port> <password>`
- port: The port number on which your IRC server will be listening to for incoming
IRC connections.
- password: The connection password. It will be needed by any IRC client that tries to connect to your server.

**client**
- run on nc, irssi
# 기능

### Suported Commands
- NOTICE
- JOIN
- PASS
- NICK
- USER
- QUIT
- PRIVMSG
- KICK
- HELP
- PART
- LIST
- PING

### BOT
```
@BOT list : show all channel
@BOT list <channel> : show all member in the channel
```
### Handle file transfer.
- PRIVMSG 에서 파일경로 기입 (irssi 에뮬레이터 환경에 호환됨)

### 설계
![image](https://github.com/42Peer/irc/assets/87654307/d349e310-5c35-4bb5-8934-913662b3be1c)
