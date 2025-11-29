@interface BDPPluginPigeonIG : BDPBridgeInstancePlugin

- (void)callHostMethodWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)callHostMethodSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)addErrMsgWithResponse:(id)a0 errMsg:(id)a1;
- (void)addHostEventListenerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)invokeWithEventName:(id)a0 result:(id)a1 error:(id)a2 uniqueID:(id)a3 extra:(id)a4;
- (void)trackWithEventName:(id)a0 uniqueID:(id)a1 params:(id)a2;

@end
