@class DUXLottieView, UIView;

@interface AWEFriendsFilterGuideView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *filterGuideHintView;
@property (retain, nonatomic) DUXLottieView *hintAnimationView;

- (void)removeGuideView;
- (void)showGuideViewWithDismissCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
