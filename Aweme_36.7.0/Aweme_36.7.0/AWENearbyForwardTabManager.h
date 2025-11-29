@class AWENearbyPageContext, NSString, AWENearbyTabForwardContext, UIViewController;
@protocol AWENearbyForwardAtomicProtocol, AWENearbyContainerChildProtocol;

@interface AWENearbyForwardTabManager : NSObject <AWENearbyForwardAtomicProtocol>

@property (retain, nonatomic) id<AWENearbyForwardAtomicProtocol> feedCardAtomic;
@property (retain, nonatomic) id<AWENearbyForwardAtomicProtocol> bottomPageAtomic;
@property (retain, nonatomic) id<AWENearbyForwardAtomicProtocol> snackBarAtomic;
@property (retain, nonatomic) id<AWENearbyForwardAtomicProtocol> centerPageAtomic;
@property (retain, nonatomic) id<AWENearbyForwardAtomicProtocol> strengthSnackBarAtomic;
@property (retain, nonatomic) AWENearbyTabForwardContext *context;
@property (copy, nonatomic) id /* block */ tabForwardAllBlock;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWENearbyContainerChildProtocol> *c2ViewController;
@property (copy, nonatomic) id /* block */ tabForwardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackGrouponTabTopGuideMonitor:(long long)a0 errMsg:(id)a1 extraParam:(id)a2;
+ (id)compnonentIdWithType:(long long)a0;

- (void)tryToShowForwardTabViewWith:(id)a0 complete:(id /* block */)a1;
- (void)preCheckoutWithBlk:(id /* block */)a0;
- (void)clearnContext;
- (void)checkoutTabForwardTaskWithContext:(id)a0;
- (void)setupAtomicWithContext:(id)a0;
- (id)forwardAtomic:(long long)a0;
- (void).cxx_destruct;

@end
