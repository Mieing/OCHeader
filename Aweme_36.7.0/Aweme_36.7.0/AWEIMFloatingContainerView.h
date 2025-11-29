@class UIVisualEffectView, UIView;

@interface AWEIMFloatingContainerView : UIView

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *separator;

- (void)addSeparatorWithPosition:(long long)a0;
- (void)addSingleSubview:(id)a0;
- (void)showBottomBlurView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)currentView;

@end
