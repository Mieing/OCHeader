@interface QBasicMapViewLayer : CALayer

@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anchorZoomLevel;
@property (nonatomic) struct CGPoint { double x; double y; } centerCoordinate;
@property (nonatomic) double zoomLevel;
@property (nonatomic) double rotation;
@property (nonatomic) double overlooking;

+ (BOOL)isMatchAnimateKey:(id)a0;
+ (unsigned long long)regionChangeOptionForKey:(id)a0;
+ (BOOL)needsDisplayForKey:(id)a0;

- (id)basicMapView;
- (void)addAnimation:(id)a0 forKey:(id)a1;

@end
