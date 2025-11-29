@interface MATraceLocation : NSObject

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } loc;
@property (nonatomic) double angle;
@property (nonatomic) double speed;
@property (nonatomic) double time;

- (struct MAMapPoint { double x0; double x1; })mapPoint;
- (id)jsonDictionary;

@end
