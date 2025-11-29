@class AWELGNormalModeTabBarInnerImageTextContainerView, NSString, LOTAnimationView, AWELGNormalModeTabBarFullAbilityViewUIConfig;

@interface AWELGNormalModeTabBarInnerBigAnimContainerView : UIView <LOTAnimationDelegate, AWELGNormalModeTabBarFullAbilityInnerContainerViewProtocol>

@property (retain, nonatomic) AWELGNormalModeTabBarFullAbilityViewUIConfig *UIConfig;
@property (retain, nonatomic) LOTAnimationView *bigAnimView;
@property (retain, nonatomic) AWELGNormalModeTabBarInnerImageTextContainerView *placeholderView;
@property (nonatomic) BOOL viewAppear;
@property (nonatomic) BOOL seekToEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationView:(id)a0 didLoadResourcesWithError:(id)a1;
- (void)animationViewDidStart:(id)a0;
- (struct CGPoint { double x0; double x1; })badgeBasePosition;
- (id)initWithUIConfig:(id)a0;
- (BOOL)forbidBadgeShow;
- (void)didViewAppear;
- (void)refreshImage;
- (void)updateLottieUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1 repeatCount:(long long)a2 delayMS:(long long)a3 seekToEnd:(BOOL)a4;
- (void)startAnim;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
