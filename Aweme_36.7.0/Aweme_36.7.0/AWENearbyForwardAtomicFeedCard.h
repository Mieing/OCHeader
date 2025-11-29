@class NSMapTable, NSDictionary, NSString, AWENearbyTabForwardContext, AWENearbyPageContext, UIViewController;
@protocol AWENearbyTabForwardAblityProtocol, AWEHPPinTopComponentTaskProtocol, AWENearbyContainerChildProtocol;

@interface AWENearbyForwardAtomicFeedCard : NSObject <AWENearbyC2FeedEventMessage, AWENearbyForwardAtomicProtocol>

@property (retain, nonatomic) NSMapTable *subscriberDict;
@property (retain, nonatomic) id<AWENearbyTabForwardAblityProtocol> tabForwardImp;
@property (retain, nonatomic) id<AWEHPPinTopComponentTaskProtocol> task;
@property (retain, nonatomic) AWENearbyTabForwardContext *context;
@property (nonatomic) BOOL hasSlideDualFeed;
@property (nonatomic) BOOL shouldInsertWhenEndScroll;
@property (nonatomic) BOOL willInsert;
@property (copy, nonatomic) NSDictionary *trackParamWhenEndScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWENearbyContainerChildProtocol> *c2ViewController;
@property (copy, nonatomic) id /* block */ tabForwardBlock;

- (void)nearbyC2FeedWillRefreshedWithContext:(id)a0;
- (void)nearbyC2FeedDidEndScrollWithContext:(id)a0;
- (void)nearbyC2FeedDidScrollWithContext:(id)a0;
- (void)addEventCenterObserver;
- (void)unregisterBDXSubscriber;
- (void)execTabForwardTask;
- (void)subscribeBDXWithEventName:(id)a0 callback:(id /* block */)a1;
- (void)tryToShowForwardTabViewWith:(id)a0 complete:(id /* block */)a1;
- (void)preCheckoutWithBlk:(id /* block */)a0;
- (id)insertDualFeedCard;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
