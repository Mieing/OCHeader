@interface BDPRuntimeAppWorker : BDPRuntimeApp

- (void)callbackInvoke:(id)a0 data:(id)a1;
- (id)initWithCoreCompleteBlk:(id /* block */)a0;
- (void)subscribeDirectly:(id)a0 sourceID:(long long)a1 data:(id)a2 completion:(id /* block */)a3 immediately:(BOOL)a4 uniqueID:(id)a5;
- (void)setupAppContext;
- (id)exportJSException:(id)a0;
- (void)commonInit:(id /* block */)a0 libPath:(id)a1;
- (void)dealloc;

@end
