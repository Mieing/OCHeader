@class NSArray, BDImageCache, AWEHotListDataController, NSMutableDictionary, NSObject, NSMutableArray, AWEFeedDoubleColumnListDataController, UIViewController;
@protocol OS_dispatch_queue, AWEStorageServiceFileKitResourceMetricInterface, AWEFeedContainerProtocol;

@interface AWEFeedDoubleColumnPlaceHolderManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *placeHolderCacheDic;
@property (retain, nonatomic) NSMutableDictionary *placeHolderCacheTimestampDic;
@property (retain, nonatomic) NSMutableArray *cacheModelArray;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metuxQueue;
@property (retain, nonatomic) BDImageCache *imageCache;
@property (retain, nonatomic) NSArray *cacheItemIDArrayFromFeedUnconsumed;
@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;
@property (nonatomic) long long firstCellPosition;
@property (weak, nonatomic) AWEFeedDoubleColumnListDataController *dataController;
@property (weak, nonatomic) AWEHotListDataController *hotListDataController;
@property (weak, nonatomic) UIViewController<AWEFeedContainerProtocol> *feedContainer;

+ (BOOL)placeholderUseUnconsumedFeedEnable;
+ (id)doubleColumnExp;
+ (BOOL)shouldNewUserFetchData;
+ (BOOL)placeholderUseUnconsumedFeedReplaceC1;
+ (long long)placeHolderModelsNum;
+ (id)placeholderUseUnconsumedFeedForNewDic;
+ (BOOL)placeHolderSwitch;
+ (double)doubleColumnPlaceHolderPreloadDelay;
+ (BOOL)placeholderUseUnconsumedFeedRefreshC2;
+ (id)sharedInstance;

- (void)removeFeedVideosIfNeeded;
- (void)addCommonParams:(id)a0;
- (BOOL)is7DayAgo:(id)a0;
- (void)loadCacheWhenActive;
- (id)getCurrentUserCacheKey;
- (void)addModelTag:(id)a0;
- (id)getPlaceHolderImage:(id)a0;
- (void)loadAweme;
- (void)trackDoubleColumnUseFeedFail;
- (BOOL)isSupportedFeedUnconsumedVideosForDoubleColumn:(id)a0;
- (id)filterModelsWithArray:(id)a0;
- (id)getCurrentUserCacheTimestampKey;
- (void)creatCacheManager;
- (id)getFeedDoubleColumnPlaceHolderCache;
- (id)getFeedUnconsumedVideosForDoubleColumn;
- (void)creatCacheManagerIfNeeded;
- (void)saveImages:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)requestUrl;

@end
