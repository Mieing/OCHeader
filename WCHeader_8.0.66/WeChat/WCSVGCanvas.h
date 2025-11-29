@class WCSVGImageConfig, NSMutableArray;

@interface WCSVGCanvas : NSObject

@property (retain, nonatomic) WCSVGImageConfig *associateImageConfig;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *components;
@property (retain, nonatomic) WCSVGCanvas *mask;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) double opacity;

- (id)initWithType:(long long)a0;
- (id)image;
- (void)drawInContext:(struct CGContext { } *)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addMask:(id)a0 toContext:(struct CGContext { } *)a1;
- (void)drawAllComponentsInContext:(struct CGContext { } *)a0;
- (id)maskImageFromImage:(id)a0;
- (void).cxx_destruct;

@end
