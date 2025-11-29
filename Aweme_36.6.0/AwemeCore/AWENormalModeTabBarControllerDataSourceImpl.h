@class NSString;

@interface AWENormalModeTabBarControllerDataSourceImpl : NSObject <AWENormalModeTabBarControllerDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedTabBarButton;
- (id)tabBarItemViewController:(long long)a0 needUpdateButton:(BOOL)a1;
- (void)p_updateButtonProperty:(id)a0 viewController:(id)a1 channel:(id)a2;
- (void)p_hookChannelViewControllerLifeCycleIfNeed:(id)a0 channel:(id)a1;
- (void)p_updateButtonViewController:(id)a0 channel:(id)a1;
- (void)hookAllChannelViewControllerLifeCycleIfNeed;
- (id)tabBarButtons;

@end
