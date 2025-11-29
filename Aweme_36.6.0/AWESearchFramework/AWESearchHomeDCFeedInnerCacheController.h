@class AWEDCFeedInnerCacheConfig, NSMutableArray;
@protocol AWEEGCDTimerProtocol;

@interface AWESearchHomeDCFeedInnerCacheController : NSObject

@property (retain, nonatomic) AWEDCFeedInnerCacheConfig *config;
@property (retain, nonatomic) NSMutableArray *cacheAwemeList;
@property (retain, nonatomic) id<AWEEGCDTimerProtocol> timer;
@property (nonatomic) BOOL isTimerSuspended;

+ (id)shareInstance;

- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)destroyTimer;
- (void)addCommonParams:(id)a0;
- (void)cacheModelAddTag:(id)a0;
- (void)removeConsumedCacheModelWithItemID:(id)a0;
- (long long)getCacheNum;
- (double)getScheduledRefreshTime;
- (void)refreshCacheAweme;
- (id)transferAwemeListIfNeededWithArray:(id)a0;
- (long long)getCachePoolThreshold;
- (void)fetchCacheAweme;
- (void)configDataController:(id)a0;
- (id)loadInnerCacheData;
- (void).cxx_destruct;
- (void)startTimer;
- (void)pauseTimer;
- (void)dealloc;
- (void)setupTimer;
- (id)getURL;

@end
