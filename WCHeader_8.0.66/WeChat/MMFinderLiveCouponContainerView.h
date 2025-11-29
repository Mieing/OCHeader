@class UIColor, CAShapeLayer;

@interface MMFinderLiveCouponContainerView : UIView

@property (retain, nonatomic) CAShapeLayer *layer;
@property (nonatomic) double gapRadius;
@property (nonatomic) double tailWidth;
@property (nonatomic) double lineWidth;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;

+ (Class)layerClass;

- (void)layoutSubviews;
- (id)bezierPath;
- (BOOL)shouldUseDarkModeColor;
- (struct CGColor { } *)cgColorOf:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
