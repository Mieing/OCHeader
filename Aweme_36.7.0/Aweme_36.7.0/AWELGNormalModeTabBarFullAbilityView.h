@class UIView, NSString, AWELGNormalModeTabBarFullAbilityViewUIConfig;
@protocol AWENormalModeTabBarInnerViewUIConfigProtocol, AWELGNormalModeTabBarFullAbilityInnerContainerViewProtocol, AWENormalModeTabBarInnerViewDelegate;

@interface AWELGNormalModeTabBarFullAbilityView : UIView <AWENormalModeTabBarInnerView, AWELGNormalModeTabBarFullAbilityViewProtocol>

@property (readonly, nonatomic) AWELGNormalModeTabBarFullAbilityViewUIConfig *UIConfig;
@property (retain, nonatomic) UIView<AWELGNormalModeTabBarFullAbilityInnerContainerViewProtocol> *lastContainer;
@property (retain, nonatomic) UIView<AWELGNormalModeTabBarFullAbilityInnerContainerViewProtocol> *container;
@property (nonatomic) long long currentContainerType;
@property (nonatomic) BOOL didAppear;
@property (retain, nonatomic) id<AWENormalModeTabBarInnerViewUIConfigProtocol> config;
@property (weak, nonatomic) id<AWENormalModeTabBarInnerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewWithConfig:(id)a0;
+ (Class)aAWELGNormalModeTabBarFullAbilityViewConfigProtocolClass;

- (void)updateTitleColor:(id)a0;
- (void)updateImage:(id)a0;
- (void)tabbarStatusDidChanged:(long long)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })badgeBasePosition;
- (id)currentTitleText;
- (BOOL)updateNormalImage:(id)a0;
- (BOOL)updateSelectedImage:(id)a0;
- (BOOL)replaceDefaultNormalImage:(id)a0 defaultSelectedImage:(id)a1;
- (void)updateSelectedTitle:(id)a0;
- (void)updateUnSelectedTitle:(id)a0;
- (id)initWithUIConfig:(id)a0;
- (BOOL)forbidBadgeShow;
- (void)didViewAppear;
- (id)aAWELGNormalModeTabBarFullAbilityViewConfigProtocol;
- (void)updateLottieUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1 repeatCount:(long long)a2 delayMS:(long long)a3 seekToEnd:(BOOL)a4;
- (void)switchContainerType:(long long)a0 animate:(BOOL)a1;
- (void)updateImageUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)currentImage;
- (void)updateTitleFont:(id)a0;
- (void)updateTitle:(id)a0;

@end
