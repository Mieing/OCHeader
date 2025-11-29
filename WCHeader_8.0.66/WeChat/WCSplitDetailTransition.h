@class NSString, WCSplitPropertyAnimator, WCSplitDetailPresentationController, UIPanGestureRecognizer;
@protocol WCSplitBaseTransitionDelegate, WCSplitDetailTransitionDelegate;

@interface WCSplitDetailTransition : UIPercentDrivenInteractiveTransition <WCSplitDetailPresentationControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) WCSplitDetailPresentationController *presentController;
@property (retain, nonatomic) WCSplitPropertyAnimator *animator;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL isPresent;
@property (weak, nonatomic) id<WCSplitDetailTransitionDelegate> delegate;
@property (weak, nonatomic) id<WCSplitBaseTransitionDelegate> baseDelegate;
@property (nonatomic) long long showTransitionType;
@property (nonatomic) double primaryWidth;
@property (nonatomic) BOOL forceFullScreen;
@property (nonatomic) BOOL animatedShow;
@property (nonatomic) BOOL animatedDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)updatePresentedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayMode:(long long)a1;
- (void)setupInteractiveGesture:(id)a0;
- (void)updateContentLayout;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)interactionControllerForDismissal:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animationEnded:(BOOL)a0;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (void)animateTransition:(id)a0;
- (void)setupAnimator:(id)a0;
- (void)setupShowAnimation:(id)a0;
- (void)setupDismissAnimation:(id)a0;
- (long long)currTransitionType;
- (BOOL)isAnimateEnable;
- (void)onPresentingBeginAppearanceTransition:(BOOL)a0 animated:(BOOL)a1;
- (void)onPresentingEndAppearance;
- (void)onDetailViewControllerWillChangeMode:(BOOL)a0;
- (void)onDetailViewControllerDidChangeMode:(BOOL)a0;
- (void)onDetailViewControllerDidDismissed;
- (BOOL)isForceFullScreen;
- (BOOL)isInSplitMode;
- (BOOL)wantsInteractiveStart;
- (void)handlePanGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
