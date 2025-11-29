@class NSString, WCAdExpressionCanvasHalfScreenJumpInfo, WCAdCanvasExtraParams, WCAdvertiseInfo, UIView, WCCanvasPageViewController;

@interface WCCanvasHalfScreenViewController : MMUIHalfScreenViewController <WCCanvasPageViewControllerDelegate, WCFinderHalfScreenProtocol, WCFinderCardWebViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCAdvertiseInfo *adInfo;
@property (retain, nonatomic) NSString *canvasId;
@property (nonatomic) int scene;
@property (retain, nonatomic) WCAdExpressionCanvasHalfScreenJumpInfo *halfJumpInfo;
@property (retain, nonatomic) UIView *floatContainerView;
@property (retain, nonatomic) WCCanvasPageViewController *canvasViewController;
@property (nonatomic) BOOL willJumpToHalfOtherContent;
@property (retain, nonatomic) WCAdCanvasExtraParams *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAdvertiseInfo:(id)a0 canvasId:(id)a1 scene:(int)a2 halfJumpInfo:(id)a3;
- (void)commonInit;
- (void)viewDidLoad;
- (void)viewWillPush:(BOOL)a0;
- (void)viewWillPresent:(BOOL)a0;
- (double)getMaxHalfScreenHeight;
- (void)viewWillPopOrDismiss:(BOOL)a0;
- (BOOL)shouldChangeDetailScrollViewHeightWhileScrolling;
- (void)willJumpToOthers;
- (BOOL)useTransparentNavibar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)doClickCloseWithNeedAnimated:(BOOL)a0 action:(long long)a1;
- (void)updateCanvasView;
- (void)updateCommonUI;
- (void)transferFloatContainerView;
- (void)setCanvasExtraParamInfo:(id)a0;
- (void)onHalfScreenCanvasPageWillShowKeyboardWithDuration:(double)a0;
- (void)onHalfScreenCanvasPageWillHideKeyboardWithDuration:(double)a0;
- (double)onHalfScreenCanvasGetMaxHalfScreenHeight;
- (void)onHalfScreenCanvasJumpToH5:(id)a0 extraInfo:(id)a1;
- (void)onHalfScreenCanvasJumpToWeApp:(id)a0 sceneNote:(id)a1;
- (void)onHalfScreenCanvasJumpToCanvas:(id)a0 uxInfo:(id)a1 noStore:(BOOL)a2;
- (void)onClickWithJumpInfo:(id)a0 style:(id)a1;
- (id)onHalfScreenCanvasFetchHalfScreenJumpInfo;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)a0;
- (void)contentTopDidChangeFromTop:(double)a0 toTop:(double)a1;
- (void).cxx_destruct;

@end
