@class QBasicMapView, QIndoorManager, QStyleManager;

@interface QMediator : NSObject

@property (weak, nonatomic) QBasicMapView *basicMapView;
@property (weak, nonatomic) QIndoorManager *indoorManager;
@property (weak, nonatomic) QStyleManager *styleManager;

+ (id)mediatorWithBasicMapView:(id)a0 indoorManager:(id)a1 styleManager:(id)a2;

- (id)getBasicMapView;
- (id)getActiveBuildingGuid;
- (id)getActiveLevelName;
- (long long)getKeyType;
- (BOOL)hasIndoorPrevilege;
- (id)getStyleIDString;
- (struct CGPoint { double x0; double x1; })convertMapPoint:(struct { double x0; double x1; })a0 toPointToView:(id)a1;
- (struct { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toMapPointFromView:(id)a1;
- (void)updateMapToCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 animated:(BOOL)a1 duration:(double)a2;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })visibleMapRect;
- (double)zoomLevel;
- (double)rotation;
- (double)skew;
- (double)scaleLevel;
- (void)makeDirty;
- (BOOL)currentMapContainsChina;
- (void)event_mapStatusChanged;
- (int)renderType;
- (struct { double x0; double x1; })centerMapPoint;
- (float *)getViewMatrix;
- (float *)getProjectionMatrix;
- (struct CGPoint { double x0; double x1; })glPointForMapPoint:(struct { double x0; double x1; })a0;
- (struct { double x0; double x1; })mapPointForScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })screenPointForMapPoint:(struct { double x0; double x1; })a0;
- (float)pixelRatio;
- (float)pointRatio;
- (struct CGSize { double x0; double x1; })viewSize;
- (void)switchGLContext;
- (void)resetGLContext;
- (id)initWithBasicMapView:(id)a0 indoorManager:(id)a1 styleManager:(id)a2;
- (void *)renderEngineHandler;
- (id)configDirectoryPath;
- (void)enableL4:(BOOL)a0;
- (void).cxx_destruct;

@end
