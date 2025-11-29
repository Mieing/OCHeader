@class FWFInstanceManager;

@interface FWFObjectHostApiImpl : NSObject <FWFNSObjectHostApi>

@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithInstanceManager:(id)a0;
- (id)objectForIdentifier:(long long)a0;
- (void)addObserverForObjectWithIdentifier:(long long)a0 observerIdentifier:(long long)a1 keyPath:(id)a2 options:(id)a3 error:(id *)a4;
- (void)removeObserverForObjectWithIdentifier:(long long)a0 observerIdentifier:(long long)a1 keyPath:(id)a2 error:(id *)a3;
- (void)disposeObjectWithIdentifier:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
