@class UIScrollView, AWESearchFloatingBackgroundImageView, AWESearchFloatingBackgroundColorView;

@interface AWESearchFloatingBackgroundView : UIView

@property (retain, nonatomic) AWESearchFloatingBackgroundImageView *imageView;
@property (retain, nonatomic) AWESearchFloatingBackgroundColorView *colorView;
@property (weak, nonatomic) UIScrollView *horizontalScrollView;
@property (weak, nonatomic) UIScrollView *verticalScrollView;

- (double)resultBackgroundViewHeight;
- (void)forceHideBackground:(BOOL)a0;
- (void)horizontalScrollViewOffsetChanged;
- (void)verticalScrollViewOffsetChanged;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
