@class UIColor, CAShapeLayer;

@interface AWEStudioProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *trackTintColor;
@property (nonatomic) BOOL rounded;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)shapeLayer;
- (void)setProgress:(float)a0 animated:(BOOL)a1;

@end
