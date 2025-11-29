@class NSArray, NSDictionary;

@interface TimonConfig : NSObject

@property (retain, nonatomic) NSArray *timonConfigSources;
@property (retain, nonatomic) NSDictionary *timonConfigSourceMap;
@property (retain, nonatomic) NSDictionary *sdkConfigMemoryCache;
@property (retain, nonatomic) NSDictionary *rulerConfigMemoryCache;
@property (retain, nonatomic) NSDictionary *sensitivePathConfigCache;
@property (retain, nonatomic) NSDictionary *encryptionListConfigCache;
@property (retain, nonatomic) NSDictionary *timonLogConfigCache;
@property (readonly, nonatomic) NSDictionary *ruleEngineConfig;
@property (readonly, nonatomic) NSDictionary *cacheConfig;
@property (readonly, nonatomic) NSDictionary *rules;
@property (readonly, nonatomic) NSDictionary *dataCollectConfig;
@property (readonly, nonatomic) NSDictionary *moduleConfigs;
@property (readonly, nonatomic) NSDictionary *sensitivePathConfig;
@property (readonly, nonatomic) NSDictionary *networkControlConfig;
@property (readonly, nonatomic) NSDictionary *sceneConfig;
@property (readonly, nonatomic) NSDictionary *upcCollectConfig;
@property (readonly, nonatomic) NSDictionary *permissionConfig;
@property (readonly, nonatomic) NSDictionary *monitorConfig;
@property (readonly, nonatomic) NSDictionary *encryptionListConfig;
@property (readonly, nonatomic) NSDictionary *timonLogConfig;
@property (readonly, nonatomic) NSDictionary *certConfig;

+ (void)tm_reverse_hook_timon_config;
+ (id)sharedInstance;

- (id)sdkConfig;
- (id)defaultConfigs;
- (void)syncConfig;
- (id)defaultCertConfigs;
- (id)init_tm_reverse;
- (id)tm_reverse_dataCollectConfig;
- (id)tm_reverse_encryptionListConfig;
- (void)__setUpConfigSource;
- (void)__setUpConfigUpdateBlock;
- (void)__setUpConfigUpdateBlockForConfig:(Class)a0;
- (id)__fillKeys:(id)a0 config:(Class)a1;
- (void).cxx_destruct;
- (id)init;
- (id)defaultRules;

@end
