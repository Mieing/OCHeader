@class UIPercentDrivenInteractiveTransition, NSString, UIPanGestureRecognizer;

@interface AWECommerceAnchorTransitionViewController : UINavigationController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, AWECommerceAnchorTransitionProtocol>

@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveForPresentation;
@property (retain, nonatomic) UIPanGestureRecognizer *transactionPanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)delayInTransition;
- (id)animationViewInTransition;
- (double)offsetYInTransition;
- (BOOL)needInteractiveTransition;
- (void)handleTransitionGesture:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (void)commonInit;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidLoad;
- (id)interactionControllerForDismissal:(id)a0;
- (id)maskColor;

@end
