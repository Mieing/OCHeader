@class NSArray, UIImageView, AWETabBarSkinContainerView, UIView;
@protocol AWEBasicModeTabBarDelegate;

@interface AWEBasicModeTabBar : AWEBaseTabBar <AWEBizTabBarPrivateProtocol>

@property (readonly, nonatomic) UIView *awe_blurView;
@property (copy, nonatomic) NSArray *tabBarButtons;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *darkBackgroundImageView;
@property (retain, nonatomic) UIImageView *lightBackgroundImageView;
@property (retain, nonatomic) AWETabBarSkinContainerView *skinContainerView;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } exceedBounds;
@property (weak, nonatomic) id<AWEBasicModeTabBarDelegate> tabBarDelegate;
@property (readonly, nonatomic) BOOL supportsTransparentSkin;
@property (nonatomic) double desiredHeight;
@property (nonatomic) BOOL alignBottomIfExceed;
@property (nonatomic) BOOL didUpdateBackgroundImage;

+ (BOOL)enableBackgroundSkinByHambInBasicMode;
+ (Class)aAWEBizTabBarDOUYINLiteAdapterClass;
+ (Class)aAWEBizTabBarConfigCommonAdapterClass;

- (id)awe_snapshotImageView;
- (id)awe_snapshotImageViewAfterScreenUpdates:(BOOL)a0;
- (id)awe_snapshotImageAfterScreenUpdates:(BOOL)a0;
- (void)p_loadSkinContainerView;
- (void)updateTabBarButtons:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })snapshotTabBarRect;
- (void)setBackgroundImagesHidden:(BOOL)a0;
- (id)aAWEBizTabBarConfigCommonAdapter;
- (id)lightColorWithName:(id)a0;
- (void)p_setupTabBarSkinIfNeededWithReloadType:(long long)a0;
- (void)reloadImageRendererReloadType:(long long)a0;
- (void)updateBackgroundImagesByHambLightModeWithProgress:(double)a0;
- (id)aAWEBizTabBarDOUYINLiteAdapter;
- (void)setAwe_lightModeProgress:(double)a0;
- (double)awe_lightModeProgress;
- (void)setupWithLightMode:(BOOL)a0 businessID:(id)a1;
- (void)switchToLightModeWithProgress:(double)a0 businessID:(id)a1;
- (void)showBackgroundImagesByHambWithProgress:(double)a0 needReloadRenderer:(BOOL)a1;
- (id)adapter_tabBarView;
- (void)setAwe_blurView:(id)a0;
- (void)updateTabBarButtons:(id)a0 animated:(BOOL)a1;
- (void)updateView:(id)a0 fromColor:(id)a1 toColor:(id)a2 progress:(double)a3;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setAlpha:(double)a0;
- (id)snapshotViewAfterScreenUpdates:(BOOL)a0;

@end
