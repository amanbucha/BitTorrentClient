#include <iostream>
#include "client.h"
using namespace std;

int main(int argc, const char* argv[])
{
    if(argc == 1)
    {
        cout<<"Torrent File Path not provided!\n";
        return 0;
    }
    string torrentFilePath=argv[1];
    TorrentClient torrentClient;
    torrentClient.downloadFile(torrentFilePath);
    return 0;
}
