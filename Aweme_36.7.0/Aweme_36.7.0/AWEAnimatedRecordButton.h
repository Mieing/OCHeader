@class CALayer, NSString;
@protocol AWEAnimatedRecordLayerProtocol;

@interface AWEAnimatedRecordButton : UIButton <CAAnimationDelegate>

@property (nonatomic) double widthDiff;
@property (retain, nonatomic) CALayer<AWEAnimatedRecordLayerProtocol> *innerLayer;
@property (retain, nonatomic) CALayer<AWEAnimatedRecordLayerProtocol> *outterLayer;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_innerLayer;
- (void)addSubviews;
- (void)p_switchToHoldVideoType;
- (void)p_switchToTapVideoType;
- (void)p_switchToTapPictureType;
- (void)p_switchToCountDownType;
- (void)p_switchToMixTapHoldVideoType;
- (void)p_beginHoldVideoAnimation;
- (void)p_beginTapVideoAnimation;
- (void)p_beginTapPictureAnimation;
- (void)p_beginCountDownAnimation;
- (void)p_beginMixHoldTapAnimation;
- (void)p_endHoldVideoAnimation;
- (void)p_endTapVideoAnimation;
- (void)p_endTapPictureAnimation;
- (void)p_endCountDownAnimation;
- (void)p_endMixHoldTapAnimation;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endAnimation;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)beginAnimation;

@end
