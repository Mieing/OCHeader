@class MMUIHalfScreenViewPresentationController, MMUIHalfScreenViewController, NSString;
@protocol MMUIHalfScreenViewPresentationAnimateTransitionDelegate;

@interface MMUIHalfScreenViewPresentationAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    BOOL m_isPresented;
}

@property (nonatomic) double presentedHeight;
@property (weak, nonatomic) MMUIHalfScreenViewPresentationController *presentationController;
@property (weak, nonatomic) MMUIHalfScreenViewController *presentedController;
@property (weak, nonatomic) id<MMUIHalfScreenViewPresentationAnimateTransitionDelegate> m_delegate;
@property (nonatomic) BOOL isResetPresentedViewFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animationForPresentedView:(id)a0;
- (void)animationForDismissedView:(id)a0;
- (void)setBottomViewHeight:(double)a0;
- (void).cxx_destruct;

@end
