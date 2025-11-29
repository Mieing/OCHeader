@class UIImage, MABaseRendererBridge;
@protocol MAOverlayRenderDelegate, MAOverlay;

@interface MAOverlayRenderer : NSObject {
    struct CGSize { double width; double height; } _strokeTextureSize;
    BOOL _needsUpdate;
    BOOL _needsLoadStrokeTexture;
    struct MAMapPoint { double x; double y; } _mapPointWindow[4];
}

@property (retain, nonatomic) id<MAOverlay> overlay;
@property (retain, nonatomic) UIImage *textureImage;
@property (nonatomic) double rendererContentScale;
@property (nonatomic) BOOL attachedToMap;
@property (retain, nonatomic) MABaseRendererBridge *rendererBridge;
@property (nonatomic) BOOL showsBoundingMapRect;
@property (nonatomic) BOOL isLineLooped;
@property (weak, nonatomic) id<MAOverlayRenderDelegate> rendererDelegate;
@property (retain, nonatomic) UIImage *strokeImage;
@property (readonly, nonatomic) unsigned int strokeTextureID;
@property (nonatomic) double alpha;
@property (readonly, nonatomic) double contentScale;

- (union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })glColorFromUIColor:(id)a0;
- (void)glRender;
- (BOOL)render2;
- (void)willRemove;
- (void)initializeRendererBridge;
- (void)willAdd;
- (id)getCommandEncoder;
- (float *)getViewMatrix;
- (float *)getProjectionMatrix;
- (struct CGPoint { double x0; double x1; } *)glPointsForMapPoints:(struct MAMapPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (double)getMapZoomLevel;
- (struct CGPoint { double x0; double x1; })glPointForMapPoint:(struct MAMapPoint { double x0; double x1; })a0;
- (void)overlayPointsDidUpdated;
- (void)onUpdateNotification:(id)a0;
- (void)onPointsUpdatedNotification:(id)a0;
- (void)MAOverlayRendererDeallocOperation;
- (struct MAMapPoint { double x0; double x1; })getOffsetPoint;
- (void)updateGlWindow;
- (void)updateMapPointWindow;
- (double)glWidthForWindowWidth:(double)a0;
- (unsigned int)loadTexture:(id)a0;
- (struct MAMapRect { struct MAMapPoint { double x0; double x1; } x0; struct MAMapSize { double x0; double x1; } x1; })clipMapRect;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (id)initWithOverlay:(id)a0;
- (void)dealloc;
- (void)deleteTexture:(unsigned int)a0;

@end
