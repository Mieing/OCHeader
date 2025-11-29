@class WebViewA8KeyLogicImpl, NSString, NSHashTable;

@interface MMLiteAppDeeplinkHandler : NSObject <WebViewA8KeyLogicDelegate>

@property (retain, nonatomic) WebViewA8KeyLogicImpl *a8keyLogic;
@property (retain, nonatomic) NSHashTable *delegateArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLiteAppDeeplinkURL:(id)a0;

- (id)init;
- (void)handleLiteAppURL:(id)a0;
- (void)addDelegate:(id)a0;
- (void)onGetA8KeyWithRequestUrl:(id)a0 fullUrl:(id)a1 header:(id)a2;
- (void)onGetA8Key:(BOOL)a0 ReqUrl:(id)a1 Reason:(int)a2;
- (void)onUpdatedPermisson;
- (void)onJumpToSafariWithUrl:(id)a0;
- (void)onJumpToViewController:(id)a0;
- (void)onJumpToEmoticonDetailViewController:(id)a0;
- (void)saveJSAPIAuthInfo:(id)a0;
- (void)saveJSAPIPermissions:(id)a0 url:(id)a1;
- (void)saveJSAPIPermissionsInOfflineCache:(id)a0 url:(id)a1;
- (void).cxx_destruct;

@end
