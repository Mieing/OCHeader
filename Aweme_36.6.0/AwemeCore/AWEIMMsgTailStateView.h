@class UIImageView, AWEIMMessageSendProgressView;

@interface AWEIMMsgTailStateView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEIMMessageSendProgressView *sendingProgress;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)configWithModel:(id)a0;
- (void)addSubviews;
- (id)initWithTapGestureAndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showSendingProgressView:(BOOL)a0;
- (void)updateSendingProgress:(double)a0;
- (void)p_viewDidTapped;
- (void)removeRotateAnimation;
- (void)addRotateAnimationIfNeed:(BOOL)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
