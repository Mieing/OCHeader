@class FWFInstanceManager;

@interface FWFWebViewConfigurationFlutterApiImpl : FWFWKWebViewConfigurationFlutterApi

@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (void)createWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
