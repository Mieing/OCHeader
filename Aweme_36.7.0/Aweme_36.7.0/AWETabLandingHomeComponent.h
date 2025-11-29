@class NSString;

@interface AWETabLandingHomeComponent : AWEUserHomeBaseComponent <AWETabLandingHomeComponentProtocol>

@property (nonatomic) long long landingTabTypeAfterViewDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (id)tabListViewController;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)p_landingToTab:(long long)a0;
- (void)landingToTab:(long long)a0;
- (long long)landingTabTypeFromParamDict:(id)a0;
- (void)onInit;

@end
