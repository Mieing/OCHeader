@class NSString;

@interface BDPPluginDownloadApp_HG : BDPBridgeInstancePlugin <SKStoreProductViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)pluginMode;

- (void)createDownloadAppTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)productViewControllerDidFinish:(id)a0;

@end
