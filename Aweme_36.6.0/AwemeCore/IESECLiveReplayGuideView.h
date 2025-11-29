@class LOTAnimationView, UILabel;

@interface IESECLiveReplayGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UILabel *guideLabel;

- (void)guideViewDidTap:(id)a0;
- (id)initWithAimationFilePath:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;

@end
