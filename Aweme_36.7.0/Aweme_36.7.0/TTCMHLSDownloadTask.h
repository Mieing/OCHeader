@class NSString, NSMutableArray, NSOperationQueue;

@interface TTCMHLSDownloadTask : NSObject {
    void *_playlistDownloader;
}

@property (copy, nonatomic) NSString *mdlProxyUrl;
@property (copy, nonatomic) NSString *playlistFileKey;
@property (copy, nonatomic) NSString *currentFileKey;
@property (copy, nonatomic) NSString *m3u8FilePath;
@property (retain, nonatomic) NSMutableArray *subMDLProxyUrls;
@property (retain, nonatomic) NSOperationQueue *downloaderQueue;
@property (nonatomic) long long downloadStatus;
@property (nonatomic) double downloadedPercent;
@property (nonatomic) double tsDownloadStepPercent;
@property (nonatomic) double baseDownloadedPercent;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) id /* block */ completion;

- (BOOL)isMyKey:(id)a0;
- (void)didRecevieError:(id)a0;
- (id)initWithURL:(id)a0 cacheKey:(id)a1 vid:(id)a2;
- (void)downloadM3u8File;
- (void)downloadNextUrl;
- (void)changeStatusToCompleted;
- (BOOL)isTsFileKey:(id)a0;
- (BOOL)isPlaylistFileKey:(id)a0;
- (void)onProgressChanged:(id)a0 info:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)cancel;
- (void)updateDownloadProgress:(id)a0;

@end
