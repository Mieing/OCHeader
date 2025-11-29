@interface AWEPaySwiftImpl.CCMBridge : TTBridgePlugin

- (void)ccmGetEntryInfoWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)ccmRequestDesktopInstallWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)ccmPrefetchCertWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (id)init;

@end
