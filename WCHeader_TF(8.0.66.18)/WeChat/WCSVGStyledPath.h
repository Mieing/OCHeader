@class UIColor, NSArray, UIBezierPath, WCSVGGradient;

@interface WCSVGStyledPath : NSObject

@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) WCSVGGradient *fillGradient;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) NSArray *affineTransforms;
@property (nonatomic) double opacity;

- (id)initWithPath:(id)a0;
- (void)drawStyledPathInContext:(struct CGContext { } *)a0 tintColor:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
