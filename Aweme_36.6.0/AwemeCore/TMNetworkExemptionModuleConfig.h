@class NSDictionary;

@interface TMNetworkExemptionModuleConfig : TMModuleConfig

@property (readonly, copy, nonatomic) NSDictionary *exemptionConfig;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
