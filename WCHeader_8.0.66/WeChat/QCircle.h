@class WAMapCircleData, NSString;

@interface QCircle : QShape <QOverlay>

@property (retain, nonatomic) WAMapCircleData *userData;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) double radius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1;
+ (id)circleWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;

@end
