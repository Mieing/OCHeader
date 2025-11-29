@interface BDPRemoteDebugRuntimeWKGame : BDPRemoteDebugRuntimeApp

+ (void)bootstrapLaunch;
+ (id)debugRuntimeWithUniqueID:(id)a0;
+ (unsigned long long)type;

- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)webSocketManager:(id)a0 didFailWithError:(id)a1;
- (void)webSocketManager:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (void)webSocketDidReceiveEvent:(id)a0;
- (void)sendInitToIDE:(id /* block */)a0;
- (void)disableWebViewInspectable;
- (void)sendWKWebViewInitToIDE:(id)a0;
- (id)initWithUniqueID:(id)a0;

@end
