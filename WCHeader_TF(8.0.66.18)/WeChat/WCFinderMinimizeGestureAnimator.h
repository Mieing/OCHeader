@class NSMutableArray, WCFinderTransitionAnimatorList, WCFinderTransitionUserInfo, NSString, UIView, UIPercentDrivenInteractiveTransition, UIViewController;
@protocol WCFinderMinimizeGestureAnimatorDelegate, UIViewControllerContextTransitioning;

@interface WCFinderMinimizeGestureAnimator : NSObject <UIViewControllerAnimatedTransitioning, WCFinderTransitionAnimatorCompleteable, MMUIViewControllerTransitionInfo>

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> context;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactive;
@property (retain, nonatomic) UIView *fromView;
@property (weak, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) UIView *toView;
@property (weak, nonatomic) UIView *fromBarView;
@property (weak, nonatomic) UIView *toBarView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromViewInitialFrame;
@property (nonatomic) struct CGPoint { double x; double y; } beginPoint;
@property (nonatomic) BOOL animatedHiddenCellMask;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic) BOOL finishBeforeAnimation;
@property (nonatomic) BOOL forceMakeFinish;
@property (nonatomic) BOOL animationRunning;
@property (nonatomic) long long animCnt;
@property (nonatomic) long long dragDirection;
@property (nonatomic) double dragOffsetToLock;
@property (weak, nonatomic) id<WCFinderMinimizeGestureAnimatorDelegate> delegate;
@property (nonatomic) long long behavior;
@property (nonatomic) BOOL showMinimizeEntrance;
@property (retain, nonatomic) WCFinderTransitionAnimatorList *transitioningAnimationProvider;
@property (retain, nonatomic) WCFinderTransitionUserInfo *providerUserInfo;
@property (nonatomic) BOOL stopFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *animatedTransitionRespondViewController;

- (id)initWithGesture:(id)a0 behavior:(long long)a1;
- (id)initWithDragGesture:(id)a0 behavior:(long long)a1 direction:(long long)a2 offsetToLock:(double)a3;
- (id)initWithCommonGesture:(id)a0 behavior:(long long)a1;
- (BOOL)asCard;
- (BOOL)pinBack;
- (double)transitionDuration:(id)a0;
- (double)duration;
- (void)animateTransition:(id)a0;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)handleGesture:(id)a0;
- (void)dragWithProgress:(double)a0 translation:(struct CGPoint { double x0; double x1; })a1;
- (void)_endCardDragging:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 isFast:(BOOL)a2 progress:(double)a3;
- (void)_beginAnimation:(double)a0;
- (void)_cancelAnimation:(double)a0;
- (void)onAnimationEnd:(BOOL)a0;
- (void)handleDrag:(id)a0;
- (BOOL)isViewControllerBePoping:(id)a0;
- (void)forceMakeAnimationFinish;
- (void).cxx_destruct;

@end
