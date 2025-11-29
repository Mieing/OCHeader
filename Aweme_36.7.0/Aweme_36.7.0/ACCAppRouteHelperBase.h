@class NSString, SKStoreProductViewController;

@interface ACCAppRouteHelperBase : NSObject <SKStoreProductViewControllerDelegate, ACCAppRouteHelper>

@property (retain, nonatomic) SKStoreProductViewController *appStorePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getiTunesID;
- (void)trackAppDownLoadSchema:(id)a0 awemeID:(id)a1 zlink:(id)a2;
- (void)routerToApplicationURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)getAppSchema;
- (id)ensureFlowAuthCertIdSetWithScheme:(id)a0;
- (id)getRouteToApplicationCert;
- (void)trackAppDownLoadForAwemeID:(id)a0 zlink:(id)a1;
- (id)getPasteboardCert;
- (void)presentAppStorePageIn:(id)a0;
- (void)tryOpenAppWithSchema:(id)a0 awemeID:(id)a1 zlink:(id)a2;
- (void)routerToApplicationURL:(id)a0;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;
- (BOOL)isAppInstalled;

@end
