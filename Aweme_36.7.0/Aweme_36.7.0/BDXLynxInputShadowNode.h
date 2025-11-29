@class NSString;

@interface BDXLynxInputShadowNode : LynxCustomMeasureShadowNode <LynxCustomMeasureDelegate>

@property (nonatomic) BOOL needRelayout;
@property (nonatomic) double mHeightAtMost;
@property (nonatomic) double mWidthAtMost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;

- (id)initWithSign:(long long)a0 tagName:(id)a1;
- (void)adoptNativeLayoutNode:(long long)a0;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithMeasureParam:(id)a0 MeasureContext:(id)a1;
- (void)alignWithAlignParam:(id)a0 AlignContext:(id)a1;
- (void)customAlignLayoutNode:(id)a0 alignContext:(id)a1;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })customMeasureLayoutNode:(id)a0 measureContext:(id)a1;

@end
