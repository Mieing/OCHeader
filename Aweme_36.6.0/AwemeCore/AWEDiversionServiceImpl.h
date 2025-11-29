@class NSDictionary, NSString, SKStoreProductViewController;

@interface AWEDiversionServiceImpl : HTSService <SKStoreProductViewControllerDelegate, AWEDiversionService>

@property (retain, nonatomic) SKStoreProductViewController *preloadStoreController;
@property (nonatomic) BOOL isStorePresenting;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double storeViewStayStartTime;
@property (nonatomic) double storeViewBeginTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkLunaInstalled;
- (void)preloadStoreViewController;
- (void)diversionLuna:(id)a0 deepLinkPath:(id)a1 extraProps:(id)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (void)reportDiversionLunaInfoWithZlinkID:(id)a0 urlParams:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldUseProtect;
- (BOOL)checkLunaInstalledProtect;
- (void)logLunaCheckIsOutDate:(BOOL)a0 withTime:(double)a1;
- (void)openLunaWithPath:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)openAppStoreWithStoreID:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (void)reportDiversionInfo:(id)a0 withZlinkPath:(id)a1 completion:(id /* block */)a2;
- (void)diversionLunaWithZlinkPath:(id)a0 deepLinkPath:(id)a1 extraProps:(id)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (void)p_presentViewController:(id)a0 isPreload:(BOOL)a1 trackParams:(id)a2 completion:(id /* block */)a3;
- (void)trackAppStoreDismissWithParams:(id)a0;
- (void)trackAppStoreShowWithParams:(id)a0;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;

@end
