@class NSString, UIImageView, IESLiveGiftBannerViewModel, UILabel, CAKeyframeAnimation;

@interface IESLiveGiftBannerView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *giftBannerImageView;
@property (retain, nonatomic) IESLiveGiftBannerViewModel *giftBannerViewModel;
@property (retain, nonatomic) CAKeyframeAnimation *giftBannerImageRotationAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)pr_loadsubViews;
- (void)pr_bindViewModel;
- (void)didGiftBannerViewTaped:(id)a0;
- (void)shakeGiftBannerImageView;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
