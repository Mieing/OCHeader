@class UIViewController;

@interface WCImageFullScreenPresentationController : UIPresentationController

@property (retain, nonatomic) UIViewController *sourceViewController;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;

@end
