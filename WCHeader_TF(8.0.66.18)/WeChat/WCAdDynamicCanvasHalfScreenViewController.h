@class WCAdExpressionCanvasHalfScreenJumpInfo, WCAdDynamicCanvasPageInfo, WCAdDynamicCanvasViewController, NSString, UIPanGestureRecognizer;

@interface WCAdDynamicCanvasHalfScreenViewController : MMUIHalfScreenViewController <WCAdDynamicCanvasViewControllerDelegate, WCFinderHalfScreenProtocol, WCFinderFeedBaseViewControllerProtocol, UIGestureRecognizerDelegate>

@property (readonly, nonatomic) WCAdDynamicCanvasPageInfo *pageInfo;
@property (retain, nonatomic) WCAdExpressionCanvasHalfScreenJumpInfo *halfJumpInfo;
@property (retain, nonatomic) WCAdDynamicCanvasViewController *dynamicCanvasViewController;
@property (nonatomic) BOOL willJumpToHalfOtherContent;
@property (retain, nonatomic) UIPanGestureRecognizer *contentViewPanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDynamicCanvasViewController:(id)a0 halfJumpInfo:(id)a1;
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
- (void)initPanGesture;
- (void)handlePanGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)onHalfScreenCanvasPageWillShowKeyboardWithDuration:(double)a0;
- (void)onHalfScreenCanvasPageWillHideKeyboardWithDuration:(double)a0;
- (void)onHalfScreenCanvasJumpToH5:(id)a0 extraInfo:(id)a1;
- (void)onHalfScreenCanvasJumpToWeApp:(id)a0 sceneNote:(id)a1;
- (void)onHalfScreenCanvasJumpToCanvas:(id)a0 uxInfo:(id)a1 canvasDynamicInfo:(id)a2 noStore:(BOOL)a3;
- (void)onClickWithJumpInfo:(id)a0 style:(id)a1;
- (void)onHalfScreenExpandToTop;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)a0;
- (void)contentTopDidChangeFromTop:(double)a0 toTop:(double)a1;
- (double)fetchHalfScreenPageHeight;
- (BOOL)isPanVerticalGesture:(id)a0;
- (BOOL)isPanUpGesture:(id)a0;
- (void).cxx_destruct;

@end
