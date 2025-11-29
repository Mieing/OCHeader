@class NSArray, MAPolygon;

@interface MAPolygonRenderer : MAOverlayPathRenderer {
    NSArray *_hollowRenders;
    NSArray *_hollowLineRenders;
    BOOL _needsUpdateHollowShapes;
}

@property (readonly, nonatomic) MAPolygon *polygon;

- (void)setLineDashType:(int)a0;
- (void)glRender;
- (void)initializeRendererBridge;
- (void)setLineJoinType:(int)a0;
- (void)setLineCapType:(int)a0;
- (void)onHollowShapesNotification:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)setStrokeColor:(id)a0;
- (void)setFillColor:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setMiterLimit:(double)a0;
- (id)initWithPolygon:(id)a0;
- (void)setStrokeImage:(id)a0;

@end
