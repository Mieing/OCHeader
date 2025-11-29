@class NSDictionary;

@interface TMPrivacyProtocolConfig : TMModuleConfig

@property (retain) NSDictionary *protocol;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
