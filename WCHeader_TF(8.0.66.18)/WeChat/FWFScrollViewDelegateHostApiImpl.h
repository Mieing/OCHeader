@class FWFInstanceManager;
@protocol FlutterBinaryMessenger;

@interface FWFScrollViewDelegateHostApiImpl : NSObject <FWFUIScrollViewDelegateHostApi>

@property (weak, nonatomic) id<FlutterBinaryMessenger> binaryMessenger;
@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (void)createWithIdentifier:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
