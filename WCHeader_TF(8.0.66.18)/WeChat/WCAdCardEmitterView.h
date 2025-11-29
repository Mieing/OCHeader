@class UIImage, NSString, WCAdTouchParticleInfo;

@interface WCAdCardEmitterView : MMUIView <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) WCAdTouchParticleInfo *particleInfo;
@property (nonatomic) struct CGPoint { double x; double y; } lastPoint;
@property (retain, nonatomic) UIImage *cellContent;
@property (nonatomic) double distanceGap;
@property (nonatomic) double chanceGap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 particleInfo:(id)a1;
- (void)dealloc;
- (void)appendEmitterAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)appendEmitterAtPoint:(struct CGPoint { double x0; double x1; })a0 more:(BOOL)a1 longitudeType:(long long)a2;
- (void)endEmitters;
- (double)getPointDistanceBetweenP1:(struct CGPoint { double x0; double x1; })a0 p2:(struct CGPoint { double x0; double x1; })a1;
- (void)genGapsWithParticleInfo:(id)a0;
- (void)updateCellContent;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
