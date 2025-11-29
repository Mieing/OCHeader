@interface MAMapStatus : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centerCoordinate;
@property (nonatomic) double zoomLevel;
@property (nonatomic) double rotationDegree;
@property (nonatomic) double cameraDegree;
@property (nonatomic) struct CGPoint { double x; double y; } screenAnchor;

+ (id)statusWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1 rotationDegree:(double)a2 cameraDegree:(double)a3 screenAnchor:(struct CGPoint { double x0; double x1; })a4;

- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1 rotationDegree:(double)a2 cameraDegree:(double)a3 screenAnchor:(struct CGPoint { double x0; double x1; })a4;
- (id)init;

@end
