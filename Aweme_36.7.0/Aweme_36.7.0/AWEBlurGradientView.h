@class NSArray, NSString;

@interface AWEBlurGradientView : UIVisualEffectView

@property (copy) NSArray *colors;
@property (copy) NSArray *locations;
@property struct CGPoint { double x0; double x1; } startPoint;
@property struct CGPoint { double x0; double x1; } endPoint;
@property (copy) NSString *type;
@property BOOL canReturnSelfInHitTest;

+ (Class)layerClass;

- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
