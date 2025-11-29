@interface OMJSpatialInfo : NSObject

@property (nonatomic) float scale;
@property (nonatomic) float rotation;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;

- (id)initWithScale:(float)a0 rotation:(float)a1 position:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithScale:(float)a0 rotation:(float)a1 position:(struct CGPoint { double x0; double x1; })a2 anchorPoint:(struct CGPoint { double x0; double x1; })a3;
- (id)description;

@end
