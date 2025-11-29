@class NSString;

@interface LynxNativeLayoutNode : LynxShadowNode

@property (retain, nonatomic) NSString *idSelector;

+ (id)__lynx_prop_config__311;
+ (id)__lynx_prop_config__270;

- (void)setIdSelector:(id)a0 requestReset:(BOOL)a1;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithMeasureParam:(id)a0 MeasureContext:(id)a1;
- (void)alignWithAlignParam:(id)a0 AlignContext:(id)a1;
- (BOOL)supportInlineView;
- (void)setVerticalAlign:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;

@end
