@class QCircle, NSArray;

@interface QCircleView : QOverlayPathView

@property (readonly, nonatomic) QCircle *circle;
@property (nonatomic) unsigned long long lineType;
@property (copy, nonatomic) NSArray *lineDashPattern;

- (id)initWithCircle:(id)a0;
- (void)dealloc;
- (void)prepareForUse;
- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)setFillColor:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 pointCount:(int)a1;
- (void).cxx_destruct;

@end
