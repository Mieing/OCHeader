@class UIImageView, NSString;

@interface WCCanvasRadarChartComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *maskImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)calcRadiusInsideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawItemsAtCenterPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (void)drawBackgroundAtCenterPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (void)drawAtCenter:(struct CGPoint { double x0; double x1; })a0 vertexes:(id)a1 values:(id)a2 fillColor:(id)a3 withCenterLine:(BOOL)a4 isTargetPoints:(BOOL)a5;
- (id)vertexesForCenterPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)resizeBorderImageView;
- (id)coverColor;
- (long long)dimensions;
- (void).cxx_destruct;

@end
