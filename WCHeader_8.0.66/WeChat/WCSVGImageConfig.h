@class UIColor;

@interface WCSVGImageConfig : NSObject

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) double rotationAngle;
@property (nonatomic) double opacity;
@property (nonatomic) double rescale;

+ (id)imageConfigWithTintColor:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotationAngle:(double)a2 opacity:(double)a3;
+ (id)imageConfigWithTintColor:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotationAngle:(double)a2 opacity:(double)a3 scale:(double)a4;

- (void).cxx_destruct;

@end
