@class MMFinderLiveEnterSqaurePanGestureHandler, MMFinderLiveEnterSqaureTransitionContext, NSString;
@protocol MMFinderLiveEnterAndExitSqaureTransitionControllerDelegatge;

@interface MMFinderLiveEnterSqaureTransitionController : NSObject <MMFinderLiveEnterSqaurePanGestureHandlerDelegate, MMFinderLiveEnterSquareAnimiatedDelegate>

@property (retain, nonatomic) MMFinderLiveEnterSqaureTransitionContext *context;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) MMFinderLiveEnterSqaurePanGestureHandler *handler;
@property (weak, nonatomic) id<MMFinderLiveEnterAndExitSqaureTransitionControllerDelegatge> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onEnterSquareContext:(id)a0;
- (void)onEnterSqaureInteractiveTransitionBegin:(id)a0 isPop:(BOOL)a1;
- (void)onWillEnterSqaureInteractiveTransitionBeginHandle:(BOOL)a0;
- (void)onWillExitSqaureInteractiveTransitionBeginHandle:(BOOL)a0;
- (void)onEnterSqaureInteractiveTransitionChanged:(id)a0 progress:(double)a1 translation:(struct CGPoint { double x0; double x1; })a2 isPop:(BOOL)a3;
- (void)onEnterSqaureInteractiveTransitionWillEnd:(id)a0 isComplete:(BOOL)a1 isPop:(BOOL)a2;
- (void)onEnterSqaureInteractiveTransitionDidEnd:(id)a0 isComplete:(BOOL)a1 isPop:(BOOL)a2;
- (void)onEnterSqaureInteractiveTransitionDidEndHandle:(BOOL)a0 completion:(id /* block */)a1;
- (void)prepareForAnimation;
- (void)performAnimationWithComplete:(BOOL)a0 delay:(double)a1;
- (void)performAnimationWithComplete:(BOOL)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)performAniamtorDelay:(double)a0 completion:(id /* block */)a1;
- (void)performRecoverAnimator:(id /* block */)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (id)interactionControllerForDismissal:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)animationControllerForTrasitionType:(unsigned long long)a0 fromVC:(id)a1 toVC:(id)a2;
- (void)animationDidEnd:(BOOL)a0;
- (void).cxx_destruct;

@end
