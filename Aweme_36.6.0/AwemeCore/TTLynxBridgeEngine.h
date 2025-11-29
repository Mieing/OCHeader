@class NSURL, NSString, TTBridgeRegister, BDLynxBridge, NSObject, UIViewController;
@protocol TTBridgeAuthorization;

@interface TTLynxBridgeEngine : NSObject <BDLynxBridgeExecutor, TTBridgeRegisterProtocol, TTBridgeEngine>

@property (weak, nonatomic) NSObject *sourceObject;
@property (retain, nonatomic) TTBridgeRegister *bridgeRegister;
@property (weak, nonatomic) BDLynxBridge *bridgeCore;
@property (readonly, weak, nonatomic) UIViewController *sourceController;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<TTBridgeAuthorization> authorization;

+ (id)correctTopViewControllerFor:(id)a0;

- (void)fireEvent:(id)a0 params:(id)a1 resultBlock:(id /* block */)a2;
- (id)lynxView;
- (void)fireEvent:(id)a0 params:(id)a1;
- (void)fireEvent:(id)a0 msg:(long long)a1 params:(id)a2 resultBlock:(id /* block */)a3;
- (BOOL)respondsToCommand:(id)a0;
- (BOOL)executeMethodWithMessage:(id)a0 onBridge:(id)a1 callback:(id /* block */)a2;
- (void)fireEvent:(id)a0 msg:(long long)a1 params:(id)a2;
- (void)callbackBridge:(id)a0 params:(id)a1;
- (void)callbackBridge:(id)a0 params:(id)a1 resultBlock:(id /* block */)a2;
- (void)callbackBridge:(id)a0 msg:(long long)a1 params:(id)a2 resultBlock:(id /* block */)a3;
- (void)didRegisterMethod:(id)a0 methodNamespace:(id)a1 handler:(id /* block */)a2 engineType:(long long)a3 authType:(unsigned long long)a4 domains:(id)a5 inRegister:(id)a6;
- (void)installOnLynxView:(id)a0;
- (void).cxx_destruct;
- (long long)engineType;
- (id)init;

@end
