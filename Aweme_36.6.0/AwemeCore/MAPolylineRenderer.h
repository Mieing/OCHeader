@class UIColor, NSString, MAPolyline;

@interface MAPolylineRenderer : MAOverlayPathRenderer {
    NSString *_overlaySymbol;
    BOOL _needsUpdateOptions;
    BOOL _needUpdateShowRange;
    struct MAMapPoint { double x0; double x1; } *_rangedPoints;
    unsigned long long _rangedPointsCount;
}

@property (readonly, nonatomic) MAPolyline *polyline;
@property (nonatomic) BOOL is3DArrowLine;
@property (retain, nonatomic) UIColor *sideColor;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double hitTestInset;
@property (nonatomic) BOOL showRangeEnabled;
@property (nonatomic) struct MAPathShowRange { float begin; float end; } showRange;

- (void)setLineDashType:(int)a0;
- (void)glRender;
- (void)willRemove;
- (void)initializeRendererBridge;
- (void)setLineJoinType:(int)a0;
- (void)setLineCapType:(int)a0;
- (void)onReloadMapNotification;
- (BOOL)hitTest:(struct MAMapPoint { double x0; double x1; })a0 lineWidthInset:(double)a1;
- (void)setFootPrintImage:(id)a0;
- (void)setFootPrintGap:(double)a0;
- (void)setEraseStyle:(id)a0;
- (void)overlayPointsDidUpdated;
- (void)doRender3DArrowContent;
- (struct MAMapPoint { double x0; double x1; } *)getPolylineDrawPoints;
- (unsigned long long)getPolylineDrawPointsCount;
- (void)setNeedUpdateShowRange;
- (void)updatePolylineWithShowRange:(float)a0 rangeEnd:(float)a1;
- (void)setLineWidth:(double)a0;
- (void)setStrokeColor:(id)a0;
- (void)setFillColor:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setMiterLimit:(double)a0;
- (id)initWithPolyline:(id)a0;
- (void)setStrokeImage:(id)a0;

@end
