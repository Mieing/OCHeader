@interface AWEGrouponTransformerPreloadManager : NSObject

@property (nonatomic) BOOL hasAlreadyStartedPreload;
@property (nonatomic) BOOL hasOrderCenterAlreadyStartedPreload;
@property (nonatomic) BOOL isPreloadSuccess;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)prefetchOrderCenterGeckoResourceIfNeed;
- (void)prefechTransformerGeckoResourceIfNeed;
- (void)__preloadNearbyTransformerResourceWithArr:(id)a0 geckoPreload:(BOOL)a1 lynxPreload:(BOOL)a2;
- (void)__preloadOrderCenterResourceWithArr:(id)a0;
- (void)__trackWithPreloadResult:(id)a0;
- (void)__preloadLynxViewWithScene:(long long)a0 cardType:(long long)a1 url:(id)a2 preloadResult:(id)a3;
- (void)preloadTransformer;
- (void)preloadOrderCenter;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
