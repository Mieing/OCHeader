@class CAAnimationGroup, NSString;

@interface CameraScanGoodsMarkDotGreenDotView : UIImageView <CAAnimationDelegate, CameraScanGoodsMarkDotViewInterface>

@property (retain, nonatomic) CAAnimationGroup *greenDotGroupAnimation;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setupGreenDotGroupAnimation;
- (void)startAnimation;
- (void)startGreenDotAnimation;
- (void)stopGreenDotAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
