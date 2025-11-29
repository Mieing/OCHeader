@class NSString;
@protocol BDXBridgeContainerFirerProtocol, BDXBridgeEngineProtocol, BDXBridgeEngineCallMessageHandler;

@interface BDXBridgeProtocolManager : NSObject <BDXBridgeEngineCallMessageHandler>

@property (weak, nonatomic) id<BDXBridgeContainerFirerProtocol> container;
@property (retain, nonatomic) id<BDXBridgeEngineProtocol> bridgeEngine;
@property (weak, nonatomic) id<BDXBridgeEngineCallMessageHandler> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)secplugin_swizzleMethods;
+ (void)secplugin_enablePlugins;

- (void)fireEvent:(id)a0 params:(id)a1 resultBlock:(id /* block */)a2;
- (void)handleCallMessage:(id)a0 resultHandler:(id /* block */)a1;
- (void)secplugin_handleCallMessage:(id)a0 resultHandler:(id /* block */)a1;
- (id)sec_webView;
- (void)setupWithWebView:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
