@class NSDictionary;

@interface TMNetworkHttpDetectionModuleConfig : TMModuleConfig

@property (readonly, copy, nonatomic) NSDictionary *httpDetectionConfig;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
