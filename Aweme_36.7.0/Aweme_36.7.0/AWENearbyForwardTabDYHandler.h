@class UIViewController, NSString, NSMutableDictionary, AWENearbyPageContext, NSMutableArray, AWENearbyResourceResponse;
@protocol AWENearbyContainerChildProtocol;

@interface AWENearbyForwardTabDYHandler : NSObject <AWENearbyC2FeedEventMessage, AWENearbyForwardTabHandlerProtocol>

@property (retain, nonatomic) NSMutableDictionary *trriggerSceneRecords;
@property (retain, nonatomic) NSMutableDictionary *forwardManagers;
@property (retain, nonatomic) NSMutableDictionary *forwardContexts;
@property (retain, nonatomic) NSMutableArray *enterTabTimers;
@property (nonatomic) long long clickNum;
@property (copy, nonatomic) NSString *forwardClickPosition;
@property (retain, nonatomic) AWENearbyResourceResponse *lastResource;
@property (nonatomic) BOOL enableForward;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWENearbyContainerChildProtocol> *c2ViewController;

- (void)applicationEnterBackground;
- (void)applicationBecomeActive;
- (void)nearbyC2FeedWillRefreshedWithContext:(id)a0;
- (void)nearbyC2FeedScrollViewDidEndDraggingWithContext:(id)a0;
- (void)nearbylifeC2PageFetchFinish:(id)a0 resource:(id)a1 refreshContext:(id)a2 isRefresh:(BOOL)a3;
- (id)initWithPageContext:(id)a0 c2ViewController:(id)a1;
- (void)enterNearbyLifeTab;
- (void)leaveNearbyLifeTab;
- (void)setupBindObserver;
- (void)recordFrequencyWithContext:(id)a0 action:(id)a1;
- (void)handleTriggers:(id)a0 finalBlk:(id /* block */)a1;
- (BOOL)inCurrentTab;
- (BOOL)inCurrentTabAndTopVc;
- (void)handleResourceResponseWith:(id)a0;
- (void)handleResourceResponseWith:(id)a0 guideType:(unsigned long long)a1;
- (void)readStayTimer:(id)a0 guideType:(unsigned long long)a1;
- (void)handleGuides:(id)a0 index:(long long)a1 triggers:(id)a2 hasShow:(BOOL)a3 lastShowGuide:(unsigned long long)a4 finalBlk:(id /* block */)a5;
- (void)trackPintopTrigger:(id)a0 triggerType:(unsigned long long)a1;
- (void)tryShowGuideView:(id)a0 triggerType:(unsigned long long)a1 complete:(id /* block */)a2;
- (id)contextWithTabGuide:(id)a0;
- (id)triggerStringAdapt:(unsigned long long)a0;
- (id)couponInfoExtraParam:(id)a0;
- (void)showNearbyPinTopForDuration:(id)a0 duration:(long long)a1;
- (id)compnonentIdWithType:(unsigned long long)a0;
- (void)showToast:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)initData;

@end
