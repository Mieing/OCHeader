@class NSDictionary;

@interface TMNetworkDownlinkEncryptionModuleConfig : TMModuleConfig

@property (readonly, copy, nonatomic) NSDictionary *downlinkEncryptionConfig;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
