@class IWKPiperPluginObject, NSString, NSObject;

@interface BDUnifiedWebViewBridgeEngine : TTWebViewBridgeEngine <IESBridgeEngineInterceptor>

@property (retain, nonatomic) IWKPiperPluginObject *wkJSBObject;
@property (weak, nonatomic) NSObject *sourceObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bridgeEngine:(id)a0 shouldCallbackUnregisteredMessage:(id)a1;
- (void)installOnWKWebView:(id)a0;
- (void)uninstallFromWKWebView:(id)a0;
- (void)fireEvent:(id)a0 msg:(long long)a1 params:(id)a2 resultBlock:(id /* block */)a3;
- (id)iesBridgeEngine;
- (void)setSchemaInterceptionEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)sourceURL;
- (BOOL)bridgeEngine:(id)a0 externalRespondsToMessage:(id)a1;

@end
