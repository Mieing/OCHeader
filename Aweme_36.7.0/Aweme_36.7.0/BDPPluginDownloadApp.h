@class NSString, BDPUniqueID, NSMutableDictionary;

@interface BDPPluginDownloadApp : BDPBridgeInstancePlugin <SKStoreProductViewControllerDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *pageParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)pluginMode;

- (id)setDownloadParamsWithParam:(id)a0;
- (void)pageCloseProcess;
- (void)createDownloadAppTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;

@end
