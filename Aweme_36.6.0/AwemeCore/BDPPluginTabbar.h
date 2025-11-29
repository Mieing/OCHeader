@interface BDPPluginTabbar : BDPBridgeInstancePlugin

- (BOOL)isiOS26Adaptor;
- (BOOL)disableTabCustomBarAdaptorInIOS26;
- (void)showTabBarRedDotWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideTabBarRedDotWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setTabBarBadgeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeTabBarBadgeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showTabBarWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideTabBarWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setTabBarItemWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setTabBarStyleWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
