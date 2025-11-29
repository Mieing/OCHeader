@class NSString, HybridResourceLoaderConfig, NSMutableDictionary;

@interface HybridRLOperator : NSObject <HybridResourceLoaderAdvancedOperatorProtocol>

@property (weak, nonatomic) HybridResourceLoaderConfig *loaderConfig;
@property (retain, nonatomic) NSMutableDictionary *falconPrefixList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendPrefixList:(id)a0 withAccessKey:(id)a1;
- (void)syncChannelIfNeeded:(id)a0 accessKey:(id)a1 completion:(id /* block */)a2;
- (void)registeDefaultAccessKey:(id)a0;
- (void)registeAccessKey:(id)a0 withPrefixList:(id)a1;
- (void)registeAccessKey:(id)a0 appendPrefixList:(id)a1;
- (id)getDefaultAccessKey;
- (id)getFalconPrefixList;
- (unsigned long long)packageVersionForAccessKey:(id)a0 andChannel:(id)a1;
- (void)__syncChannels:(id)a0 accessKey:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)syncChannelIfNeeded:(id)a0 accessKey:(id)a1;
- (void).cxx_destruct;

@end
