@class NSString;

@interface MAPolyline : MAMultiPoint <MAOverlay>

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)polylineWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)polylineWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;

- (void)createCppOverlay;
- (BOOL)setPolylineWithPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(long long)a1;
- (BOOL)setPolylineWithCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(long long)a1;

@end
