@class POPSpringAnimation, NSString, UIImageView, CAAnimationGroup, CABasicAnimation;

@interface CameraScanGoodsMarkDotCustomImageView : UIImageView <CAAnimationDelegate, CameraScanGoodsMarkDotViewInterface>

@property (retain, nonatomic) UIImageView *fgImageView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) CABasicAnimation *fgImageRotationAnimation;
@property (retain, nonatomic) POPSpringAnimation *fgImageScaleAnimation;
@property (retain, nonatomic) CAAnimationGroup *bgImageGroupAnimation;
@property (nonatomic) unsigned long long fgImageScaleBeginTimestamp;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCustomImage:(id)a0;
- (void)setupFgImageRotationAnimation:(id)a0;
- (void)setupFgImageScaleAnimation;
- (void)setupBgImageGroupAnimation;
- (void)startAnimation;
- (void)startFgImageRotationAnimation;
- (void)stopFgImageRotationAnimation;
- (void)startFgImageScaleAnimation;
- (void)stopFgImageScaleAnimation;
- (void)startBgImageAnimation;
- (void)stopBgImageAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)pop_animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
