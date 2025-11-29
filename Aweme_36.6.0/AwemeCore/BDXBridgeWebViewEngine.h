@class BDXBridgeWebViewBridge, NSString;
@protocol BDXBridgeEngineCallMessageHandler;

@interface BDXBridgeWebViewEngine : NSObject <BDXBridgeEngineProtocol>

@property (retain, nonatomic) BDXBridgeWebViewBridge *bridge;
@property (weak, nonatomic) id<BDXBridgeEngineCallMessageHandler> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithContainer:(id)a0;
- (void)assertIfOldTTEngineExistForWebView:(id)a0;
- (void).cxx_destruct;

@end
