@class FWFInstanceManager, FWFNSUrlAuthenticationChallengeFlutterApi;
@protocol FlutterBinaryMessenger;

@interface FWFURLAuthenticationChallengeFlutterApiImpl : NSObject

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;
@property (retain) FWFNSUrlAuthenticationChallengeFlutterApi *api;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (void)createWithInstance:(id)a0 protectionSpace:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
