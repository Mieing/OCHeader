@class NSString, BDXBridgeEventSubscriber, AWEBinding, AFDLynxPanelConfig, UIViewController;
@protocol BDXPopupContainerProtocol, AWEFeedViewedViewBarControllerProtocol;

@interface AFDFeedBottomBarVideoAnalysisPanelManager : NSObject <BDXContainerLifecycleProtocol, BDXPopupEventProtocol, DUXPopoverDelegate, AFDFeedBottomBarVideoAnalysisPanelManagerProtocol>

@property (retain, nonatomic) UIViewController<BDXPopupContainerProtocol> *lynxContainerVC;
@property (nonatomic) double panelHeight;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) id /* block */ progressSyncHandler;
@property (copy, nonatomic) id /* block */ imageAlbumProgressSyncHandler;
@property (copy, nonatomic) id /* block */ videoPlayHandler;
@property (retain, nonatomic) AWEBinding *videoControlBinding;
@property (retain, nonatomic) AFDLynxPanelConfig *lynxPanelconfig;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isPlayWhenDisapper;
@property (nonatomic) BOOL isShowingPopover;
@property (nonatomic) BOOL shouldShowViewListAfterClosePanel;
@property (retain, nonatomic) NSString *awemeIDTrackedLastTime;
@property (nonatomic) BOOL isTryingToShowPanel;
@property (weak, nonatomic) id<AWEFeedViewedViewBarControllerProtocol> barController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)personalPageBottomBarStyleWithAweme:(id)a0;
+ (unsigned long long)inspirationEntranceStyleWithAweme:(id)a0;
+ (BOOL)isVideoAnalysisEntranceClickableForModel:(id)a0;
+ (BOOL)isShowingVideoAnalysisPanel;
+ (long long)validDurationForVideoAnalysis;
+ (void)setShowingVideoAnalysisPanel:(BOOL)a0;
+ (id)authorityStatusForModel:(id)a0;
+ (unsigned long long)inspirationEntranceStyle;
+ (unsigned long long)personalPageBottomBarStyle;
+ (BOOL)isVideoCreateTimeValidForModel:(id)a0;
+ (BOOL)shouldShowVideoAnalysisButtonForModel:(id)a0;

- (void)containerViewControllerViewDidAppear:(id)a0;
- (void)containerViewControllerViewDidDisAppear:(id)a0;
- (void)popoverDidDisappear:(id)a0;
- (void)popoverDidAppear:(id)a0;
- (void)panelWillShow;
- (void)panelDidShow;
- (void)popup:(id)a0 willChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withDuration:(double)a3;
- (void)popup:(id)a0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)popupDidCloseWithContainer:(id)a0 params:(id)a1;
- (void)registerLynxBridge;
- (void)setupBinding;
- (void)sendEventToLynxContainer:(id)a0 params:(id)a1;
- (id)lynxPanelSchema;
- (id)generateSchemaParamsWhenOpenPanel;
- (long long)getPlayState;
- (void)unregisterLynxBridge;
- (id)generateVVInfoParams;
- (void)handleLynxEvent:(id)a0 withParams:(id)a1;
- (void)handleLynxVideoControlEventWithParams:(id)a0;
- (void)handleLynxVideoSeekEventWithParams:(id)a0;
- (void)handleLynxImageAlbumSeekEventWithParams:(id)a0;
- (void)panelDidClose;
- (void)removeBinding;
- (id)createLynxPanelConfigWithBarController:(id)a0;
- (void)trackVideoAnalysisShowIfNeed:(id)a0 enterMethod:(id)a1;
- (void)trackVideoAnalysisClick:(id)a0;
- (void)showVideoAnalysisPanelWithConfig:(id)a0;
- (void).cxx_destruct;

@end
