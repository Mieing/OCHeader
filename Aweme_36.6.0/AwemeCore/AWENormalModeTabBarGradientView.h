@class UIImageView, UIImage;

@interface AWENormalModeTabBarGradientView : UIView

@property (retain, nonatomic) UIImageView *lightImageView;
@property (retain, nonatomic) UIImageView *darkImageView;
@property (readonly, nonatomic) UIImage *displayingImage;

- (void)updateImage:(id)a0;
- (void)p_loadView;
- (void)setLightImageViewAlpha:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
