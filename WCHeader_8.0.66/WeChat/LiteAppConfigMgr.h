@interface LiteAppConfigMgr : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)mergeConfig:(id)a0;
- (void)mergeGlobalConfig;
- (id)getConfigModel:(id)a0;
- (id)getAllConfigModel;
- (id)getEngineConfigModel;
- (id)mergeDictionaries:(id)a0 dict2:(id)a1;
- (id)mergeConfigJson:(id)a0;

@end
