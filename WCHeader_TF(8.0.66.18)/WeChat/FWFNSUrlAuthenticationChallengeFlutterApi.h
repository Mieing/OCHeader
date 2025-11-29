@class NSObject;
@protocol FlutterBinaryMessenger;

@interface FWFNSUrlAuthenticationChallengeFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;

- (id)initWithBinaryMessenger:(id)a0;
- (void)createWithIdentifier:(long long)a0 protectionSpaceIdentifier:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
