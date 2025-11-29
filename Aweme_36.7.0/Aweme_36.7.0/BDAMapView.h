@class NSArray, NSString;

@interface BDAMapView : MAMapView <BDMapViewProtocols>

@property (weak, nonatomic) id delegate;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; } bdx_region;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } centerCoordinate;
@property (nonatomic) double bdx_rotationDegree;
@property (nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property (nonatomic) BOOL disableDoubleTapZoomIn;
@property (nonatomic) BOOL zoomingInPivotsAroundAnchorPoint;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic, getter=isRotateEnabled) BOOL rotateEnabled;
@property (nonatomic) BOOL bdx_pitchEnabled;
@property (nonatomic) BOOL showsCompass;
@property (nonatomic) BOOL showsScale;
@property (nonatomic, getter=isShowsBuildings) BOOL showsBuildings;
@property (nonatomic) BOOL showsUserLocation;
@property (nonatomic) unsigned long long bdxMapType;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) double zoomLevel;
@property (nonatomic) double bdx_minZoomLevel;
@property (nonatomic) double bdx_maxZoomLevel;
@property (nonatomic) BOOL showsTraffic;
@property (nonatomic) BOOL showsIndoorMap;
@property (readonly, nonatomic) NSArray *bdx_annotations;
@property (readonly, nonatomic) NSArray *overlays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSupportSetRotationDegree;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 animated:(BOOL)a1 duration:(double)a2;
- (void)getMapScreenShotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 timeoutInterval:(double)a1 completionBlock:(id /* block */)a2;
- (void)disableDoubleTapZoomForMapView;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1 animated:(BOOL)a2 duration:(double)a3;
- (long long)convertOverlayLevel:(long long)a0;
- (void)bdx_setVisibleMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 edgePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 animated:(BOOL)a2;
- (void)bdx_setVisibleMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 edgePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 animated:(BOOL)a2 duration:(double)a3;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })bdx_visibleMapRect;
- (void)bdx_setRotationDegree:(double)a0 animated:(BOOL)a1 duration:(double)a2;
- (void)bdx_setCustomMapStyle:(id)a0;
- (void)setMapShowLimitsNorthEast:(struct CLLocationCoordinate2D { double x0; double x1; })a0 southWest:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (id)bdx_annotationsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)bdx_overlaysInLevel:(long long)a0;
- (void)insertOverlay:(id)a0 atIndex:(unsigned long long)a1 bdx_level:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1 animated:(BOOL)a2;

@end
