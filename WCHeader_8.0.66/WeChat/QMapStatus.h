@interface QMapStatus : NSObject

@property (nonatomic) int zoomLevel;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } mapRect;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centerCoordinate;
@property (nonatomic) BOOL isNightStyle;

@end
