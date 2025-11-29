@class NSString, UIViewController, WAMenuPopInteractiveTransition;

@interface WAPushLikePresentTransitionDelegate : NSObject <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, WAPopInteractiveTransitionDelegate> {
    WAMenuPopInteractiveTransition *_dismissInteractiveTransition;
}

@property (weak, nonatomic) UIViewController *weakPresentedVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVCToPresent:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)onPopBackInteractiveTransitionBegin:(id)a0;
- (void).cxx_destruct;

@end
