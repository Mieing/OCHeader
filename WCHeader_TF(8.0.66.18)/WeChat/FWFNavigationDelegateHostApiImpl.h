@class FWFInstanceManager;
@protocol FlutterBinaryMessenger;

@interface FWFNavigationDelegateHostApiImpl : NSObject <FWFWKNavigationDelegateHostApi>

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (id)navigationDelegateForIdentifier:(long long)a0;
- (void)createWithIdentifier:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
