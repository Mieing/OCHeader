@class UIImageView, UIVisualEffectView;

@interface ImageFitWithBlurredBackgroundView : MMUIView

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *realImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupBackgroundView;
- (void)setupBlurView;
- (void)setupRealImageView;
- (void)layoutSubviews;
- (void)setupImage:(id)a0;
- (void).cxx_destruct;

@end
