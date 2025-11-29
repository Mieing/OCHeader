@class NSString;
@protocol RxInjector, RTVJetMonitorProtocol, RTVJetHTTPRetryableValidatorInterface, RTVJetHttpWebAccessProtocol, RTVJetWebSocketBridgeInterface, RTVJetConfigOptionsProtocol;

@interface RTVAWEJetConfig : NSObject <RTVJetConfigManagerInterface>

@property (retain, nonatomic) id<RTVJetHttpWebAccessProtocol> httpWebAccess;
@property (retain, nonatomic) id<RTVJetHTTPRetryableValidatorInterface> httpRetryableValidator;
@property (retain, nonatomic) id<RTVJetWebSocketBridgeInterface> webSocketBridge;
@property (retain, nonatomic) id<RTVJetConfigOptionsProtocol> config;
@property (retain, nonatomic) id<RTVJetMonitorProtocol> monitor;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorInitializer;

- (void)rxAwakeFromPropertyInjection;
- (id)initWithHttpWebAccess:(id)a0 httpRetryableValidator:(id)a1 webSocketBridge:(id)a2 monitor:(id)a3;
- (void).cxx_destruct;

@end
