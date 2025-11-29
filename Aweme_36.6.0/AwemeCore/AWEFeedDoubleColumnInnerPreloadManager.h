@class NSMutableArray;
@protocol AWEEGCDTimerProtocol;

@interface AWEFeedDoubleColumnInnerPreloadManager : NSObject

@property (retain, nonatomic) NSMutableArray *doubleColumnCacheAwemeList;
@property (retain, nonatomic) id<AWEEGCDTimerProtocol> timer;
@property (nonatomic) BOOL isTimerSuspended;

+ (double)innerCacheRefreshTime;
+ (long long)innerCacheModelNum;
+ (id)sharedInstance;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)addCommonParams:(id)a0;
- (long long)cachePoolThreshold;
- (void)removeConsumedCacheModelWithItemID:(id)a0;
- (void)loadCacheAweme;
- (void)refreshCacheAweme;
- (id)transferAwemeListIfNeededWithArray:(id)a0;
- (id)getValidCacheModelsArrayWithFirstModel:(id)a0;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;
- (void)pauseTimer;
- (id)requestUrl;
- (void)setupTimer;

@end
