@class NSString;

@interface LynxCustomMeasureShadowNode : LynxShadowNode <LynxCustomMeasureDelegate>

@property (nonatomic) BOOL hasCustomLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__180;

- (double)toPtWithUnitValue:(id)a0 fontSize:(double)a1;
- (void)adoptNativeLayoutNode:(long long)a0;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithMeasureParam:(id)a0 MeasureContext:(id)a1;
- (void)alignWithAlignParam:(id)a0 AlignContext:(id)a1;
- (void)customAlignLayoutNode:(id)a0 alignContext:(id)a1;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })customMeasureLayoutNode:(id)a0 measureContext:(id)a1;
- (void)customLayout:(BOOL)a0 requestReset:(BOOL)a1;
- (BOOL)supportInlineView;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureNativeLayoutNode:(id)a0 measureContext:(id)a1;
- (void)alignNativeLayoutNode:(id)a0 alignContext:(id)a1;

@end
