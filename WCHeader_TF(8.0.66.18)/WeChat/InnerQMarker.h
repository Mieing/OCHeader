@class QInnerMarkerManager, NSString, UIImage;

@interface InnerQMarker : QShape <QOverlay>

@property (weak, nonatomic) QInnerMarkerManager *manager;
@property (nonatomic) int markerID;
@property (nonatomic) int minScaleLevel;
@property (nonatomic) int maxScaleLevel;
@property (nonatomic) BOOL forceLoad;
@property (nonatomic) int geotype;
@property (retain, nonatomic) NSString *iconPath;
@property (nonatomic) BOOL avoidAnnotation;
@property (nonatomic) BOOL avoidOtherAnnotations;
@property (copy, nonatomic) NSString *imgInstruction;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int zIndex;
@property (nonatomic) long long displayLevel;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL enabled;
@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (nonatomic) double alpha;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
