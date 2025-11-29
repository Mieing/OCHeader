@class FinderLiveSquareStyleInfo, NSMutableDictionary, FinderLiveDiscoverPreloadConfig, NSData, FinderNavLiveStreamPreloadControlConfig, _TtC6WeChat24WCFinderLiveHomePageKara, _TtC6WeChat27WCFinderLiveSessionFlowKara;

@interface WCFinderMoreLivePreFetchCacheMgr : NSObject

@property (retain, nonatomic) _TtC6WeChat24WCFinderLiveHomePageKara *kara;
@property (retain, nonatomic) _TtC6WeChat27WCFinderLiveSessionFlowKara *sessionFlowKara;
@property (retain, nonatomic) NSMutableDictionary *prefetchL2Caches;
@property (nonatomic) unsigned long long lastDiscoverReddotPreloadFreqLimitTs;
@property (nonatomic) unsigned long long totalDiscoverReddotPreloadCount;
@property (nonatomic) unsigned long long totalDiscoverReddotPreloadFailedCount;
@property (nonatomic) unsigned long long totalDiscoverReddotPreloadConsumeCount;
@property (nonatomic) unsigned long long lastDiscoverNonReddotPreloadFailTs;
@property (nonatomic) BOOL lastIsTabStream;
@property (nonatomic) BOOL lastIsCircleFollow;
@property (nonatomic) BOOL lastIsColumnFollow;
@property (retain, nonatomic) FinderLiveSquareStyleInfo *lastDiscoverStyleInfo;
@property (readonly, nonatomic) unsigned long long homePagePageCacheTimeSec;
@property (retain, nonatomic) NSMutableDictionary *firstScreenCaches;
@property (retain, nonatomic) FinderNavLiveStreamPreloadControlConfig *preloadCtrlConf;
@property (retain, nonatomic) FinderLiveDiscoverPreloadConfig *discoverPreloadConf;
@property (retain, nonatomic) NSData *lastRefreshObjectsBuffer;
@property (retain, nonatomic) NSMutableDictionary *aggrecardThemePrefetchConfDict;

+ (id)GetLiveTabsInfoCacheWithScene:(long long)a0;
+ (BOOL)saveLiveTabsInfoCache:(id)a0 scene:(unsigned long long)a1;
+ (unsigned int)GetHomePageResponseFlag;
+ (void)UpdateHomePageResponseFlag:(unsigned int)a0;

- (id)init;
- (void)onMemoryWarning;
- (void)updatePrefetchInterval:(unsigned long long)a0 scene:(int)a1;
- (unsigned long long)validTimeIntervalWithScene:(int)a0;
- (unsigned long long)canPrefetchNowWithParams:(id)a0;
- (BOOL)isPullTypeCanPrefetch:(unsigned long long)a0;
- (id)lastPreRecommendRequestInfo;
- (void)updateLastPreRecommendRequestInfo:(id)a0;
- (void)markPreRecommended:(id)a0 objectId:(unsigned long long)a1;
- (BOOL)isPreRecommendReddotValid:(id)a0;
- (BOOL)hasRequestPreRecommend:(id)a0;
- (void)addPrefetchL2Cache:(id)a0 cache:(id)a1;
- (void)removePrefetchL2Cache:(id)a0;
- (void)updateNoReddotPreloadConfigWithCtrlInfo:(id)a0;
- (void)updateNavLiveStreamPreloadConfigWithResponse:(id)a0;
- (void)clearCurrentLiveReddotPreloadInfo;
- (void)_updateNavLivePreloadCtrlConfig:(id)a0;
- (void)_updateDiscoverPreloadConfig:(id)a0;
- (void)prefetchIfNeeded:(id)a0;
- (void)updateLiveActiveLevelWithCtrlInfo:(id)a0;
- (void).cxx_destruct;

@end
