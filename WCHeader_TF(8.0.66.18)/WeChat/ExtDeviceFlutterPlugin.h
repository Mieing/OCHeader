@class ExtDeviceManageFlutterAPI, NSString, ExtDeviceLoginFlutterAPI, UIViewController;

@interface ExtDeviceFlutterPlugin : NSObject <ExtDeviceNativeAPI, IOnlineClientMgrExt, MMWebViewDelegate, MMFlutterPlugin>

@property (retain, nonatomic) ExtDeviceLoginFlutterAPI *loginFlutterApi;
@property (retain, nonatomic) ExtDeviceManageFlutterAPI *manageFlutterApi;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (nonatomic) BOOL showingVerifyWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)goFileTransferWithError:(id *)a0;
- (void)goSecondVerifyAuthURL:(id)a0 error:(id *)a1;
- (void)goHelpWebviewUrl:(id)a0 error:(id *)a1;
- (void)onExtDeviceOnlineStatusChanged;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)webViewDidReturn:(id)a0;
- (void)cancelLogin;
- (void).cxx_destruct;

@end
