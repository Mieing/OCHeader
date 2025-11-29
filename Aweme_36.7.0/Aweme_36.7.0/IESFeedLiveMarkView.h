@class CAGradientLayer, NSString, UIImageView, CAShapeLayer;

@interface IESFeedLiveMarkView : UIView <IESFeedLiveMarkViewProtocol>

@property (retain, nonatomic) CAShapeLayer *markClipLayer;
@property (retain, nonatomic) CAGradientLayer *markColorLayer;
@property (retain, nonatomic) CAShapeLayer *markClipLayerForAniamtion;
@property (retain, nonatomic) CAGradientLayer *markColorLayerForAnimation;
@property (nonatomic) BOOL isAddMarkAnimation;
@property (retain, nonatomic) UIImageView *liveTag;
@property (retain, nonatomic) CAGradientLayer *degradeColorLayer;
@property (retain, nonatomic) CAGradientLayer *degradeColorLayerForAnimation;
@property (retain, nonatomic) CAShapeLayer *degradeClipLayer;
@property (retain, nonatomic) CAShapeLayer *degradeClipLayerForAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMarkLayerGradientColor:(id)a0;
- (void)stopAnimationWithView:(id)a0;
- (void)startNewBreatheAnimationWithView:(id)a0 syncStartTime:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
