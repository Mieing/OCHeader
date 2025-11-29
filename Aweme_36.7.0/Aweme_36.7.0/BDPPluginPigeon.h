@interface BDPPluginPigeon : BDPBridgeInstancePlugin

- (void)callHostMethodWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)callHostMethodSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)addErrMsgWithResponse:(id)a0 errMsg:(id)a1;
- (void)authorizePrivateMessageProcessWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2 authorizatinIsNeeded:(BOOL)a3 metaOpenId:(id)a4;
- (void)sendClosePrivateMessageViewEventWithInstance:(id)a0 param:(id)a1 extraDict:(id)a2;
- (id)errWithResponse:(id)a0 errMsg:(id)a1;
- (void)addHostEventListenerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)fireEventSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)authorizePrivateMessageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)closePrivateMessageViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)callBusinessMethodWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)callBusinessMethodSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
