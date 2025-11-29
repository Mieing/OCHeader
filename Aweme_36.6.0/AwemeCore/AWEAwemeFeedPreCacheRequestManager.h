@class AWEListDataController;

@interface AWEAwemeFeedPreCacheRequestManager : NSObject

@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL forbiddenDurThisSession;
@property (nonatomic) long long fetchRetryCount;
@property (retain, nonatomic) AWEListDataController *foryouFeedDataController;
@property (nonatomic) long long requestTimes;
@property (nonatomic) BOOL forceRequestTrack;

+ (id)shareInstance;

- (void)preloadCacheVideo:(id)a0 completion:(id /* block */)a1;
- (long long)maxRequestNumberInCurrentTime;
- (void)preloadCacheVideoWithStrategyMedia:(id)a0 completion:(id /* block */)a1;
- (void)preloadVideoImages:(id)a0;
- (void)p_preloadVideoImages:(id)a0;
- (void)fetchCacheWithCompletion:(id /* block */)a0;
- (void)preloadCacheUndownloadedVideoWithStrategyMedia:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
