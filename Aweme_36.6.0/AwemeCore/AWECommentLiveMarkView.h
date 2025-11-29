@class NSString, CAGradientLayer, CAShapeLayer;

@interface AWECommentLiveMarkView : UIView <AWECommentLiveMarkViewProtocol>

@property (retain, nonatomic) CAShapeLayer *markClipLayer;
@property (retain, nonatomic) CAGradientLayer *markColorLayer;
@property (retain, nonatomic) CAShapeLayer *markClipLayerForAnimation;
@property (retain, nonatomic) CAGradientLayer *markColorLayerForAnimation;
@property (nonatomic) double lineCircleWidth;
@property (nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimationWithView:(id)a0 syncStartTime:(double)a1;
- (void)setMarkLayerGradientColor:(id)a0;
- (void)stopAnimationWithView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)setFrameRateRangeIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
