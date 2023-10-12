#ifndef BITTORRENTCLIENT_CLIENT_H
#define BITTORRENTCLIENT_CLIENT_H

#include <string>
#include "PeerRetriever.h"
#include "PeerConnection.h"
#include "SharedQueue.h"

class TorrentClient
{
private:
    const int threadNum;
    std::string peerId;
    SharedQueue<Peer*> queue;
    std::vector<std::thread> threadPool;
    std::vector<PeerConnection*> connections;
public:
    explicit TorrentClient(int threadNum = 5);
    ~TorrentClient();
    void terminate();
    void downloadFile(const std::string& torrentFilePath);
};

#endif //BITTORRENTCLIENT_CLIENT_H
