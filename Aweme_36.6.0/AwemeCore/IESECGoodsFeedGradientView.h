@class UIColor, NSArray;

@interface IESECGoodsFeedGradientView : UIView

@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (copy, nonatomic) NSArray *locations;
@property (copy, nonatomic) NSArray *colors;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
