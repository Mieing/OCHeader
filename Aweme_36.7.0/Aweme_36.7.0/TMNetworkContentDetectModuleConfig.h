@class NSDictionary;

@interface TMNetworkContentDetectModuleConfig : TMModuleConfig

@property (readonly, copy, nonatomic) NSDictionary *contentDetectConfig;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
