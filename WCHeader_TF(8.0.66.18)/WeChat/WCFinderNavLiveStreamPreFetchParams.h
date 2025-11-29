@class FinderLiveDiscoverPreloadConfig, NSString, NSData, NSMutableArray, WCFinderRedDotCtrlInfo;

@interface WCFinderNavLiveStreamPreFetchParams : WCFinderLiveStreamPreFetchBaseParams <WCFinderNavLiveStreamL2CacheKeyProtocol>

@property (nonatomic) unsigned long long containerId;
@property (retain, nonatomic) NSMutableArray *containerContext;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo;
@property (nonatomic) BOOL isPreRecommendRequest;
@property (nonatomic) BOOL isKaraPredicted;
@property (nonatomic) float predictScore;
@property (retain, nonatomic) FinderLiveDiscoverPreloadConfig *preloadConfig;
@property (nonatomic) unsigned long long cacheDurationInSeconds;
@property (retain, nonatomic) NSData *jumpNavliveBuffer;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) int fromScene;
@property (nonatomic) unsigned long long relatedObjectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)prefetchCacheHashKey;
- (BOOL)isRequestEqaulToCache:(id)a0;
- (BOOL)isDiscoveryPrefetch;
- (BOOL)needL2PrefetchCache;
- (id)prefetchL2CacheKey;
- (void).cxx_destruct;

@end
