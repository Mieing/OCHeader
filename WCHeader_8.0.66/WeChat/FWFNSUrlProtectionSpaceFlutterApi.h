@class NSObject;
@protocol FlutterBinaryMessenger;

@interface FWFNSUrlProtectionSpaceFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;

- (id)initWithBinaryMessenger:(id)a0;
- (void)createWithIdentifier:(long long)a0 host:(id)a1 realm:(id)a2 authenticationMethod:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
