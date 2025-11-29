@interface AWENearbyTransformerPreloadManager : NSObject

@property (nonatomic) BOOL hasGrouponAlreadyStartedPreload;
@property (nonatomic) BOOL hasNearbyAlreadyStartedPreload;
@property (nonatomic) BOOL hasOrderCenterAlreadyStartedPreload;
@property (nonatomic) BOOL isPreloadSuccess;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)prefetchOrderCenterGeckoResourceIfNeed;
- (void)prefechTransformerGeckoResourceIfNeed;
- (void)__preloadOrderCenterResourceWithArr:(id)a0;
- (void)__trackWithPreloadResult:(id)a0;
- (void)__preloadLynxViewWithScene:(long long)a0 cardType:(long long)a1 url:(id)a2 preloadResult:(id)a3;
- (void)preloadTransformer;
- (void)preloadOrderCenter;
- (void)__preloadTransformerResourceWithArr:(id)a0 lynxPreload:(BOOL)a1;
- (void)prefechNearbyTransformerGeckoResourceIfNeed;
- (void)prefechGrouponTransformerGeckoResourceIfNeed;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
