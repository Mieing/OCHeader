@class UIColor, NSArray, QText, QPolyline;

@interface QPolylineView : QOverlayPathView

@property (readonly, nonatomic) QPolyline *polyline;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) NSArray *lineDashPattern;
@property (retain, nonatomic) QText *text;
@property (nonatomic) BOOL disableCollideLabel;

- (id)initWithPolyline:(id)a0;
- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)setFillColor:(id)a0;
- (void)doRemoveText;
- (void)doAddText;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 pointCount:(int)a1;
- (void)onDidAdd;
- (void)onWillRemove;
- (void).cxx_destruct;

@end
