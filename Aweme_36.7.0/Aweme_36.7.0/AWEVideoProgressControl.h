@class UIView;

@interface AWEVideoProgressControl : AWEVideoPlayControl

@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIView *whiteStripeView;

- (void)setImageWithName:(id)a0;
- (double)progressControlHeight;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (void)layoutSubviews;

@end
