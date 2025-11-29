@class NSString, SCCWebSettings, SCCLRUMutableDictionary;

@interface SCCWebManager : NSObject

@property (retain, nonatomic) SCCWebSettings *settings;
@property (retain, nonatomic) SCCLRUMutableDictionary *domainCacheList;
@property (retain) NSString *scc_hips_rule_version;
@property (readonly, nonatomic) NSString *serviceUrl;
@property (readonly, nonatomic) NSString *version;

+ (void)mergeSettings:(id)a0 fromDict:(id)a1;
+ (id)shareInstance;

- (void)setGlobalSettingsFromJson:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
