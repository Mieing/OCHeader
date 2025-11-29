@class NSDictionary;

@interface TMNetworkAppModeModuleConfig : TMModuleConfig

@property (readonly, copy, nonatomic) NSDictionary *appModeConfig;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
