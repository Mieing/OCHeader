@class NSDictionary;

@interface TMCacheControlModuleConfig : TMModuleConfig

@property (copy, nonatomic) NSDictionary *cacheConfig;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
