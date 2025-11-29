@class QMapView;

@interface QBaseAccessibilityElement : UIAccessibilityElement

@property (nonatomic) int flickcount;
@property (weak, nonatomic) QMapView *baseMapView;

- (id)description;
- (void)setMapZoomLevelDelta:(int)a0;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)buildZoomRotor;
- (id)buildPOIRotor;
- (id)createRotorItemWithNextDirection:(id)a0;
- (id)createRotorItemWithPreviousDirection:(id)a0;
- (struct CGPoint { double x0; double x1; })makeMovementPoint:(double)a0 withYRatio:(double)a1;
- (void)changeMapCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)resetFlickCount;
- (void).cxx_destruct;

@end
