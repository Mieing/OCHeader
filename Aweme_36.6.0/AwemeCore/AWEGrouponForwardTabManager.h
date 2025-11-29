@class NSString, AWEGrouponPageContext, AWEGrouponTabForwardContext, UIViewController;
@protocol AWEGrouponForwardAtomicProtocol, AWEGrouponContainerChildProtocol;

@interface AWEGrouponForwardTabManager : NSObject <AWEGrouponForwardAtomicProtocol>

@property (retain, nonatomic) id<AWEGrouponForwardAtomicProtocol> feedCardAtomic;
@property (retain, nonatomic) id<AWEGrouponForwardAtomicProtocol> bottomPageAtomic;
@property (retain, nonatomic) id<AWEGrouponForwardAtomicProtocol> snackBarAtomic;
@property (retain, nonatomic) id<AWEGrouponForwardAtomicProtocol> centerPageAtomic;
@property (retain, nonatomic) id<AWEGrouponForwardAtomicProtocol> strengthSnackBarAtomic;
@property (retain, nonatomic) AWEGrouponTabForwardContext *context;
@property (copy, nonatomic) id /* block */ tabForwardAllBlock;
@property (retain, nonatomic) AWEGrouponPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWEGrouponContainerChildProtocol> *c2ViewController;
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
