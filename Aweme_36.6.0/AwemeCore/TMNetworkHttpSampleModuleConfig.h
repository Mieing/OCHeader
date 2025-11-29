@class NSDictionary;

@interface TMNetworkHttpSampleModuleConfig : TMModuleConfig

@property (readonly, copy, nonatomic) NSDictionary *httpSampleConfig;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
