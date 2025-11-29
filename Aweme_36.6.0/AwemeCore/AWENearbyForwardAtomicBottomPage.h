@class NSMapTable, AWENearbyPageContext, NSString, AWENearbyTabForwardContext, UIViewController;
@protocol AWENearbyTabForwardAblityProtocol, AWEHPPinTopComponentTaskProtocol, AWENearbyContainerChildProtocol;

@interface AWENearbyForwardAtomicBottomPage : NSObject <AWENearbyForwardAtomicProtocol>

@property (retain, nonatomic) NSMapTable *subscriberDict;
@property (retain, nonatomic) id<AWENearbyTabForwardAblityProtocol> tabForwardImp;
@property (retain, nonatomic) id<AWEHPPinTopComponentTaskProtocol> task;
@property (retain, nonatomic) AWENearbyTabForwardContext *context;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWENearbyContainerChildProtocol> *c2ViewController;
@property (copy, nonatomic) id /* block */ tabForwardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEventCenterObserver;
- (void)unregisterBDXSubscriber;
- (void)execTabForwardTask;
- (void)subscribeBDXWithEventName:(id)a0 callback:(id /* block */)a1;
- (void)tryToShowForwardTabViewWith:(id)a0 complete:(id /* block */)a1;
- (void)preCheckoutWithBlk:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
