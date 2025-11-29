@class MAArc;

@interface MAArcRenderer : MAOverlayPathRenderer

@property (readonly, nonatomic) MAArc *arc;

- (void)setLineDashType:(int)a0;
- (void)glRender;
- (void)initializeRendererBridge;
- (void)setLineJoinType:(int)a0;
- (void)setLineCapType:(int)a0;
- (id)initWithArc:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)setStrokeColor:(id)a0;
- (void)setFillColor:(id)a0;
- (void)setMiterLimit:(double)a0;
- (void)setStrokeImage:(id)a0;

@end
