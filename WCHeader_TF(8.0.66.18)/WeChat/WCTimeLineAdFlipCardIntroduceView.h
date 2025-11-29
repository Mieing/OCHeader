@class UIPageControl, NSString, WCAdFlipCardInfo, UILabel, WCAdURLImageView;

@interface WCTimeLineAdFlipCardIntroduceView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) WCAdFlipCardInfo *adFlipCardInfo;
@property (retain, nonatomic) UILabel *flipIntroduceLabel;
@property (retain, nonatomic) WCAdURLImageView *leftIconView;
@property (retain, nonatomic) WCAdURLImageView *rightIconView;
@property (retain, nonatomic) UIPageControl *pageCtrl;
@property (nonatomic) BOOL hasIntroduceAnimationPlayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adFlipCardInfo:(id)a1;
- (void)dealloc;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)onPageIndexUpdated:(long long)a0;
- (void)showIntroduceAnimation;
- (void)scheduledIntroduceAnimation;
- (void)switchSubviewsVisibility;
- (void)appendOpacityAnimationFrom:(double)a0 to:(double)a1 duration:(double)a2 toView:(id)a3 callback:(id /* block */)a4;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
