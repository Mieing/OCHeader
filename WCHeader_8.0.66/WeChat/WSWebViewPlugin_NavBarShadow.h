@class UIView;

@interface WSWebViewPlugin_NavBarShadow : WSWebViewPluginBase

@property (retain, nonatomic) UIView *navShadowView;
@property (nonatomic) double animateDuration;
@property (nonatomic) BOOL enableAddShadow;

- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)showNavBarShadow:(id)a0;
- (void)layoutNavShadowView;
- (double)shadowViewHeight;
- (void)manuallyHideNavShadowView;
- (void)hideNavBarShadow:(id)a0;
- (void).cxx_destruct;

@end
