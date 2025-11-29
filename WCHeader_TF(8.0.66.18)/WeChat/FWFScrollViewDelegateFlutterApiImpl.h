@class FWFInstanceManager;
@protocol FlutterBinaryMessenger;

@interface FWFScrollViewDelegateFlutterApiImpl : FWFUIScrollViewDelegateFlutterApi

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (long long)identifierForDelegate:(id)a0;
- (void)scrollViewDidScrollForDelegate:(id)a0 uiScrollView:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
