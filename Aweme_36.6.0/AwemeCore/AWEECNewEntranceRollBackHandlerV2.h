@class NSString, AWETabMallRollBackView, BDXBridgeEventSubscriber;

@interface AWEECNewEntranceRollBackHandlerV2 : AWEECNewEntranceRollBackBaseHandler <AWETabMallHalfScreenCycleProtocol, AWEECMallEntranceHandlerProtocol>

@property (copy, nonatomic) NSString *rollBackTarget;
@property (nonatomic) BOOL forceStack;
@property (retain, nonatomic) AWETabMallRollBackView *rollBackEntrance;
@property (nonatomic) double lastActOffset;
@property (nonatomic) double scrollDistance;
@property (nonatomic) BOOL hasMoveToWindow;
@property (nonatomic) double originEntranceBottom;
@property (nonatomic) double adjustedEntranceBottom;
@property (nonatomic) double halfScreenOpenTime;
@property (retain, nonatomic) BDXBridgeEventSubscriber *pendantSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ liveMiniShowNeedShow;

- (BOOL)isDeliveryByConcernSceneWithPageTag:(id)a0;
- (void)expandRollBack:(BOOL)a0;
- (void)deliveryPageDidRendered;
- (void)hostViewDidAppear;
- (void)hostViewDidDisappear;
- (void)tryReleaseRollBackSceneAuto;
- (void)tryRemedyAddRollBackEntrance;
- (void)hostScrollViewDidScroll:(double)a0;
- (void)tryRepaintRollBackEntranceWithViews:(id)a0;
- (void)handleRouterParams:(id)a0;
- (BOOL)sevenSplitScreenTransitionFromVideoRecommendation:(id)a0;
- (void)tryRemedyExitRollBackScene;
- (id)rollBackEntranceForAbilityModify;
- (void)p_handlerRollBackBtn:(id)a0;
- (void)p_tryAddRollBackToWindow;
- (void)p_tryReleaseRollBackSceneWithAct:(BOOL)a0;
- (void)didOpenPage:(id)a0;
- (void)willClosePage:(id)a0;
- (void)willOpenNextInPage:(id)a0;
- (void)willAppearAgainForPage:(id)a0;
- (void)didPage:(id)a0 switchToFull:(BOOL)a1;
- (void)didPage:(id)a0 scrollOffset:(double)a1;
- (void)taskBannerDidAppear:(id)a0;
- (void)taskBannerDidDisAppear:(id)a0;
- (void)taskBannerSizeChanged:(id)a0;
- (void)deliveryPageDidFirstScreen:(id)a0;
- (void)p_releaseRollBackEntranceWithAct:(BOOL)a0;
- (void)p_checkRollBackLogicWithParams:(id)a0;
- (void)p_tryAddRollBackToRealContentView;
- (void)p_tryAddRollBackEntrance;
- (void)tryRemedyShowSmallLiveWindow;
- (void)p_scrollViewDidScroll:(double)a0;
- (BOOL)p_isDeliveryScene;
- (void)p_tryStashViewControllerStack:(id)a0;
- (void)p_registerPendantEvent;
- (void)p_trackEventWithBtm:(id)a0 params:(id)a1;
- (BOOL)isMultitab;
- (void)p_notifyOutTransitionContextProvider;
- (void)p_unregistePendantEvent;
- (void).cxx_destruct;
- (id)init;

@end
