@interface IESLLGeckoCleaner : NSObject

+ (id)shared;

- (void)cleanAllCache;
- (void)cleanCacheWithConf:(id)a0;
- (id)akWithAppType:(id)a0;
- (unsigned long long)getInnerVersionWithAk:(id)a0 channel:(id)a1;
- (id)getStorageKeyWithAk:(id)a0 channel:(id)a1 packageVersion:(long long)a2;

@end
