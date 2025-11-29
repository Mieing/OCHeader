@protocol BDPLiveEngineProtocol;

@interface BDPPluginPigeon_HG : BDPBridgeInstancePlugin

@property (weak, nonatomic) id<BDPLiveEngineProtocol> liveEngine;

- (void)callHostMethodWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)callHostMethodSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)addErrMsgWithResponse:(id)a0 errMsg:(id)a1;
- (void)addHostEventListenerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)handleLiveOpenAPI:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)handleNotInLiveGetLiveSetting:(id /* block */)a0 instance:(id)a1;
- (void)callInnerHostMethodWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
