@class NSString, WCSplitOverDetailContextPresentationController;
@protocol WCSplitBaseTransitionDelegate;

@interface WCSplitOverDetailContextTransition : MMModalTransitionAnimator <WCSplitOverDetailContextPresentationDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) WCSplitOverDetailContextPresentationController *presentController;
@property (nonatomic) BOOL isPresent;
@property (weak, nonatomic) id<WCSplitBaseTransitionDelegate> baseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForPresentedView:(id)a0;
- (void)dealloc;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)interactionControllerForDismissal:(id)a0;
- (BOOL)wantsInteractiveStart;
- (void)onOverDetailViewControllerDismissed;
- (void).cxx_destruct;

@end
