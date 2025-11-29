@class CLLocation, CLHeading;

@interface MAUserLocation : MAAnimatedAnnotation

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic, getter=isUpdating) BOOL updating;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) CLHeading *heading;
@property (copy, nonatomic) id /* block */ stepCallback;

- (void).cxx_destruct;
- (void)step:(double)a0;

@end
