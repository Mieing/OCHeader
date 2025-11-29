@class NSString, IESECMallLynxRenderMonitor, IESECLynxCard, UIView;

@interface IESECMallPopupTaskView : IESECMallPopupTaskBaseView <IESECLynxCardDelegate, IESECListCardsContextDelegate>

@property (retain, nonatomic) IESECLynxCard *popupView;
@property (retain, nonatomic) UIView *popupMaskView;
@property (nonatomic) BOOL lynxViewDidLoad;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) BOOL showInWindow;
@property (nonatomic) unsigned long long lastPageVisibleStatus;
@property (retain, nonatomic) IESECMallLynxRenderMonitor *lynxRenderMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFirstScreen:(id)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)lynxCard:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)currentCardsWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (void)lynxCard:(id)a0 receiveError:(id)a1;
- (void)lynxCard:(id)a0 didUpdateDataWithLynxViewFromType:(unsigned long long)a1 perfDict:(id)a2;
- (BOOL)pageDidAppeared;
- (id)currentListContextIdForCards;
- (id)currentBridgeCallHanderForCards;
- (id)currentListHomePageView;
- (id)hybridMonitorContext;
- (void)addMaskView;
- (void)createLynxCard;
- (void)sendPageVisibilityChangeEvent:(unsigned long long)a0;
- (id)curLogPageName;
- (void)setGreyStyle;
- (BOOL)lynxCardEnableForest;
- (id)globalXBridges;
- (id)globalExtra;
- (id)rootGlobalExtra;
- (id)initWithPopupConfig:(id)a0 delegate:(id)a1 uniqueId:(id)a2;
- (void)showInView:(id)a0 zIndex:(long long)a1;
- (void)showInWindowWithZIndex:(long long)a0;
- (void)showLynxCardWithAnimation;
- (void)maskTapAction;
- (void)mallVCWillDisappear:(id)a0;
- (void)mallVCDidAppear:(id)a0;
- (void)updateLayoutPopupView:(id)a0;
- (void)reportPopupHideByDrift:(BOOL)a0;
- (void)viewDidAppear;
- (void)dismiss;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)appWillEnterForeground:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)viewDidDisappear;
- (void)addObservers;

@end
