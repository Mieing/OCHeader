@class BDXResourceLoader;

@interface BDXRLOperator : NSObject

@property (weak, nonatomic) BDXResourceLoader *resourceLoader;

- (void)appendPrefixToAk:(id)a0;
- (void)syncChannelIfNeeded:(id)a0 accessKey:(id)a1 modelActivePolicy:(long long)a2 completion:(id /* block */)a3;
- (void)__syncChannels:(id)a0 accessKey:(id)a1 options:(unsigned long long)a2 modelActivePolicy:(long long)a3 completion:(id /* block */)a4;
- (void)appendPrefixList:(id)a0 withAccessKey:(id)a1;
- (void)syncChannelIfNeeded:(id)a0 accessKey:(id)a1 completion:(id /* block */)a2;
- (void)registeDefaultAccessKey:(id)a0;
- (void)registeAccessKey:(id)a0 withPrefixList:(id)a1;
- (void)registeAccessKey:(id)a0 appendPrefixList:(id)a1;
- (void).cxx_destruct;

@end
