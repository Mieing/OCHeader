@class NSString;

@interface MAArc : MAShape <MAOverlay> {
    double _circleCenterX;
    double _circleCenterY;
    double _circleRadius;
    double _startCircleAngle;
    double _passedCircleAngle;
    double _endCircleAngle;
}

@property (nonatomic) struct MAMapPoint { double x0; double x1; } *mapPoints;
@property (nonatomic) unsigned long long pointsCount;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } startCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } passedCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } endCoordinate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)arcWithStartCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 passedCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 endCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;

@end
