@class AWETeenBezierCurve2DCaculator;

@interface AWETeenHotSpotSoftMaskManager : NSObject

@property (retain, nonatomic) AWETeenBezierCurve2DCaculator *bezierCurveCaculator;

- (void)p_addViewCornerAndTransform:(id)a0 tranlationX:(double)a1 tranlationY:(double)a2 zoomScale:(double)a3 cornerRadius:(double)a4;
- (void)triggerAnimationWithFormerView:(id)a0 latterView:(id)a1 percentage:(double)a2 height:(double)a3;
- (BOOL)viewDidReset:(id)a0;
- (void).cxx_destruct;
- (void)resetView:(id)a0;

@end
