@interface FPWritableStateFlow : FPStateFlow

@property (retain, nonatomic) id currentState;

- (id)obtainReadwriteStateProxyWith:(id)a0;
- (void)commitNewValue:(id)a0 withKeyPath:(id)a1;
- (void)updateState:(id)a0;
- (id)initWithState:(id)a0;
- (void).cxx_destruct;

@end
