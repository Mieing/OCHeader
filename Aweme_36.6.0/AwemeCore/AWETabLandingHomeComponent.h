@interface AWETabLandingHomeComponent : AWEUserHomeBaseComponent

@property (nonatomic) long long landingTabTypeAfterViewDidAppear;

- (id)tabHelper;
- (id)tabListViewController;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)p_landingToTab:(long long)a0;
- (void)landingToTab:(long long)a0;
- (long long)landingTabTypeFromParamDict:(id)a0;
- (void)onInit;

@end
