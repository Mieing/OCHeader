@class NSString, NSMutableDictionary;

@interface __RxInjector : NSObject <RxInjector, RxInjectorBinder>

@property (retain, nonatomic) NSMutableDictionary *providers;
@property (retain, nonatomic) NSMutableDictionary *scopes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInstance:(id)a0;
- (void)injectProperties:(id)a0;
- (id)getInstance:(id)a0 argArray:(id)a1;
- (void)bind:(id)a0 toBlock:(id /* block */)a1;
- (void)bind:(id)a0 withScope:(id)a1;
- (void)bind:(id)a0 toClass:(Class)a1;
- (void)bind:(id)a0 toInstance:(id)a1;
- (id)__hashKey:(id)a0;
- (id)__providerForKey:(id)a0;
- (id)__scopeForKey:(id)a0;
- (id)injectInjector:(id)a0;
- (void)__setProvider:(id)a0 forKey:(id)a1;
- (void)__removeProviderForKey:(id)a0;
- (void)bind:(id)a0 toProvider:(id)a1;
- (void)__setScope:(id)a0 forKey:(id)a1;
- (id)getInstance:(id)a0 args:(id)a1;
- (void)bind:(id)a0 toClass:(Class)a1 withScope:(id)a2;
- (void)__removeScopeForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
