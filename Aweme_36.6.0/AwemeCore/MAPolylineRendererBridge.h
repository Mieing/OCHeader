@class NSString;

@interface MAPolylineRendererBridge : MAPathRendererBridge {
    NSString *_overlaySymbol;
    BOOL _needsUpdateOptions;
}

- (void)setLineDashType:(int)a0;
- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (void)setLineJoinType:(int)a0;
- (void)setLineCapType:(int)a0;
- (void)setShowRangeEnabled:(BOOL)a0;
- (void)setShowRange:(struct MAPathShowRange { float x0; float x1; })a0;
- (BOOL)hitTest:(struct MAMapPoint { double x0; double x1; })a0 lineWidthInset:(double)a1;
- (void)getCurrentlyUsedLinePoints:(struct MAMapPoint **)a0 count:(int *)a1;
- (void)setFootPrintImage:(id)a0;
- (void)setFootPrintGap:(double)a0;
- (void)setEraseStyle:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)setStrokeColor:(id)a0;
- (void).cxx_destruct;
- (void)setMiterLimit:(double)a0;
- (id)polyline;
- (void)setStrokeImage:(id)a0;

@end
