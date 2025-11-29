@class NSString;

@interface BDPPluginPublicAdContainerDownload : BDPBridgeInstancePlugin <SKStoreProductViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openAdLandPageLinksWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)downloadWithParam:(id)a0 callback:(id /* block */)a1 uniqueID:(id)a2;
- (void)downloadInSDKWithAppID:(id)a0 callback:(id /* block */)a1 uniqueID:(id)a2;
- (void)downloadOutSDKWithURL:(id)a0 callback:(id /* block */)a1 uniqueID:(id)a2;
- (void)openWithURL:(id)a0 callback:(id /* block */)a1 appID:(id)a2;
- (void)openSchemaWithURL:(id)a0 callback:(id /* block */)a1 appId:(id)a2;
- (void)downloadAppAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)productViewControllerDidFinish:(id)a0;
- (id)topViewController;

@end
