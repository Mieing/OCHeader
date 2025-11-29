@class AWEGrouponLynxCardPreloadConfig, NSMutableDictionary, AWEGrouponLynxPreloadTransformerHandler, NSObject, AWEGrouponEmptyCardPreloadConfig, AWEGrouponLynxPreloadFeedHandler, NSNumber, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEGrouponC2LynxPreloadManager : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (retain, nonatomic) AWEGrouponLynxPreloadFeedHandler *feedHandler;
@property (retain, nonatomic) AWEGrouponLynxPreloadTransformerHandler *transformerHandler;
@property (nonatomic) BOOL isPreloadCancelled;
@property (retain, nonatomic) NSMutableArray *preloadModels;
@property (retain, nonatomic) NSNumber *delayTime;
@property (nonatomic) long long currentPreloadIndex;
@property (nonatomic) long long currentPreloadTransformerCount;
@property (nonatomic) long long currentPreloadFeedCount;
@property (retain, nonatomic) NSMutableDictionary *feedCachedDatas;
@property (retain, nonatomic) NSMutableDictionary *transformerCachedDatas;
@property (retain, nonatomic) AWEGrouponEmptyCardPreloadConfig *emptyCardConfig;
@property (retain, nonatomic) AWEGrouponLynxCardPreloadConfig *lynxCardPreloadConfig;
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
