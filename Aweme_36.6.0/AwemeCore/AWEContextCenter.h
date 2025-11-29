@interface AWEContextCenter : AWEContextStore

@property (class, readonly) AWEContextCenter *defaultCenter;

- (void)postForKey:(id)a0;
- (void)removeKey:(id)a0 handler:(id /* block */)a1;
- (void)addKey:(id)a0 withDealloc:(id)a1 handler:(id /* block */)a2;
- (void)removeHandlersForKey:(id)a0 withDealloc:(id)a1;
- (void)removeHandlersWithDealloc:(id)a0;

@end
