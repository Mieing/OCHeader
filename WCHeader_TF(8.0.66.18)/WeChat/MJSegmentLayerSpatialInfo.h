@interface MJSegmentLayerSpatialInfo : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } layerPosition;
@property (nonatomic) struct CGPoint { double x; double y; } layerScale;
@property (nonatomic) float layerRotation;

- (id)initWithLayerPosition:(struct CGPoint { double x0; double x1; })a0 layerScale:(struct CGPoint { double x0; double x1; })a1 layerRotation:(float)a2;

@end
