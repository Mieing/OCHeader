@class UIView;

@interface AWEHalfScreenPresentationController : UIPresentationController

@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) double customHeightOfPresentedView;

- (void).cxx_destruct;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)a0;

@end
