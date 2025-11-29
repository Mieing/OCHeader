@interface BDPPluginCustomerService : BDPBridgeInstancePlugin

+ (void)openHostCustomerServiceWithWebURL:(id)a0 extraInfo:(id)a1 appID:(id)a2 callback:(id /* block */)a3;

- (void)openCustomerServiceWithAppId:(id)a0 aid:(id)a1 uid:(id)a2 callback:(id /* block */)a3;
- (void)openCustomerServiceWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
