@interface BDPPluginGold : BDPBridgeInstancePlugin

- (void)showModalWithInfo:(id)a0 goldNum:(unsigned long long)a1 type:(unsigned long long)a2 uniqueID:(id)a3 callback:(id /* block */)a4;
- (void)showToastWithInfo:(id)a0 uniqueID:(id)a1;
- (void)getGoldCoinConfirmResultWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
