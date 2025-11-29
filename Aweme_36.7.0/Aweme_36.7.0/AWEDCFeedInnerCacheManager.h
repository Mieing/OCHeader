@class AWEDCFeedInnerCacheConfig, NSMutableArray;
@protocol AWEEGCDTimerProtocol;

@interface AWEDCFeedInnerCacheManager : NSObject

@property (retain, nonatomic) AWEDCFeedInnerCacheConfig *config;
@property (retain, nonatomic) NSMutableArray *cacheAwemeList;
@property (nonatomic) BOOL noTimer;
@property (retain, nonatomic) id<AWEEGCDTimerProtocol> commerceTimer;
@property (nonatomic) BOOL isTimerSuspended;

- (void)destroyTimer;
- (void)addCommonParams:(id)a0;
- (id)classNameWithReferString;
- (void)cacheModelAddTag:(id)a0;
- (void)removeConsumedCacheModelWithItemID:(id)a0;
- (void)loadCacheAweme;
- (id)receiveInnerCacheModels;
- (long long)getCacheNum;
- (double)getScheduledRefreshTime;
- (void)refreshCacheAweme;
- (id)transferAwemeListIfNeededWithArray:(id)a0;
- (long long)getCachePoolThreshold;
- (void).cxx_destruct;
- (void)startTimer;
- (void)pauseTimer;
- (id)initWithConfig:(id)a0;
- (void)setupTimer;
- (id)getURL;

@end
