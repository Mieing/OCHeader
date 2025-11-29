@class UIColor, NSArray, QProgressAnimation, QPolyline, QAnimation, UIImage;

@interface QTexturePolylineView : QPolylineView

@property (nonatomic) QAnimation *emergeAnimation;
@property (nonatomic) BOOL internal;
@property (retain, nonatomic) QProgressAnimation *appearAnimation;
@property (retain, nonatomic) QPolyline *animationLine;
@property (nonatomic) long long drawType;
@property (nonatomic) BOOL useGradient;
@property (copy, nonatomic) NSArray *segmentColor;
@property (retain, nonatomic) UIImage *styleTextureImage;
@property (copy, nonatomic) NSArray *segmentStyle;
@property (nonatomic, getter=isDrawSymbol) BOOL drawSymbol;
@property (retain, nonatomic) UIImage *symbolImage;
@property (nonatomic) double symbolGap;
@property (retain, nonatomic) UIColor *eraseColor;
@property (nonatomic) double footprintStep;

- (void)onDidAdd;
- (void)onWillRemove;
- (void)setTurnArrowAtSegmentIndex:(int)a0;
- (void)setTurnArrowColor:(id)a0 borderColor:(id)a1;
- (void)clearTurnArrow;
- (id)initWithPolyline:(id)a0;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 pointCount:(int)a1;
- (void)eraseFromStartToCurrentPoint:(struct CLLocationCoordinate2D { double x0; double x1; })a0 searchFrom:(int)a1 toColor:(BOOL)a2;
- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)setBorderWidth:(double)a0;
- (void)setBorderColor:(id)a0;
- (void)setLineDashPattern:(id)a0;
- (BOOL)shouldUpdateAnimation;
- (void)removeAnimationLine;
- (void)update:(double)a0;
- (void).cxx_destruct;

@end
