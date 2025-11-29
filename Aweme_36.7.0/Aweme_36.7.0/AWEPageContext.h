@interface AWEPageContext : AWEContextStore

- (void)addKey:(id)a0 handler:(id /* block */)a1;
- (void)postForKey:(id)a0;
- (void)removeKey:(id)a0 handler:(id /* block */)a1;
- (void)removeHandlersForKey:(id)a0;

@end
