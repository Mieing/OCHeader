@class NSString, AWELoginBackgroundViewNavigationBarConfig, AWELoginAmbientView, NSObject;
@protocol AWEUserLoginUIAmbientConfig, AWEUserLoginUILayoutConfig;

@interface AWELoginCustomBackgroundView : AWELoginBackgroundView <AWELoginAmbientViewDelegate>

@property (retain, nonatomic) AWELoginAmbientView *ambientView;
@property (retain, nonatomic) AWELoginBackgroundViewNavigationBarConfig *navBarConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;
@property (nonatomic) BOOL isAmbientHeadViewShown;
@property (nonatomic) BOOL avatarFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserLoginThemeAdapterClass;

- (void)p_updateBackground;
- (void)showHeaderView;
- (BOOL)shouldSetupDifferentiatingTheme;
- (id)aAWEUserLoginThemeAdapter;
- (void)headerViewLoadImageWithView:(id)a0;
- (void)p_updateNavigationBar;
- (void)updateNavigationBarConfig:(id /* block */)a0;
- (void)p_setupThemeIfNeed;
- (id)initWithAvatarFlag:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)hideHeaderView;
- (void)updateModel:(id /* block */)a0;

@end
