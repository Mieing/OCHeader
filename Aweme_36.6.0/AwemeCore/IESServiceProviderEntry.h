@class IESServiceWeakObject;

@interface IESServiceProviderEntry : IESServiceEntry {
    id /* block */ _provider;
    long long _scopeType;
    id _singleCache;
    Class _aClass;
    IESServiceWeakObject *_weakObject;
}

@property (copy, nonatomic) id /* block */ didResolve;

- (id)extractObject;
- (id)tryExtractObject;
- (id)initWithProvider:(id /* block */)a0 scopeType:(long long)a1;
- (id)initWithClass:(Class)a0 scopeType:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
