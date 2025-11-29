@interface LynxLayoutNodeManager : NSObject {
    struct LayoutNodeManager { void /* function */ **x0; } *_layout_node_manager;
}

- (BOOL)isDirty:(long long)a0;
- (struct MeasureResult { struct CGSize { double x0; double x1; } x0; double x1; })measureWithSign:(long long)a0 MeasureParam:(id)a1 MeasureContext:(id)a2;
- (void)alignWithSign:(long long)a0 AlignParam:(id)a1 AlignContext:(id)a2;
- (void)setMeasureFuncWithSign:(long long)a0 LayoutNode:(id)a1;
- (void)markDirtyAndRequestLayout:(long long)a0;
- (void)markDirtyAndForceLayout:(long long)a0;
- (id)initWithNativePtr:(void *)a0;
- (long long)getFlexDirection:(long long)a0;
- (double)getMarginLeft:(long long)a0;
- (double)getMarginRight:(long long)a0;
- (double)getMarginTop:(long long)a0;
- (double)getMarginBottom:(long long)a0;
- (double)getPaddingLeft:(long long)a0;
- (double)getPaddingRight:(long long)a0;
- (double)getPaddingTop:(long long)a0;
- (double)getPaddingBottom:(long long)a0;
- (double)getWidth:(long long)a0;
- (double)getHeight:(long long)a0;
- (double)getMinWidth:(long long)a0;
- (double)getMaxWidth:(long long)a0;
- (double)getMinHeight:(long long)a0;
- (double)getMaxHeigh:(long long)a0;

@end
