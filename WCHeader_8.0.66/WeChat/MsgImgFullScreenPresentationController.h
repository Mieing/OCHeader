@class UIViewController;

@interface MsgImgFullScreenPresentationController : UIPresentationController

@property (retain, nonatomic) UIViewController *sourceViewController;

- (BOOL)shouldIgnoreCallback;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;

@end
