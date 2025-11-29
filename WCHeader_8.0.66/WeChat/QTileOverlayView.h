@class QMapContext, QTileOverlayManager, QTileOverlayHandler, QTileOverlay;

@interface QTileOverlayView : QOverlayView

@property (retain, nonatomic) QTileOverlay *tileOverlay;
@property (retain, nonatomic) QMapContext *mapContext;
@property (weak, nonatomic) QTileOverlayManager *tileOverlayManager;
@property (retain, nonatomic) QTileOverlayHandler *handler;
@property (nonatomic) int zIndex;

- (struct { long long x0; long long x1; long long x2; long long x3; double x4; })pathForInternal:(id)a0;
- (id)generatePayload;
- (void)startRender;
- (void)endRender;
- (void)reloadData;
- (id)fakeUrlForPath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (id)keyForTilePath:(const struct { long long x0; long long x1; long long x2; long long x3; double x4; } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)variablesForInfluencingReusedMultiLevel;
- (void)addObserverForTileOverlay:(id)a0;
- (void)removeObserverForTileOverlay:(id)a0;
- (id)initWithTileOverlay:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
