@class FWFInstanceManager, FWFNSUrlProtectionSpaceFlutterApi;

@interface FWFURLProtectionSpaceFlutterApiImpl : NSObject

@property (weak, nonatomic) FWFInstanceManager *instanceManager;
@property (retain) FWFNSUrlProtectionSpaceFlutterApi *api;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (void)createWithInstance:(id)a0 host:(id)a1 realm:(id)a2 authenticationMethod:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
