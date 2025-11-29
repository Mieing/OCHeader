@class UILabel, LOTAnimationView, UIImageView;

@interface AWEOlderVerticalGuideViewController : UIViewController

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) LOTAnimationView *guideLOTView;
@property (retain, nonatomic) UIImageView *highLightImgView;

- (void)__configSubviews;
- (void)showOlderVerticalGuideWithTips:(id)a0 forTargetView:(id)a1 targetViewCickHandler:(id /* block */)a2 complection:(id /* block */)a3;
- (id)__createImageWithView:(id)a0;
- (void)__releaseGuideView;
- (void).cxx_destruct;
- (id)init;

@end
