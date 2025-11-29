@class AWESearchEasterEggAnimationView, UIScrollView, UIView;

@interface AWESearchEasterEggView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchEasterEggAnimationView *animationView;
@property (nonatomic) double horizontalOffset;
@property (weak, nonatomic) UIScrollView *horizontalScrollView;

- (void)p_removeAnimationView;
- (void)playAnimationWithModel:(id)a0;
- (void)horizontalScrollViewOffsetChanged;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)cancelAnimation;

@end
