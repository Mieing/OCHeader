@class FWFInstanceManager, FWFNSUrlFlutterApi;

@interface FWFURLFlutterApiImpl : NSObject

@property (weak, nonatomic) FWFInstanceManager *instanceManager;
@property (retain) FWFNSUrlFlutterApi *api;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (void)create:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
