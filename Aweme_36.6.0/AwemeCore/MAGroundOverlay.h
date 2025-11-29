@class UIImage, NSString;

@interface MAGroundOverlay : MAShape <MAOverlay>

@property (nonatomic) struct MAMapPoint { double x; double y; } centerMapPoint;
@property (readonly, nonatomic) UIImage *icon;
@property (nonatomic) double alpha;
@property (readonly, nonatomic) double zoomLevel;
@property (readonly, nonatomic) struct MACoordinateBounds { struct CLLocationCoordinate2D { double latitude; double longitude; } northEast; struct CLLocationCoordinate2D { double latitude; double longitude; } southWest; } bounds;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) double altitude;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groundOverlayWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1 icon:(id)a2;
+ (id)groundOverlayWithBounds:(struct MACoordinateBounds { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct CLLocationCoordinate2D { double x0; double x1; } x1; })a0 icon:(id)a1;

- (void)createCppOverlay;
- (id)initWithPosition:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1 icon:(id)a2;
- (id)initWithBounds:(struct MACoordinateBounds { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct CLLocationCoordinate2D { double x0; double x1; } x1; })a0 icon:(id)a1;
- (void)calculateBound;
- (void)updateCppOverlay;
- (void)calculateZoom:(struct MACoordinateBounds { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct CLLocationCoordinate2D { double x0; double x1; } x1; })a0;
- (BOOL)setGroundOverlayWithBounds:(struct MACoordinateBounds { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct CLLocationCoordinate2D { double x0; double x1; } x1; })a0 icon:(id)a1;
- (BOOL)setGroundOverlayWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1 icon:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
