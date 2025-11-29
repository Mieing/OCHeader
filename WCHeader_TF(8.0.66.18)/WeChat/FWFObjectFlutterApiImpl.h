@class FWFInstanceManager;
@protocol FlutterBinaryMessenger;

@interface FWFObjectFlutterApiImpl : FWFNSObjectFlutterApi

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (long long)identifierForObject:(id)a0;
- (void)observeValueForObject:(id)a0 keyPath:(id)a1 object:(id)a2 change:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
