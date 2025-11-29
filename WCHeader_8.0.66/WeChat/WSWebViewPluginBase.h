@class NSString;
@protocol WSWebViewPluginableProtocol, WSWebCommunicator;

@interface WSWebViewPluginBase : NSObject <IWSWebViewPluginProtocol>

@property (nonatomic, readonly) BOOL isWebviewPreload;
@property (nonatomic, readonly) BOOL isWebviewOnForeground;
@property (copy, nonatomic) NSString *debugModuleName;
@property (weak, nonatomic) id<WSWebViewPluginableProtocol> webviewOwner;
@property (readonly, nonatomic) id<WSWebCommunicator> communicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)GetInstanceFrom:(id)a0;
+ (id)GetExistInstanceFrom:(id)a0;
+ (id)InstanceFrom:(id)a0;
+ (id)ExistInstanceFrom:(id)a0;

- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)sendEventToJSBridge:(id)a0 withParams:(id)a1;
- (void)sendEventToJSBridge:(id)a0 withParams:(id)a1 delaySendIfNotBridged:(BOOL)a2;
- (id)webview;
- (id)curViewController;
- (void).cxx_destruct;

@end
