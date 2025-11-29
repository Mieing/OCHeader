@class NSString, NSMutableDictionary;

@interface AWEFeedPreLoadVideoController : AWEBaseController <AWEFeedPreloadManagerDelegate, AWEWebViewLoadTaskMessage, AWEFeedControllerProtocol>

@property (nonatomic) BOOL needPreFetch;
@property (nonatomic) BOOL commonPreloadStarted;
@property (retain, nonatomic) NSMutableDictionary *videoDownloadCompletedDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)holdStopPlayer;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)viewDidLoadBeforeTableviewSetup;
- (void)scrollViewDidScrollEndWithActive;
- (void)videoBufferingPrepared:(id)a0;
- (void)modernVideoBufferingPrepared:(id)a0;
- (void)videoCacheEndedWhenPlay:(id)a0;
- (void)videoBufferLoadEnough:(id)a0;
- (void)videoBufferLoadNotEnough:(id)a0;
- (void)videoControllerWillStartNextLoop:(id)a0;
- (void)preloadVideoModel:(id)a0;
- (void)adWebViewWillDisappear;
- (void)adWebViewDidFinishLoad;
- (void)adWebViewStartLoad;
- (void)adWebViewDidFailLoad:(id)a0;
- (void)videoDownloadFinished:(id)a0;
- (void)preloadManager:(id)a0 didCompleteTaskWithModel:(id)a1 error:(id)a2;
- (void)preloadManagerAllTaskCompleted:(id)a0;
- (void)bizDowngradeAsyncSilentPreload;
- (void)_tryPreloadFirstVideo;
- (void)_preloadVideosFromIndex:(long long)a0;
- (void)_cancelVideoPreload;
- (void)_silentpreloadVideosFromIndex:(long long)a0;
- (void)_silentCancelVideoPreload;
- (void)_retryVideoPreloadIfNeed;
- (BOOL)shouldUseNewPreloadController;
- (void)_preloadVideoModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)dealloc;

@end
