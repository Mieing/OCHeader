@interface LynxRefreshViewShadowNode : LynxCustomMeasureShadowNode

@property (nonatomic) struct CGSize { double width; double height; } headerSize;
@property (nonatomic) struct CGSize { double width; double height; } footerSize;
@property (nonatomic) struct CGSize { double width; double height; } listSize;

+ (void)lynxLazyLoad;

- (void)customAlignLayoutNode:(id)a0 alignContext:(id)a1;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })customMeasureLayoutNode:(id)a0 measureContext:(id)a1;

@end
