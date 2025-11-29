@class WebViewA8KeyLogicImpl, NSMutableDictionary, NSString;

@interface MMLiteAppGetA8Key : NSObject <WebViewA8KeyLogicDelegate>

@property (retain, nonatomic) WebViewA8KeyLogicImpl *a8keyLogic;
@property (retain, nonatomic) NSMutableDictionary *mCache;
@property (retain, nonatomic) NSMutableDictionary *mPreAuthCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getInstance;

- (id)init;
- (void)preAuth:(id)a0;
- (void)getPreAuthInfo:(id)a0 callback:(id /* block */)a1;
- (void)cleanTimeoutCache:(id)a0;
- (void)runOnMainThread:(id /* block */)a0;
- (void)onGetA8Key:(BOOL)a0 ReqUrl:(id)a1 Reason:(int)a2;
- (void)onUpdatedPermisson;
- (void)onJumpToSafariWithUrl:(id)a0;
- (void)onJumpToViewController:(id)a0;
- (void)onJumpToEmoticonDetailViewController:(id)a0;
- (void)saveJSAPIAuthInfo:(id)a0;
- (void)saveJSAPIPermissions:(id)a0 url:(id)a1;
- (void)saveJSAPIPermissionsInOfflineCache:(id)a0 url:(id)a1;
- (void)onGetA8KeyWithRequestUrl:(id)a0 fullUrl:(id)a1 header:(id)a2;
- (void)onJumpToAppStoreControlWithUrl:(id)a0;
- (void).cxx_destruct;

@end
