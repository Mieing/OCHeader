@class CAKSwipeInteractionController, NSString;

@interface CAKModalTransitionDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) CAKSwipeInteractionController *swipeInteractionController;
@property (nonatomic) double presentDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;

@end
