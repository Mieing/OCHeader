@class NSString, UIPinchGestureRecognizer, AWEDCFeedBaseController, UIView;
@protocol AWEFeedNewDoubleColumnSwitchToSingleWithCoverControllerProtocol;

@interface AWEFeedNewDoubleColumnPinchOptController : AWEDCFeedBaseController <UIGestureRecognizerDelegate, AWEFeedNewDoubleColumnPinchOptControllerProtocol>

@property (weak, nonatomic) AWEDCFeedBaseController<AWEFeedNewDoubleColumnSwitchToSingleWithCoverControllerProtocol> *switchController;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (retain, nonatomic) UIView *pinchTargetView;
@property (retain, nonatomic) UIView *animationContainerView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *skeletonView;
@property (retain, nonatomic) UIView *tipsView;
@property (nonatomic) BOOL hasChangedPinchDirection;
@property (nonatomic) BOOL hasMatchedScaleLessThanOne;
@property (nonatomic) BOOL hasMatchedScaleMoreThanOne;
@property (nonatomic) BOOL hasTriggerHaptic;
@property (nonatomic) BOOL hasMatchedQuitDoubleColumnScaleThreshold;
@property (nonatomic) BOOL isPinching;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finishFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } coverInitialFrame;
@property (nonatomic) BOOL alreadyHandlePinch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (id)createMaskView;
- (id)pinchBackgroundViewWithHiddenTabBar:(BOOL)a0;
- (id)getPinchTipsView;
- (id)getPinchTargetView;
- (double)quitDoubleColumnPinchScaleThreshold;
- (double)pinchTargetViewTransformMaxPinchScale;
- (BOOL)enablePinchHaptic;
- (id)createAnimationContainerView;
- (id)createTopBarSkeletonView;
- (id)createTipsView;
- (void)setupPinchGesture;
- (void)handleSmallWindowPinchExit;
- (void)handlePinchGestureBegan:(id)a0;
- (void)handlePinchGestureChanged:(id)a0;
- (void)handlePinchGestureEnded:(id)a0;
- (id)createPinchTargetView;
- (double)calculatePinchTargetViewTransformWithPinchScale:(double)a0;
- (double)calculatePinchTargetViewAlphaWithPinchScale:(double)a0;
- (double)calculateSwitchButtonTransformWithPinchScale:(double)a0;
- (double)calculateSwitchButtonAlphaWithPinchScale:(double)a0;
- (double)calculateMaskViewAlphaWithPinchScale:(double)a0;
- (double)calculateSkeletonAndTipsAlphaWithPinchScale:(double)a0;
- (void)resetPinchAnimation;
- (double)coverPinchRatio;
- (id)createTabSkeleton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pinchTargetViewFrame;
- (id)createFakeTabBarView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)handlePinchGesture:(id)a0;
- (void)containerViewDidLoad;

@end
