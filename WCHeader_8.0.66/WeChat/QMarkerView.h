@class NSString, QMarkerCalloutView, UIView, UIImage, QMarkerViewAnimationLayer;

@interface QMarkerView : QOverlayView

@property (retain, nonatomic) QMarkerViewAnimationLayer *animationLayer;
@property (nonatomic) BOOL forceLoad;
@property (nonatomic) int geotype;
@property (copy, nonatomic) NSString *iconPath;
@property (copy, nonatomic) NSString *imgInstruction;
@property (nonatomic) BOOL internalCalloutShowing;
@property (nonatomic) struct CGPoint { double x; double y; } internalScale;
@property (retain, nonatomic) UIView *internalCustomCallout;
@property (retain, nonatomic) QMarkerCalloutView *markerCalloutView;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (nonatomic) double alpha;
@property (nonatomic) struct CGPoint { double x; double y; } scale;
@property (nonatomic) double rotation;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL draggable;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long collisionType;
@property (nonatomic) int dragState;
@property (nonatomic) BOOL canshowCallout;
@property (retain, nonatomic) UIView *customCalloutView;

- (void)hideCalloutView;
- (void)displayCalloutView;
- (void)internalShowCalloutView:(BOOL)a0;
- (void)internalRefreshCalloutView;
- (void)updateCalloutPositionFromMarkerPropertiesChanged;
- (void)updateCalloutViewCollision;
- (void)hideCalloutIfNeeded;
- (void)addEngineMarkerForCalloutView;
- (void)internalShowCustomCalloutView;
- (void)internalHideCustomCalloutView;
- (void)swapDisplayCustomCalloutViewByRefreshCalloutView;
- (void)updateScreenPointForCustomCallout;
- (id)basiMapView;
- (id)initWithMarker:(id)a0;
- (void)dealloc;
- (void)setDragState:(int)a0 animated:(BOOL)a1;
- (void)updateCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)showCalloutView:(BOOL)a0;
- (void)refreshCalloutView;
- (void).cxx_destruct;

@end
