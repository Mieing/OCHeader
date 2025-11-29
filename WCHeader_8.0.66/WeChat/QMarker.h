@class NSString;

@interface QMarker : QShape <QOverlay>

@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)calculateBoundingMapRect;

@end
