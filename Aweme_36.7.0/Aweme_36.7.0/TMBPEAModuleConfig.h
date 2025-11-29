@class NSDictionary;

@interface TMBPEAModuleConfig : TMModuleConfig

@property (copy, nonatomic) NSDictionary *moduleConfigs;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
