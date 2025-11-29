@class UIColor, QArc, NSArray, QTexturePolylineView;

@interface QArcView : QOverlayPathView

@property (retain, nonatomic) QTexturePolylineView *internalPolyline;
@property (readonly, nonatomic) QArc *arc;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) NSArray *lineDashPattern;
@property (nonatomic, getter=isDrawSymbol) BOOL drawSymbol;
@property (nonatomic) double symbolGap;
@property (nonatomic) BOOL disableCollideLabel;

- (id)initWithArc:(id)a0;
- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)setFillColor:(id)a0;
- (void)onDidAdd;
- (void)onWillRemove;
- (void).cxx_destruct;

@end
