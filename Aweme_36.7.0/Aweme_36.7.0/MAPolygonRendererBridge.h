@interface MAPolygonRendererBridge : MAPathRendererBridge

- (void)setLineDashType:(int)a0;
- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (void)setLineJoinType:(int)a0;
- (void)setLineCapType:(int)a0;
- (void)setLineWidth:(double)a0;
- (void)setStrokeColor:(id)a0;
- (void)setFillColor:(id)a0;
- (void)setMiterLimit:(double)a0;
- (id)polygon;
- (void)setStrokeImage:(id)a0;

@end
