@class NSArray, QPolygon, UIImage;

@interface QPolygonView : QOverlayPathView

@property (copy, nonatomic) NSArray *holeStrokeIds;
@property (retain, nonatomic) QPolygon *originPolygon;
@property (nonatomic) BOOL disableCollideLabel;
@property (readonly, nonatomic) QPolygon *polygon;
@property (nonatomic) unsigned long long lineType;
@property (copy, nonatomic) NSArray *lineDashPattern;
@property (nonatomic) double textureGap;
@property (retain, nonatomic) UIImage *styleTextureImage;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

- (void)savePolygon;
- (void)changePolygon:(id)a0;
- (void)resotrePolygon;
- (id)initWithPolygon:(id)a0;
- (void)dealloc;
- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)setFillColor:(id)a0;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 pointCount:(int)a1;
- (void)onDidAdd;
- (void)onWillRemove;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addObserverForPolygon:(id)a0;
- (void)removeObserverForPolygon:(id)a0;
- (void).cxx_destruct;

@end
