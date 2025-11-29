@class NSString;

@interface AWEECPuzzleListener : NSObject <PuzzleKitViewLifeCycleProtocol, AWERouterDelegate>

@property (nonatomic) BOOL isHybridPageInModalView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (BOOL)isEcomHybridPageInModalView;
+ (id)findViewWithName:(id)a0 inLynxView:(id)a1;
+ (id)sharedListener;
+ (id)findScrollViewInView:(id)a0;

- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (void)kitView:(id)a0 didCreatedWithContext:(id)a1;
- (void)kitViewDidStartLoading:(id)a0;
- (void)kitViewDidFirstScreen:(id)a0;
- (void)kitView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)kitView:(id)a0 didHitCacheWithContext:(id)a1 cacheType:(unsigned long long)a2;
- (void)routerDidBeginTransferWithURLString:(id)a0;
- (void)triggerNativePrefetchIfNeeded:(id)a0;
- (BOOL)enableMarketingInPuzzle:(id)a0;
- (BOOL)enablePageDisplayCycle:(id)a0 context:(id)a1;
- (void)setupMallDeliveryDelegate:(id)a0 context:(id)a1;
- (void)updateGlobalPropsWithKitView:(id)a0 context:(id)a1;

@end
