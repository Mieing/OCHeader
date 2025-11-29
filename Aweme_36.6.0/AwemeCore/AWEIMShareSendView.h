@class UIButton, UIView;

@interface AWEIMShareSendView : UIView

@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIView *gradientMask;

- (void)updateUIWithSelectedCount:(unsigned long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
