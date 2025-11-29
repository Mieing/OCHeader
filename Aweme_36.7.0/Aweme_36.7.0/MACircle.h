@class NSArray, NSString;

@interface MACircle : MAShape <MAOverlay> {
    NSArray *_origHollowShapes;
}

@property (nonatomic) struct MAMapPoint { double x0; double x1; } *mapPoints;
@property (nonatomic) unsigned long long pointsCount;
@property (retain, nonatomic) NSArray *hollowShapes;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) double radius;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)circleWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1;
+ (id)circleWithMapRect:(struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })a0;

- (void)createCppOverlay;
- (void)rebuildOutline;
- (BOOL)canAddHollowShape:(id)a0;
- (void)updateCppOverlayPointsHollows;
- (id)initWithWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1;
- (void)MACircleDeallocOperation;
- (BOOL)setCircleWithCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
