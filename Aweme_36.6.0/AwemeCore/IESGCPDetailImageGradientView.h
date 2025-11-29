@class UIImageView, CAGradientLayer;

@interface IESGCPDetailImageGradientView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double imageAlpha;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double gradientLayerTopMargin;
@property (retain, nonatomic) CAGradientLayer *secondGradientLayer;
@property (nonatomic) double secondGradientLayerTopMargin;
@property (nonatomic) BOOL autoFitHeight;

- (void)setGradientWithColors:(id)a0 gradientLayerTopMargin:(double)a1 locations:(id)a2;
- (void)setSecondGradientWithColors:(id)a0 gradientLayerTopMargin:(double)a1;
- (void)didSetImage;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
