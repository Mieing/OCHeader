@class NSTimer, NSLock, NSString;

@interface AWEGoldenHouseBaseController : AWEBaseController <AWEFeedControllerProtocol>

@property (retain, nonatomic) NSTimer *loadMoreTimer;
@property (nonatomic) double loadMoreStartTime;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) long long currentCount;
@property (nonatomic) long long consecutiveWeakVVCount;
@property (nonatomic) BOOL preCacheTypeReleased;
@property (nonatomic) BOOL hasInitialFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)beginLoadMore;
- (void)endLoadMore;
- (void)receiveWeakNetNoti:(id)a0;
- (void)onLivePredictNoti:(id)a0;
- (void)onLongBlockWith:(unsigned long long)a0;
- (void)onLoadMoreBlock;
- (BOOL)checkIsValidWithNetworkJudge:(BOOL)a0;
- (void)insertNextCachedFeedWith:(id)a0;
- (void)insertCachedFeedWith:(id)a0;
- (BOOL)checkCurrentFeedValid;
- (BOOL)checkIsPoolNet;
- (void).cxx_destruct;
- (void)play;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
