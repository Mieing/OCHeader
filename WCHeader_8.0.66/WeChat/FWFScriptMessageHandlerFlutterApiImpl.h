@class FWFInstanceManager;

@interface FWFScriptMessageHandlerFlutterApiImpl : FWFWKScriptMessageHandlerFlutterApi

@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (long long)identifierForHandler:(id)a0;
- (void)didReceiveScriptMessageForHandler:(id)a0 userContentController:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
