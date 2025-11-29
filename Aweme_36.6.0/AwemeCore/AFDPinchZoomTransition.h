@class NSString, UITabBarController, UIView, UIViewController;
@protocol AFDPureModePageTransitionContextProvider, AFDPinchUpdateAnimatorProtocol, AFDPinchZoomEventTrackerProtocol;

@interface AFDPinchZoomTransition : NSObject <AWETransitionContextProvider>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long pinchTransitionType;
@property (retain, nonatomic) UIViewController<AFDPureModePageTransitionContextProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AFDPureModePageTransitionContextProvider> *toCP;
@property (retain, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) UIViewController *toVC;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *blanketView;
@property (retain, nonatomic) UIView *pinchTargetView;
@property (retain, nonatomic) UIView *foregroundView;
@property (retain, nonatomic) id<AFDPinchUpdateAnimatorProtocol> updateAnimator;
@property (retain, nonatomic) UIView *tabbar;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) id<AFDPinchZoomEventTrackerProtocol> pinchZoomTracker;
@property (nonatomic) BOOL isEndingTransition;
@property (nonatomic) BOOL hasTriggeredHaptic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2 numberOfTouches:(unsigned long long)a3;
- (void)finishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)allowPinchZoomTypeForContext:(id)a0;
- (double)scaleThresholdForPatternType:(unsigned long long)a0;
- (id)getPinchTargetView;
- (id)getPureModePageVC;
- (id)getPinchBackgroundView;
- (id)getPinchForegroundView;
- (id)createUpdateAnimator;
- (void)forceExitPureModeIfNeeded;
- (double)transitionDuration;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
