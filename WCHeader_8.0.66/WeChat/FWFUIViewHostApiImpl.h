@class FWFInstanceManager;

@interface FWFUIViewHostApiImpl : NSObject <FWFUIViewHostApi>

@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithInstanceManager:(id)a0;
- (id)viewForIdentifier:(long long)a0;
- (void)setBackgroundColorForViewWithIdentifier:(long long)a0 toValue:(id)a1 error:(id *)a2;
- (void)setOpaqueForViewWithIdentifier:(long long)a0 isOpaque:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
