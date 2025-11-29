@class NSString;

@interface AWEMainJsBridgeRegister : NSObject <AWEMainJsBridgeRegisterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerJSBridgeHandler;
+ (id)findWebViewController:(id)a0;
+ (void)registerJSZMCertHandler;
+ (void)registerJSComplianceHandler;
+ (void)registerJSSocialHandler:(id)a0;
+ (void)registerJSMusicHandler;
+ (void)saveImageAction:(id)a0 jsBridge:(id)a1 success:(BOOL)a2 apiContext:(id)a3 pageContext:(id)a4;
+ (id)coverForAVAsset:(id)a0;
+ (void)showReportSuccessAlert;
+ (void)registerJSProAccountHandler:(id)a0 callbackId:(id)a1;
+ (BOOL)shouldEncrypted;


@end
