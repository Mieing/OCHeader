@class JSWorkerBridge, NSString, NSURL, TTBridgeRegister, NSObject, UIViewController;
@protocol IESLLTempoVMRuntimeBridgeEngineDelegate, TTBridgeAuthorization;

@interface IESLLTempoVMRuntimeBridgeEngine : NSObject <JSWorkerBridgeExecutor, TTBridgeEngine>

@property (weak, nonatomic) NSObject *sourceObject;
@property (weak, nonatomic) JSWorkerBridge *bridgeCore;
@property (retain, nonatomic) NSURL *sourceURL;
@property (weak, nonatomic) id<IESLLTempoVMRuntimeBridgeEngineDelegate> delegate;
@property (retain, nonatomic) TTBridgeRegister *bridgeRegister;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIViewController *sourceController;
@property (retain, nonatomic) id<TTBridgeAuthorization> authorization;

- (void)setSourceObj:(id)a0;
- (BOOL)respondsToCommand:(id)a0;
- (BOOL)executeMethodWithMessage:(id)a0 onBridge:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (long long)engineType;
- (id)init;
- (id)initWithUrl:(id)a0;

@end
