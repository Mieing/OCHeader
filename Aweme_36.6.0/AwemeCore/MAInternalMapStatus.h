@interface MAInternalMapStatus : NSObject

@property (nonatomic) unsigned long long valueChangedFlags;
@property (nonatomic) struct MAMapPoint { double x; double y; } centerMapPoint;
@property (nonatomic) float zoomLevel;
@property (nonatomic) float rotationDegree;
@property (nonatomic) float cameraDegree;
@property (nonatomic) struct CGPoint { double x; double y; } screenAnchor;

+ (id)statusWithCenterMapPoint:(struct MAMapPoint { double x0; double x1; })a0 zoomLevel:(double)a1 rotationDegree:(double)a2 cameraDegree:(double)a3 screenAnchor:(struct CGPoint { double x0; double x1; })a4;

- (id)initWithCenterMapPoint:(struct MAMapPoint { double x0; double x1; })a0 zoomLevel:(double)a1 rotationDegree:(double)a2 cameraDegree:(double)a3 screenAnchor:(struct CGPoint { double x0; double x1; })a4;
- (BOOL)isEqualToMapStatus:(id)a0;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
