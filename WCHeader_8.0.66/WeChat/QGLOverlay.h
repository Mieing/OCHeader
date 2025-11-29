@class NSString;
@protocol QOverlayProtocol, QGLOverlayDelegate;

@interface QGLOverlay : QShape <QOverlay>

@property (readonly, nonatomic) double screenScale;
@property (nonatomic) void *impl;
@property (nonatomic) void *layerListener;
@property (weak, nonatomic) id<QOverlayProtocol> containerDelegate;
@property (nonatomic) BOOL drawn;
@property (nonatomic) BOOL dirty;
@property (nonatomic) int minZoomLevel;
@property (nonatomic) int maxZoomLevel;
@property (nonatomic) long long displayLevel;
@property (nonatomic) int zIndex;
@property (weak, nonatomic) id<QGLOverlayDelegate> delegate;
@property (nonatomic) BOOL visible;
@property (nonatomic) double opacity;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (nonatomic) BOOL interactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validateStartPoints:(id)a0;

- (id)executeCommand:(id)a0 commandJson:(id)a1;
- (id)getType:(id)a0 error:(id *)a1;
- (void)setVisible:(id)a0 error:(id *)a1;
- (id)getVisible:(id)a0 error:(id *)a1;
- (void)enableClick:(id)a0 error:(id *)a1;
- (id)getClickEnabled:(id)a0 error:(id *)a1;
- (void)setZoomLevelRange:(id)a0 error:(id *)a1;
- (void)drawCallback;
- (void *)createImpl;
- (void)destoryImpl;
- (void)setMinZoomLevel:(int)a0 maxZoomLevel:(int)a1;
- (id)getType;
- (BOOL)isSupportClick;
- (void)makeDirty;
- (void)render;
- (void)setNeedsDisplay;
- (float *)glViewMatrix;
- (float *)glProjectionMatrix;
- (struct CGPoint { double x0; double x1; })glVertexForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (double)glPointRatio;
- (id)init;
- (void)dealloc;
- (void)notifyOverlayProgress:(double)a0 hasError:(BOOL)a1;
- (void)doUpdateLevel:(void *)a0;
- (void)doUpdateIndex:(void *)a0;
- (int)layerLevelForDisplayLevel:(long long)a0;
- (long long)displayLevelForLayerLevel:(int)a0;
- (BOOL)validateDisplayLevelParam:(long long)a0;
- (void)recordGLoverlayCount:(id)a0;
- (void)startTranslateAnimation:(id)a0 duration:(double)a1 initRotation:(double)a2 autoRotate:(BOOL)a3;
- (void)notifOverlayDidTapWithOverlayObject:(id)a0;
- (void).cxx_destruct;

@end
