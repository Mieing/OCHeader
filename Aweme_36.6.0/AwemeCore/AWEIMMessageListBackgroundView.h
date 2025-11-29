@class CAGradientLayer, UIView;

@interface AWEIMMessageListBackgroundView : UIImageView

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;

- (void)themeChanged;
- (void)p_updateOverlayer:(BOOL)a0;
- (void)p_topGradientLayerSetColors:(BOOL)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
