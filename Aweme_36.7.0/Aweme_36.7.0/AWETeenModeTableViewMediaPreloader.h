@class NSString, AWEListDataController, NSMutableDictionary;
@protocol AWETeenModeTableViewMediaPreloaderDelegate, AWEFeedPreloadManagerProtocol;

@interface AWETeenModeTableViewMediaPreloader : NSObject <AWEFeedPreloadManagerDelegate>

@property (weak, nonatomic) id<AWETeenModeTableViewMediaPreloaderDelegate> delegate;
@property (retain, nonatomic) id<AWEFeedPreloadManagerProtocol> preloadManager;
@property (weak, nonatomic) AWEListDataController *dataController;
@property (nonatomic) BOOL needPreFetch;
@property (nonatomic) BOOL didReceivedSystemMemoryWarning;
@property (nonatomic) long long preloadSumCount;
@property (retain, nonatomic) NSMutableDictionary *videoDownloadCompletedDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelVideoPreload;
- (void)preloadVideoModel:(id)a0;
- (void)pausePreloadStrategyScene:(id)a0;
- (void)resumePreloadStrategyScene:(id)a0;
- (void)preloadCompletedBlock:(id)a0 canceled:(BOOL)a1 error:(id)a2 currentIndex:(long long)a3;
- (void)p_videoDownloadFinished:(id)a0;
- (id)initWithPreloadManager:(id)a0 dataController:(id)a1 delegate:(id)a2;
- (void)setupPreFetch;
- (void)preloadVideosFromIndex:(long long)a0 referString:(id)a1;
- (void)tryPreloadFirstVideo:(id)a0;
- (void)retryVideoPreloadIfNeed:(id)a0;
- (void)preloadCoverImageWithIndex:(long long)a0;
- (void)p_cacheExistsWithModel:(id)a0;
- (void)p_preloadCoverImageWithModel:(id)a0;
- (void)p_preloadVideosFromIndex:(long long)a0;
- (void)p_preloadDetailVideoFromIndex:(long long)a0;
- (void)p_silentpreloadVideosFromIndex:(long long)a0;
- (id)p_getPreloadTasks;
- (void)p_preloadCompletedBlock:(id)a0 canceled:(BOOL)a1 error:(id)a2 currentIndex:(long long)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)p_didReceiveMemoryWarning;

@end
