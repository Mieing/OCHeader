@class NSString, AWELoginBackgroundViewNavigationBarConfig, AWELoginAmbientView, NSObject;
@protocol AWEUserLoginUIAmbientConfig, AWEUserLoginUILayoutConfig;

@interface AWELoginBackgroundView : UIView <AWELoginAmbientViewDelegate>

@property (retain, nonatomic) AWELoginAmbientView *ambientView;
@property (retain, nonatomic) AWELoginBackgroundViewNavigationBarConfig *navBarConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;
@property (nonatomic) BOOL isAmbientHeadViewShown;
@property (nonatomic) long long statusBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateBackground;
- (void)showHeaderView;
- (void)headerViewLoadImageWithView:(id)a0;
- (void)p_updateNavigationBar;
- (void)updateNavigationBarConfig:(id /* block */)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideHeaderView;
- (void)updateModel:(id /* block */)a0;

@end
