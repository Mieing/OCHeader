@class UIImage, NSArray;

@interface MAMarker : MAShape

@property (nonatomic) double angleOffset;
@property (nonatomic) struct CGPoint { double x; double y; } screenPosition;
@property (nonatomic) BOOL viewMode;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } position;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *annimatedImages;
@property (nonatomic) int period;
@property (nonatomic) double rotateAngle;
@property (nonatomic) BOOL flat;
@property (nonatomic) struct CGPoint { double x; double y; } infoWindowOffset;
@property (nonatomic) BOOL infoWindowEnable;
@property (nonatomic) BOOL visible;

+ (id)markerWithPosition:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

- (void)createCppOverlay;
- (void)setupDefaultConfig;
- (void).cxx_destruct;
- (void)setAltitude:(double)a0;
- (void)setTitle:(id)a0;
- (void)setSubtitle:(id)a0;
- (id)initWithPosition:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
