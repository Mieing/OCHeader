@class NSString, SKStoreProductViewController;

@interface ACCCutSameVideoCutHelper : NSObject <SKStoreProductViewControllerDelegate, ACCCutSameVideoCutHelperProtocol>

@property (retain, nonatomic) SKStoreProductViewController *videoCutStorePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)jumpToTemplateCreatorActivityH5Page;
+ (id)templateCreatorActivityEntranceURLString;
+ (BOOL)templateCreatorActivityEntranceEnabled;
+ (id)templateCreatorActivityIconURLString;
+ (id)sharedInstance;

- (id)enterFrom;
- (BOOL)isVideocutInstalled;
- (id)anchorZlinkFor:(BOOL)a0;
- (void)tryOpenVideoCutWithSchema:(id)a0 awemeID:(id)a1 zlink:(id)a2 tokenURL:(id)a3 tokenCert:(id)a4 useNewAttri:(BOOL)a5;
- (id)videoCutSameMockSDKVersion;
- (void)routerToVideoCuteApplicationURL:(id)a0;
- (void)trackVideoCutDownLoadForAwemeID:(id)a0 zlink:(id)a1;
- (id)ensureFlowAuthCertIdSetWithScheme:(id)a0;
- (void)routerToVideoCuteApplicationURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)trackDownloadWithSchema:(id)a0 awemeID:(id)a1 zlink:(id)a2 tokenURL:(id)a3 tokenCert:(id)a4 useNewAttri:(BOOL)a5;
- (id)getShareTokenFrom:(id)a0;
- (void)presentVideoCutStorePageIn:(id)a0;
- (void)trackVideoCutDownLoadForAwemeID:(id)a0 isTemplate:(BOOL)a1;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;

@end
