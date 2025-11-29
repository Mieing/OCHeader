@class CAGradientLayer, UIColor, UIImageView, CALayer, UIView;

@interface IESGCPXPlayGameProgressView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) CALayer *frontLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) CAGradientLayer *behindGradientLayer;
@property (retain, nonatomic) UIImageView *gradientBgView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *progressColor;

- (void)_configSublayers;
- (void)_updateProgressLayerBounds;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateProgress:(double)a0;

@end
