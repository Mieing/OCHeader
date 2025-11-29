@class JSWorkerBridge, IESBridgeEngine, NSString, TTBridgeRegister, NSURL, NSObject, UIViewController;
@protocol TTBridgeAuthorization;

@interface JSWorkerBridgeEngine : NSObject <JSWorkerBridgeExecutor, TTBridgeEngine>

@property (weak, nonatomic) NSObject *sourceObject;
@property (retain, nonatomic) TTBridgeRegister *bridgeRegister;
@property (weak, nonatomic) JSWorkerBridge *bridgeCore;
@property (nonatomic) BOOL webViewBridgeCompatibility;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) IESBridgeEngine *iesBridgeEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIViewController *sourceController;
@property (retain, nonatomic) id<TTBridgeAuthorization> authorization;

- (void)fireEvent:(id)a0 params:(id)a1 resultBlock:(id /* block */)a2;
- (void)fireEvent:(id)a0 params:(id)a1;
- (void)fireEvent:(id)a0 msg:(long long)a1 params:(id)a2 resultBlock:(id /* block */)a3;
- (id)initWithWebViewBridgeCompatibility:(BOOL)a0 url:(id)a1;
- (void)setSourceObj:(id)a0;
- (BOOL)respondsToCommand:(id)a0;
- (BOOL)executeMethodWithMessage:(id)a0 onBridge:(id)a1 callback:(id /* block */)a2;
- (void)installOnWorker:(id)a0;
- (void)fireEvent:(id)a0 msg:(long long)a1 params:(id)a2;
- (void)callbackBridge:(id)a0 params:(id)a1;
- (void)callbackBridge:(id)a0 params:(id)a1 resultBlock:(id /* block */)a2;
- (void)callbackBridge:(id)a0 msg:(long long)a1 params:(id)a2 resultBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (long long)engineType;
- (id)init;

@end
