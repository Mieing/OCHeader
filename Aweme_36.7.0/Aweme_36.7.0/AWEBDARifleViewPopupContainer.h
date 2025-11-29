@class AWEBDARifleView, NSString, AWEAwemeModel, NSURL, UIView, AWEOriginalAdModel, BDUGFlowAuthToken, NSDictionary, UIViewController, AWEBDARifleViewConfiguration;
@protocol AWEBDARifleViewPopupEventProtocol, BDXPopupContainerProtocol, BDXKitViewProtocol, AWEBDARifleViewDelegate;

@interface AWEBDARifleViewPopupContainer : UIView <BDXPopupContentProtocol, BDXPopupEventProtocol, BDXContainerLifecycleProtocol, AWEBDARifleViewPopupEventProtocol, AWEBDARifleViewDelegate>

@property (nonatomic) BOOL hasFallback;
@property (copy, nonatomic) NSString *containerID;
@property (nonatomic) double startTime;
@property (retain, nonatomic) BDUGFlowAuthToken *jumpToken;
@property (nonatomic) BOOL isRequestSuccess;
@property (copy, nonatomic) NSString *requestErrorMsg;
@property (retain, nonatomic) AWEBDARifleView *bdaRifleView;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (retain, nonatomic) AWEBDARifleViewConfiguration *config;
@property (weak, nonatomic) id<AWEBDARifleViewPopupEventProtocol> popupEventDelegate;
@property (weak, nonatomic) id<AWEBDARifleViewDelegate> lifecycleDelegate;
@property (weak, nonatomic) UIViewController<BDXPopupContainerProtocol> *popupViewController;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) NSDictionary *anchorPageInfo;
@property (copy, nonatomic) id /* block */ getPageInfoCompletion;
@property (nonatomic) BOOL isFromFeedAnchor;
@property (readonly, nonatomic) NSURL *originURL;
@property (nonatomic) long long bdxContentMode;
@property (readonly, nonatomic) long long viewType;
@property (readonly, nonatomic) UIView<BDXKitViewProtocol> *kitView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateConfig:(id)a0 aweme:(id)a1;
+ (void)trackAnchorPagePreloadWithStatus:(id)a0 params:(id)a1;

- (void)loadWithParam:(id)a0 context:(id)a1;
- (id)containerLifecycleDelegate;
- (void)handleViewDidAppear;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (BOOL)shouldShowLoadFailedViewWithError:(id)a0;
- (void)popup:(id)a0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)popupDidCloseWithContainer:(id)a0 params:(id)a1;
- (BOOL)handlePopupResizeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)popupWillLeaveStatus:(long long)a0 withContainer:(id)a1;
- (void)popupDidChangeToStatus:(long long)a0 withContainer:(id)a1;
- (void)updateStartTime;
- (void)rifleViewWillStartLoading:(id)a0;
- (void)rifleView:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)rifleViewDidStartLoading:(id)a0;
- (void)rifleView:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)rifleView:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)rifleViewvDidFirstScreen:(id)a0;
- (void)rifleView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (void)rifleViewDidUpdate:(id)a0;
- (void)rifleView:(id)a0 didRecieveError:(id)a1;
- (void)rifleView:(id)a0 didReceivePerformance:(id)a1;
- (void)rifleViewDidPageUpdate:(id)a0;
- (void)rifleViewDidConstructJSRuntime:(id)a0;
- (void)rifleView:(id)a0 updateTitle:(id)a1;
- (id)lynxBridges;
- (void)trackStayTime;
- (void)sendAnchorPageInfo:(id)a0 error:(id)a1;
- (void)loadWithParam:(id)a0 context:(id)a1 isPad:(BOOL)a2;
- (id)padBridges;
- (void)sendRequestTrackerIsSync:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadWithContext:(id)a0;
- (void)handleViewDidDisappear;

@end
