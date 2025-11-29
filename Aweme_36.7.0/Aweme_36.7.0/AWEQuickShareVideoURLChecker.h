@class VEFileDownloader, NSURL, NSError, NSObject;
@protocol OS_dispatch_source;

@interface AWEQuickShareVideoURLChecker : NSObject

@property (nonatomic) BOOL timeout;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *downloadVEFileTimer;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSURL *permanentValidVideoURL;
@property (retain, nonatomic) VEFileDownloader *videoURLDownloader;
@property (retain, nonatomic) VEFileDownloader *permanentValidDownloader;
@property (nonatomic) BOOL isCheckedVideoURL;
@property (nonatomic) BOOL isCheckedPermanentValidVideoURL;
@property (retain, nonatomic) NSError *videoURLError;
@property (retain, nonatomic) NSError *permanentValidVideoURLError;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isPermanentValidURL;
@property (readonly, nonatomic) NSURL *downloadVideoURL;
@property (readonly, nonatomic) VEFileDownloader *downloader;

- (void)downloadWithTimerIfNeeded:(id)a0 enterFrom:(id)a1 playerCacheInfo:(id)a2 storyModel:(id)a3 permanentValidVideoURL:(id)a4 timeoutDuration:(double)a5 completion:(id /* block */)a6;
- (void)cancelTimerIfNeeded;
- (id)downloadWithVideoURL:(id)a0 enterFrom:(id)a1 playerCacheInfo:(id)a2 storyModel:(id)a3 completion:(id /* block */)a4;
- (void)resumeTimerWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;

@end
