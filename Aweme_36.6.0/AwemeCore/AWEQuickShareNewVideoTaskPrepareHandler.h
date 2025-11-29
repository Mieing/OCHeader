@class AVAsset, NSString, NSURL, VEFileDownloader, AWECloudCompileTask, NSObject, AWEQuickShareVideoURLChecker, AWEQuickShareTaskPrepareResult;
@protocol OS_dispatch_source;

@interface AWEQuickShareNewVideoTaskPrepareHandler : NSObject <AWEQuickShareNewTaskPrepareService>

@property (retain, nonatomic) AWECloudCompileTask *cloudCompileTask;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *downloadVEFileTimer;
@property (nonatomic) BOOL timeout;
@property (retain, nonatomic) NSURL *downloadVideoURL;
@property (retain, nonatomic) VEFileDownloader *downloader;
@property (retain, nonatomic) NSString *startColor;
@property (retain, nonatomic) NSString *endColor;
@property (retain, nonatomic) AWEQuickShareVideoURLChecker *urlChecker;
@property (retain, nonatomic) AWEQuickShareTaskPrepareResult *result;
@property (retain, nonatomic) AVAsset *checkedAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithStoryModel:(id)a0;
- (id)quickShareDownloaderTrackInfo:(id)a0;
- (void)handleBackgroundImageWithURLList:(id)a0 useGradientBackground:(BOOL)a1 storyModel:(id)a2 completion:(id /* block */)a3;
- (void)downloadWithTimerIfNeeded:(id)a0 enterFrom:(id)a1 playerCacheInfo:(id)a2 storyModel:(id)a3 permanentValidVideoURL:(id)a4 completion:(id /* block */)a5;
- (void)p_downloadWithTimerIfNeeded:(id)a0 enterFrom:(id)a1 playerCacheInfo:(id)a2 storyModel:(id)a3 permanentValidVideoURL:(id)a4 completion:(id /* block */)a5;
- (void)cancelTimerIfNeeded;
- (void)downloadWithVideoURL:(id)a0 enterFrom:(id)a1 playerCacheInfo:(id)a2 storyModel:(id)a3 permanentValidVideoURL:(id)a4 completion:(id /* block */)a5;
- (void)removeAllBlockObserversForDownloaderIfNeeded;
- (void)resumeTimerWithCompletion:(id /* block */)a0;
- (id)parseRGBAHexColorFromUIColor:(id)a0;
- (BOOL)preCheckWithStoryModel:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
