@class NSString;
@protocol IESLivePiperProtocol;

@interface IESLynxMonitorBridgeHandler : NSObject <IESLivePiperHandlerProtocol>

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)monitorLynxCallHandler;
- (id /* block */)reportLynxErrorCallHandler;
- (id)lynxMonitorClient;
- (void).cxx_destruct;

@end
