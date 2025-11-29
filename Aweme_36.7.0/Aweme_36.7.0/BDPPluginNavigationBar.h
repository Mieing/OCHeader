@interface BDPPluginNavigationBar : BDPBridgeInstancePlugin

- (void)setNavigationBarTitleWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setNavigationBarColorWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideHomeButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showNavigationBarLoadingWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideNavigationBarLoadingWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)enableAlertBeforeUnloadWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)disableAlertBeforeUnloadWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerConfigNaviToolStatusUIWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
