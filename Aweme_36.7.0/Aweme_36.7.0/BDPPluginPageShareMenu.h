@interface BDPPluginPageShareMenu : BDPBridgeInstancePlugin

- (BOOL)p_checkMenus:(id)a0;
- (void)p_operateShareMenusWithType:(long long)a0 menus:(id)a1 uniqueID:(id)a2;
- (void)showShareMenuWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)hideShareMenuWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
