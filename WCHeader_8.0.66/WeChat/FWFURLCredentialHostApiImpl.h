@class FWFInstanceManager;
@protocol FlutterBinaryMessenger;

@interface FWFURLCredentialHostApiImpl : NSObject <FWFNSUrlCredentialHostApi>

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (void)createWithUserWithIdentifier:(long long)a0 user:(id)a1 password:(id)a2 persistence:(unsigned long long)a3 error:(id *)a4;
- (id)credentialForIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
