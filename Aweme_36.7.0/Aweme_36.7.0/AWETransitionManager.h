@class NSLock, NSString, AWETransitionContext, NSMutableArray, UIViewController;
@protocol UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

@interface AWETransitionManager : NSObject <UIGestureRecognizerDelegate> {
    NSLock *_patternLock;
}

@property (retain, nonatomic) NSMutableArray *registeredPatterns;
@property (weak, nonatomic) UIViewController *fromViewController;
@property (weak, nonatomic) UIViewController *toViewController;
@property (weak, nonatomic) id fromContextProvider;
@property (weak, nonatomic) id toContextProvider;
@property (copy, nonatomic) NSString *nextContextProviderClassName;
@property (nonatomic) unsigned long long transitionType;
@property (retain, nonatomic) AWETransitionContext *precalculatedContext;
@property (retain, nonatomic) AWETransitionContext *currentContext;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long lastPanGestureState;
@property (copy, nonatomic) id /* block */ delayEndPercentageDriveBlock;
@property (readonly, nonatomic) UIViewController *currentFromViewController;
@property (readonly, nonatomic) UIViewController *currentToViewController;
@property (readonly, nonatomic) id currentFromContextProvider;
@property (readonly, nonatomic) id currentToContextProvider;
@property (readonly, nonatomic) BOOL animating;
@property (nonatomic) BOOL enablePopTransitionFix;
@property (nonatomic) BOOL enableCancelPanFix;
@property (nonatomic) BOOL enableTransitionPatternsMatchOpt;
@property (nonatomic) BOOL enableClearSessionFix;
@property (nonatomic) BOOL enableFinishPanCompletionFix;
@property (nonatomic) BOOL enableAccessNavWhenDeallocFix;
@property (nonatomic) BOOL enableSystemGestureConflictFix;
@property (nonatomic) BOOL enableInteractiveTransitionCompletionFix;
@property (weak, nonatomic) UIViewController *lastestNavigationControllerCaller;
@property (retain, nonatomic) id<UIViewControllerAnimatedTransitioning> currentAnimationController;
@property (retain, nonatomic) id<UIViewControllerInteractiveTransitioning> currentInteractionController;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> currentTransitioningContext;
@property (copy, nonatomic) id /* block */ gestureShouldBeginBlock;
@property (copy, nonatomic) id /* block */ transitionDidBeginBlock;
@property (copy, nonatomic) id /* block */ transitionDidEndBlock;
@property (copy, nonatomic) id /* block */ transitionRestoreBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)runOnceForLazyRegister;
+ (id)sharedInstance;

- (void)notifyFromContextProvider:(id)a0;
- (void)notifyToContextProvider:(id)a0;
- (void)notifyNextTransitionProviderClassName:(id)a0;
- (void)tryToCancelPinchTransitionWithFromProtocol:(id)a0;
- (double)scaleThresholdForPatternType:(unsigned long long)a0;
- (void)notifyTransitionFromViewController:(id)a0 toViewController:(id)a1 withTransitionType:(unsigned long long)a2;
- (void)registerWithFromProtocol:(id)a0 toProtocol:(id)a1 contextProvider:(Class)a2 typeMask:(unsigned long long)a3 interactionMask:(unsigned long long)a4;
- (unsigned long long)directionForPan:(id)a0;
- (void)notifyExternalTransitionAnimatingDidEnd;
- (void)notifyExternalTransitionAnimatingDidStart;
- (id)possiblePatternsForContext:(id)a0;
- (BOOL)panGestureRecognizerShouldBegin:(id)a0;
- (BOOL)pinchGestureRecognizerShouldBegin:(id)a0;
- (id)candidatePatternsWithRegisteredPatterns:(id)a0 context:(id)a1;
- (void)notifyAnimation:(BOOL)a0;
- (double)progressForDirection:(unsigned long long)a0 startLocation:(struct CGPoint { double x0; double x1; })a1 currentLocation:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })vectorForDirection:(unsigned long long)a0;
- (void)handleEndPercentageDrive:(id)a0 shouldComplete:(BOOL)a1;
- (BOOL)shouldDelayEndPercentageDrive;
- (void)finishPanAnimation;
- (void)cancelPanAnimation;
- (double)progressForPatternType:(unsigned long long)a0 currentScale:(double)a1;
- (void)finishPinchAnimation;
- (void)cancelPinchAnimation;
- (unsigned long long)zoomTypeForPinch:(id)a0;
- (void)cancelOrFinishPinchAnimation:(BOOL)a0;
- (double)scrollDistanceForDirection:(unsigned long long)a0 startLocation:(struct CGPoint { double x0; double x1; })a1 currentLocation:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)dealloc;
- (void)clearSession;
- (void)handlePinchGesture:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
