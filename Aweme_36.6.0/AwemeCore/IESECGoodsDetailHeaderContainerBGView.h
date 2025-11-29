@class IESECGoodsDetailHeaderContainerBgImage, UIColor, UIVisualEffectView, CALayer, CAReplicatorLayer, UIView;

@interface IESECGoodsDetailHeaderContainerBGView : UIView

@property (retain, nonatomic) CALayer *bgImageLayer;
@property (retain, nonatomic) CAReplicatorLayer *bgLayer;
@property (retain, nonatomic) CALayer *topBgImageLayer;
@property (retain, nonatomic) CAReplicatorLayer *topBgLayer;
@property (retain, nonatomic) CALayer *bottomBgImageLayer;
@property (retain, nonatomic) CAReplicatorLayer *bottomBgLayer;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *maskColorView;
@property (retain, nonatomic) IESECGoodsDetailHeaderContainerBgImage *bgImageModel;
@property (retain, nonatomic) UIColor *maskColor;

- (void)setupBackgroundImage;
- (void)initializeBGView;
- (void)initializeBGViewWithBlurRadius:(double)a0 saturationDeltaFactor:(double)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (void)layoutSubviews;
- (void)setup;

@end
