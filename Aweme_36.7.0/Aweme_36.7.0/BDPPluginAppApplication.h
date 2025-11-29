@class NSArray, NSMutableDictionary, NSString;

@interface BDPPluginAppApplication : BDPBridgeInstancePlugin <SKStoreProductViewControllerDelegate, BDPContainerLifeCycleMessage>

@property (retain) NSMutableDictionary *checkedURL;
@property (retain, nonatomic) NSArray *lsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationEnterBackGroundWithUniqueID:(id)a0;
- (id)p_urlEncodeFixWithUrlString:(id)a0;
- (void)_jumpExternalAppWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_jumpDownloadPageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)__jumpAppStoreWithUniqueID:(id)a0 appleID:(id)a1 callback:(id /* block */)a2;
- (void)canLaunchAppSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkAppInstallWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)launchAppDirectlyWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)launchAppWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerLaunchExternalAppWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showGoHomeButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getEnterOptionsSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;
- (id)init;

@end
