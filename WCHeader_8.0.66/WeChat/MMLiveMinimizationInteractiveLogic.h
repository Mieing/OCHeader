@class MMLiveCustomTransition, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, NSString, MinimizeNewTransitionController, UIView, UIViewController;
@protocol MMLiveMinimizationInteractiveDelegate, MMLiveCustomTransitionDelegate;

@interface MMLiveMinimizationInteractiveLogic : NSObject <MinimizeNewTransitionControllerDelegate> {
    BOOL _hasActivateMinimizeArea;
}

@property (retain, nonatomic) MinimizeNewTransitionController *transitionController;
@property (retain, nonatomic) MMLiveCustomTransition *customTransition;
@property (retain, nonatomic) UIView *minimizeContainerView;
@property (nonatomic) BOOL isLastInteractiveWithFullScreen;
@property (weak, nonatomic) UIViewController *attachViewController;
@property (weak, nonatomic) id<MMLiveMinimizationInteractiveDelegate> minimizationInteractiveDelegate;
@property (weak, nonatomic) id<MMLiveCustomTransitionDelegate> liveCustomTransitionDelegate;
@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)minimizeInteractiveLogic;

- (id)init;
- (id)getDismissLeftToRightAnimationControllerForDismissedController:(id)a0;
- (id)getDismissLeftToRightInteractionControllerForDismissal:(id)a0;
- (void)updateLastInteractiveWithFullScreen:(BOOL)a0;
- (void)clearLastInteractiveWithFullScreen;
- (void)setAttachViewController:(id)a0;
- (id)attachViewController;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)a0;
- (BOOL)isSupportScreenAnySwipeFromLeftToRight:(id)a0;
- (BOOL)isSupportScreenAnySwipeFromTopToBottom:(id)a0;
- (unsigned long long)shouldGesture:(id)a0 withinMinimizeTransitionController:(id)a1 requireFailureOfGestureRecognizerAsPrecondition:(id)a2;
- (id)getPresentingViewControllerClassName:(id)a0;
- (BOOL)shouldBeginMinimizeCircleInteraction;
- (BOOL)useNewMinimizeTransition:(id)a0 withTransitionType:(unsigned int)a1;
- (id)getMinimizationTransitionContext;
- (void)onMinimizeTransitionBegin:(unsigned int)a0;
- (void)onMinimizeTransitionWillEnd:(unsigned int)a0 isComplete:(BOOL)a1;
- (void)onMinimizeAnimationCompleteDone;
- (void)onMinimizeAnimationRecoverDone;
- (void)onMinimizeTransitionWillEndWithCompleted:(BOOL)a0;
- (void)onMinimizeTransitionDidEndWithCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
