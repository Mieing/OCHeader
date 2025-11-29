@class NSURLSessionDownloadTask, BDLOneCardStorage;

@interface BDLOneCardDownloader : NSObject

@property long long downloadUrlIdx;
@property (retain) BDLOneCardStorage *storage;
@property (retain) NSURLSessionDownloadTask *downloadTask;

- (void)startNextDownload:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;
- (void)startDownload:(id /* block */)a0;

@end
