@class CALayer, UIColor;

@interface MAUserLocationView : MAAnnotationView

@property (retain, nonatomic) CALayer *baseLayer;
@property (retain, nonatomic) CALayer *innerBaseLayer;
@property (retain, nonatomic) UIColor *innerBaseColor;
@property (retain, nonatomic) CALayer *innerCircleLayer;
@property (retain, nonatomic) UIColor *innerCircleColor;
@property (nonatomic) float baseDiameter;
@property (nonatomic) float innerDiameter;
@property (nonatomic) BOOL allowInnerPulse;

- (void)initAttributes;
- (void)initLayers;
- (id)getInnerAnimationWithDuration:(float)a0;
- (void)updateWithDisplayParam:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (id)userLocation;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
