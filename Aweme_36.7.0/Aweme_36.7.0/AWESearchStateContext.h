@class NSMutableDictionary;

@interface AWESearchStateContext : AWEPageContext

@property (retain, nonatomic) NSMutableDictionary *stateHandlers;

- (void)addKey:(unsigned long long)a0 handler:(id /* block */)a1;
- (BOOL)setState:(id)a0 forType:(unsigned long long)a1;
- (void)removeKey:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)stateForType:(unsigned long long)a0;

@end
