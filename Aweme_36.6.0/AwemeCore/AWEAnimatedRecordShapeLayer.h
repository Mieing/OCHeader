@class CALayer, NSString;

@interface AWEAnimatedRecordShapeLayer : CALayer <AWEAnimatedRecordLayerProtocol>

@property (retain, nonatomic) CALayer *maskLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createScaleAnimationWithRatio:(double)a0 duration:(double)a1;
- (id)createHollowOutAnimationWithRatio:(double)a0 duration:(double)a1;
- (void)setInitialHollowRatio:(double)a0;
- (id)createBreathingAnimationWithFromRatio:(double)a0 toRatio:(double)a1 duration:(double)a2;
- (void)addCirclelayer;
- (double)calculateMaskLayerLineWidthWithRatio:(double)a0;
- (id)createColorChangeAnimationWithColor:(id)a0 duration:(double)a1;
- (id)createCornerRadiusAnimationWithCornerRadius:(double)a0 duration:(double)a1;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
