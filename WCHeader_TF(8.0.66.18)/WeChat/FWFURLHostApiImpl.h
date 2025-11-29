@class FWFInstanceManager;
@protocol FlutterBinaryMessenger;

@interface FWFURLHostApiImpl : NSObject <FWFNSUrlHostApi>

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (id)absoluteStringForNSURLWithIdentifier:(long long)a0 error:(id *)a1;
- (id)urlForIdentifier:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
