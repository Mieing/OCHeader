@class NSString, IESLiveFeedDrawerTransitionConfig, UIPercentDrivenInteractiveTransition, UIPanGestureRecognizer;
@protocol IESLiveFeedDrawerTransitionDelegate;

@interface IESLiveFeedDrawerTransition : NSObject <UIGestureRecognizerDelegate, IESLiveFeedDrawerAnimatorProtocol>

@property (retain, nonatomic) UIPanGestureRecognizer *hideGesture;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *animator;
@property (copy, nonatomic) id /* block */ hideGestureShouldBegin;
@property (copy, nonatomic) id /* block */ hideGestureAction;
@property (retain, nonatomic) IESLiveFeedDrawerTransitionConfig *config;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ beginAction;
@property (copy, nonatomic) id /* block */ completeAction;
@property (weak, nonatomic) id<IESLiveFeedDrawerTransitionDelegate> delegate;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gestureChanged:(id)a0 isDismiss:(BOOL)a1;
- (BOOL)gestureShouldBegin:(id)a0 isHide:(BOOL)a1;
- (void)addHideGestureForView:(id)a0 shouldBegin:(id /* block */)a1 action:(id /* block */)a2;
- (void)createHideGestureWithShouldBegin:(id /* block */)a0 action:(id /* block */)a1;
- (void)addHideGestureForView:(id)a0;
- (void)hideGestureActions:(id)a0;
- (BOOL)enableHidePanGesture:(id)a0 withOtherPanGesture:(id)a1;
- (void)trackGestureBegin:(BOOL)a0;
- (BOOL)isCompleteVelocity:(struct CGPoint { double x0; double x1; })a0 isDismiss:(BOOL)a1;
- (void)trackGestureEnd:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)interactionControllerForPresentation:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)interactionControllerForDismissal:(id)a0;

@end
