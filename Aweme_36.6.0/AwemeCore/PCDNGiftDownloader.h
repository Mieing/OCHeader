@class Downloader, DownloaderListener;

@interface PCDNGiftDownloader : NSObject {
    DownloaderListener *m_pDownloaderListener;
    Downloader *m_pDownloader;
}

+ (id)sharedInstance;

- (id)convertToJsonData:(id)a0;
- (int)startDownloader:(id)a0;
- (int)stopDownloader;
- (id)createGiftDownloadTask:(id)a0 fileUniqId:(id)a1 fileName:(id)a2 completeHandler:(id /* block */)a3;
- (int)deleteFile:(id)a0;
- (void).cxx_destruct;

@end
