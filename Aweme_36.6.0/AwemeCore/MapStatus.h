@interface MapStatus : NSObject

@property (nonatomic) long long mapType;
@property (nonatomic) BOOL showTraffic;
@property (nonatomic) double zoom;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centerCoordinate;
@property (nonatomic) double rotateDegree;
@property (nonatomic) double cameraDegree;
@property (nonatomic) BOOL showsBuildings;

@end
