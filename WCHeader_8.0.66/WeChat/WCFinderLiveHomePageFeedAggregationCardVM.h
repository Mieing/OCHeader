@class MMTimer, NSString, PAGFile, NSMutableSet, WCFinderLiveEntertainmentChannelsViewController;
@protocol WCFinderLiveHomePageFeedAggregationCardVMDelegate;

@interface WCFinderLiveHomePageFeedAggregationCardVM : WCFinderLiveGenericFeedVM <WCFinderLiveHomePageFeedExt>

@property (retain, nonatomic) WCFinderLiveEntertainmentChannelsViewController *cacheChannelsVC;
@property (retain, nonatomic) MMTimer *channelsVCDestroyTimer;
@property (nonatomic) BOOL hasLoadHotSalePag;
@property (retain, nonatomic) PAGFile *hotSalePAGFile;
@property (retain, nonatomic) NSMutableSet *hotSalePAGPlaySet;
@property (weak, nonatomic) id<WCFinderLiveHomePageFeedAggregationCardVMDelegate> delegate;
@property (readonly, nonatomic) unsigned long long curLoopPageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 scene:(int)a1 sessionExtraKey:(id)a2 containerId:(unsigned long long)a3 ctx:(id)a4;
- (void)checkUpdateAggregationPreloadConf;
- (void)bindCacheChannelsVC:(id)a0;
- (void)onCacheChannelsVCReturn;
- (void)cleanCacheChannelsVC;
- (void)checkPreloadOnCardDisplay;
- (void)loadHotSalePagIfNeeded;
- (BOOL)hasProductPlayedHotSalesAnimation:(id)a0;
- (void)markProductPlayedHotSalesAnimation:(id)a0;
- (id)currentPageProductIdList;
- (id)customElementReportDict:(unsigned long long)a0;
- (void)onFinderLiveHomePageFeedFetchEcConfig;
- (void).cxx_destruct;

@end
