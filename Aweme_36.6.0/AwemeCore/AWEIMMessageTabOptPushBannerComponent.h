@interface AWEIMMessageTabOptPushBannerComponent : AWEIMMessageTabCommonBannerComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)app_willEnterForeground;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)onTabBarDidChangeNotification:(id)a0;
- (Class)interactorClass;
- (id)pushGuideBannerInteractor;
- (void)updateGuideBanner;
- (void)viewWillAppear;

@end
