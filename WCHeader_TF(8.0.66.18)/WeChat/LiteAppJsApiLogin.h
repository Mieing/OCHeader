@class WebViewA8KeyLogicImpl, NSString;

@interface LiteAppJsApiLogin : LiteAppJsApi <WebViewA8KeyLogicDelegate>

@property (retain, nonatomic) WebViewA8KeyLogicImpl *a8keyLogic;
@property (nonatomic) BOOL passAll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)getA8Key:(id)a0 usePreAuth:(BOOL)a1;
- (void)onGetA8Key:(BOOL)a0 ReqUrl:(id)a1 Reason:(int)a2;
- (void)onUpdatedPermisson;
- (void)onJumpToSafariWithUrl:(id)a0;
- (void)onJumpToViewController:(id)a0;
- (void)onJumpToEmoticonDetailViewController:(id)a0;
- (void)saveJSAPIAuthInfo:(id)a0;
- (void)saveJSAPIPermissions:(id)a0 url:(id)a1;
- (void)saveJSAPIPermissionsInOfflineCache:(id)a0 url:(id)a1;
- (void)onGetA8KeyWithRequestUrl:(id)a0 fullUrl:(id)a1 header:(id)a2;
- (BOOL)isPayLiteAppId:(id)a0;
- (id)addPayFragmentToUrl:(id)a0;
- (BOOL)urlHasPayFragment:(id)a0;
- (void).cxx_destruct;

@end
