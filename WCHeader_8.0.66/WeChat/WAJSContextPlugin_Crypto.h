@class NSMutableDictionary, NSMutableArray;

@interface WAJSContextPlugin_Crypto : WAJSContextPluginBase

@property (retain, nonatomic) NSMutableDictionary *contexts;
@property (retain, nonatomic) NSMutableArray *keyAliasList;

+ (id)getTagInKeyChainWithInputAlias:(id)a0 appId:(id)a1;
+ (id)getKeyTagsWithAppId:(id)a0;

- (id)init;
- (void)loadKeyAliasList;
- (void)saveKeyAliasList;
- (id)getKeys;
- (void)removeKeyAlias:(id)a0;
- (void)generateKeyWithAlgorithm:(id)a0 keySize:(unsigned int)a1 keyAlias:(id)a2 completion:(id /* block */)a3;
- (void)exchangeKeyWithPublicKey:(id)a0 privateKeyAlias:(id)a1 completion:(id /* block */)a2;
- (void)openWithId:(long long)a0 type:(id)a1 algorithm:(id)a2 keyAlias:(id)a3 publicKey:(id)a4 signature:(id)a5 errMsgPtr:(id *)a6;
- (void)operateWithId:(long long)a0 type:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (void)computeWithId:(long long)a0 completion:(id /* block */)a1;
- (id)getKeyTypeWithKeyAlgorithm:(id)a0 keySize:(unsigned int)a1;
- (void).cxx_destruct;

@end
