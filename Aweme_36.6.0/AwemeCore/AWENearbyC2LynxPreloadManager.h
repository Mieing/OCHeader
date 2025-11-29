@class AWENearbyLynxCardPreloadConfig, NSMutableDictionary, AWENearbyLynxPreloadFeedHandler, NSMutableArray, AWENearbyEmptyCardPreloadConfig, NSObject, NSNumber, AWENearbyLynxPreloadTransformerHandler;
@protocol OS_dispatch_queue;

@interface AWENearbyC2LynxPreloadManager : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (retain, nonatomic) AWENearbyLynxPreloadFeedHandler *feedHandler;
@property (retain, nonatomic) AWENearbyLynxPreloadTransformerHandler *transformerHandler;
@property (nonatomic) BOOL isPreloadCancelled;
@property (retain, nonatomic) NSMutableArray *preloadModels;
@property (retain, nonatomic) NSNumber *delayTime;
@property (nonatomic) long long currentPreloadIndex;
@property (nonatomic) long long currentPreloadTransformerCount;
@property (nonatomic) long long currentPreloadFeedCount;
@property (retain, nonatomic) NSMutableDictionary *feedCachedDatas;
@property (retain, nonatomic) NSMutableDictionary *transformerCachedDatas;
@property (retain, nonatomic) AWENearbyEmptyCardPreloadConfig *emptyCardConfig;
@property (retain, nonatomic) AWENearbyLynxCardPreloadConfig *lynxCardPreloadConfig;
@property (nonatomic) BOOL hasPreloadedTransformerView;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)cancelPreload;
- (void)preloadLynxContainerIfNeedForScene:(unsigned long long)a0;
- (void)__preloadLynxContainersForSceneGroupon;
- (void)__preloadEmptyLynxContainerForSceneGroupon;
- (void)__preloadLynxContainerForSceneFeed;
- (void)__preloadEmptyLynxContainerForSceneFeed;
- (void)__processPreloadDataWithCompletion:(id /* block */)a0;
- (void)__transformeLocalCacheToPreloadModels;
- (void)__transformeConfigToPreloadModels;
- (id)__bundleForUrl:(id)a0;
- (void)__preloadLynxContainerWithObj:(id)a0;
- (id)transformerLynxContainerForURL:(id)a0 useScene:(unsigned long long)a1;
- (id)feedLynxContainerForURL:(id)a0 useScene:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
